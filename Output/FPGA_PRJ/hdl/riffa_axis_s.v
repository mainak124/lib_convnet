// ----------------------------------------------------------------------
// Copyright (c) 2015, The Regents of the University of California All
// rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//
//     * Redistributions in binary form must reproduce the above
//       copyright notice, this list of conditions and the following
//       disclaimer in the documentation and/or other materials provided
//       with the distribution.
//
//     * Neither the name of The Regents of the University of California
//       nor the names of its contributors may be used to endorse or
//       promote products derived from this software without specific
//       prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL REGENTS OF THE
// UNIVERSITY OF CALIFORNIA BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
// BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
// OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR
// TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE
// USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
// DAMAGE.
// ----------------------------------------------------------------------
//----------------------------------------------------------------------------
// Filename:            riffa_axis.v
// Version:             0.2
// Verilog Standard:    Verilog-2001
// Description:         AXI-Stream to RIFFA TX interface 
// Author:              Qiongzhi Wu
// History:             0.1: initial version
//                      0.2: Add performance counters
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module riffa_axis_s #(
    parameter C_AXIS_DATA_WIDTH = 32, // 8/16/32/.../C_PCI_DATA_WIDTH
    parameter C_PCI_DATA_WIDTH = 128,
    parameter C_COUNTER = 0,
    parameter C_COUNTER_WIDTH = 32,
    parameter C_COUNTER_DIV = 0)
(
    ////////////////////////////////////////////////////////////////////////////
    // AXI-Lite Slave (data input)
    input  S_AXIS_RSTN,
    input  S_AXIS_CLK,
    input  S_AXIS_TVALID,
    input  S_AXIS_TLAST,
    output reg  S_AXIS_TREADY,
    input [C_AXIS_DATA_WIDTH-1 : 0] S_AXIS_TDATA,
    input  [31:0] S_AXIS_LEN,
    ///////////////////////////////////////////////////////////////////////////
    output CHNL_TX_CLK,
    output reg CHNL_TX,
    input  CHNL_TX_ACK,
    output reg CHNL_TX_LAST,
    output reg [31:0] CHNL_TX_LEN,
    output reg [30:0] CHNL_TX_OFF,
    output [C_PCI_DATA_WIDTH-1:0] CHNL_TX_DATA,
    output reg CHNL_TX_DATA_VALID,
    input   CHNL_TX_DATA_REN,
    ///////////////////////////////////////////////////////////////////////////
    output reg [C_COUNTER_WIDTH-1: 0] START_TICKS,
    output reg [C_COUNTER_WIDTH-1: 0] END_TICKS,
    output reg [C_COUNTER_WIDTH-1: 0] DATA_BYTES
);

    wire clk, rstn;
    assign clk = S_AXIS_CLK;
    assign rstn = S_AXIS_RSTN;
    assign CHNL_TX_CLK = clk;
    
    localparam C_WIDTH_RATIO = (C_PCI_DATA_WIDTH / C_AXIS_DATA_WIDTH);
    localparam C_PCI_BYTE_WIDTH = (C_PCI_DATA_WIDTH / 8);
    localparam C_AXIS_BYTE_WIDTH = (C_AXIS_DATA_WIDTH / 8);
    
    reg [C_PCI_DATA_WIDTH-1:0] buffer;

    reg [4:0] buffer_status;
        
    localparam ST_IDLE          = 4'b0000;
    localparam ST_TX_REQ        = 4'b0001;
    localparam ST_TX            = 4'b0010;
    localparam ST_TX_END        = 4'b0011;

    reg [3:0] stat;
    reg [33:0] byte_cnt; 
    reg frame_continue;
    integer i;

    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            stat <= ST_IDLE;
            frame_continue <= 1'b0;
            buffer_status <= 'b0;
            buffer <= 'b0;
            byte_cnt <= 'b0;
            CHNL_TX <= 'b0;
            CHNL_TX_LEN <= 'b0;
            CHNL_TX_OFF <= 'b0;
            CHNL_TX_LAST <= 1'b0;
            CHNL_TX_DATA_VALID <= 1'b0;

        end else begin
            case (stat)
            ST_IDLE : begin
                    if (S_AXIS_TVALID)
                    begin
                        if (S_AXIS_LEN != 0)
                        begin
                            CHNL_TX <=1'b1;
                            CHNL_TX_LEN <= S_AXIS_LEN;
                            CHNL_TX_LAST <= 1'b1;
                            byte_cnt <= {S_AXIS_LEN, 2'b00};
                            stat <= ST_TX_REQ;
                        end
                    end
                end
            ST_TX_REQ : begin
                    if (CHNL_TX_ACK)
                    begin
                        buffer_status <= 'b0;
                        CHNL_TX_DATA_VALID <= 1'b0;
                        stat <= ST_TX;
                    end
                end
            ST_TX : begin
                    if (buffer_status != C_WIDTH_RATIO) //buffer not full
                    begin
                        if (S_AXIS_TVALID)
                        begin
                            //load new data
                            for (i = 0; i < C_WIDTH_RATIO; i = i + 1)
                            begin
                                if (buffer_status == i)
                                    buffer[C_AXIS_DATA_WIDTH*i +: 
                                        C_AXIS_DATA_WIDTH] <= S_AXIS_TDATA;
                            end
                            
                            byte_cnt <= byte_cnt - C_AXIS_BYTE_WIDTH;
                            if ((byte_cnt <= C_AXIS_BYTE_WIDTH) || S_AXIS_TLAST)
                                 //last cnt data or axis_last
                            begin
                                buffer_status <= C_WIDTH_RATIO; 
                                    //force the buffer full
                                CHNL_TX_DATA_VALID <= 1'b1;
                                frame_continue <= 1'b0;
                            end else begin
                                buffer_status <= buffer_status + 1'b1;
                                CHNL_TX_DATA_VALID <= 
                                    (buffer_status == C_WIDTH_RATIO - 1);
                                frame_continue <= 1'b1;
                            end
                        end
                    end else if (CHNL_TX_DATA_REN) //trans on CHNL_TX
                    begin
                        if (!frame_continue) //frame finished
                        begin
                            CHNL_TX_DATA_VALID <= 1'b0;
                            stat <= ST_TX_END;
                        end else if (S_AXIS_TVALID)  //new axis data available
                        begin
                            buffer[0 +: C_AXIS_DATA_WIDTH] <= S_AXIS_TDATA;
                            buffer_status <= 5'b1;
                            byte_cnt <= byte_cnt - C_AXIS_BYTE_WIDTH;
                            CHNL_TX_DATA_VALID <= 1'b0;
                            
                            //if last cnt data or axis_last
                            if ((byte_cnt <= C_AXIS_BYTE_WIDTH) || S_AXIS_TLAST) 
                            begin
                                //force the buffer full
                                buffer_status <= C_WIDTH_RATIO; 
                                CHNL_TX_DATA_VALID <= 1'b1;
                                frame_continue <= 1'b0;
                            end else begin
                                buffer_status <= 5'b1;
                                CHNL_TX_DATA_VALID <= 1'b0;
                                frame_continue <= 1'b1;
                            end
                        end else begin
                            buffer_status <= 5'b0; //mark the buffer empty
                            CHNL_TX_DATA_VALID <= 1'b0;
                        end
                    end
                end
            ST_TX_END: begin
                    if ((!CHNL_TX_DATA_VALID) || CHNL_TX_DATA_REN)
                    begin
                        if ((byte_cnt == 0) || 
                            (byte_cnt[33:7] == {(34-7){1'b1}}))
                        begin
                            CHNL_TX_DATA_VALID <= 1'b0;
                            CHNL_TX <= 1'b0;
                            stat <= ST_IDLE;
                        end else
                        begin
                            //insert dummy chnl data to 
                            //complete the required length
                            CHNL_TX_DATA_VALID <= 1'b1;
                            byte_cnt <= byte_cnt - C_AXIS_BYTE_WIDTH;
                        end
                    end
                end
             default : begin
                    stat <= ST_IDLE;
                end
            endcase
        end
    end
    
    always @ (*)
    begin
        if (stat == ST_TX)
        begin
            //always ready to fill the buffer
            if (buffer_status != C_WIDTH_RATIO) 
                S_AXIS_TREADY <= 1'b1;
            else
                S_AXIS_TREADY <= CHNL_TX_DATA_REN && frame_continue;
        end else
            S_AXIS_TREADY <= 1'b0;
    end
    
    assign CHNL_TX_DATA = buffer;

    reg [C_COUNTER_DIV + C_COUNTER_WIDTH - 1: 0] timer;
    reg start_tick_rdy, end_tick_rdy;
    reg start_tick_trig, end_tick_trig;
    reg data_cnt_pulse;

    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            START_TICKS <= 'b0;
            END_TICKS <= 'b0;
            DATA_BYTES <= 'b0;
            timer <= 'b0;
            start_tick_rdy <= 1'b0;
            start_tick_trig <= 1'b0;
            end_tick_rdy <= 1'b0;
            end_tick_trig <= 1'b0;
            data_cnt_pulse <= 1'b0;
        end else begin
        
            if (C_COUNTER)
            begin
                if (~timer != 0)
                    timer <= timer + 1'b1;
                
                start_tick_rdy <= (stat == ST_TX);
                start_tick_trig <= (stat == ST_TX) && !start_tick_rdy;
                if (start_tick_trig)
                    START_TICKS <= timer[C_COUNTER_DIV +: C_COUNTER_WIDTH];
                
                end_tick_rdy <= (stat == ST_TX_END);
                end_tick_trig <= (stat == ST_TX_END) && !end_tick_rdy;
                if (end_tick_trig)
                    END_TICKS <= timer[C_COUNTER_DIV +: C_COUNTER_WIDTH];
                    
                data_cnt_pulse <= (stat == ST_TX) && CHNL_TX_DATA_REN && CHNL_TX_DATA_VALID;
                
                if (data_cnt_pulse)
                    DATA_BYTES <= DATA_BYTES + C_PCI_BYTE_WIDTH;
            end else begin
                START_TICKS <= 'b0;
                END_TICKS <= 'b0;
                DATA_BYTES <= 'b0;
                timer <= 'b0;
            end
        end
    end


endmodule
