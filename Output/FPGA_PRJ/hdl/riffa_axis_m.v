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
// Description:         RIFFA RX interface to AXI-Stream
// Author:              Qiongzhi Wu
// History:             0.1: initial version
//                      0.2: Add performance counters
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module riffa_axis_m #(
    parameter C_AXIS_DATA_WIDTH = 32,  // 8/16/32/.../C_PCI_DATA_WIDTH
    parameter C_PCI_DATA_WIDTH = 128,
    parameter C_COUNTER = 0,
    parameter C_COUNTER_WIDTH = 32,
    parameter C_COUNTER_DIV = 0)
(
    ////////////////////////////////////////////////////////////////////////////
    // AXI-Lite Master
    input  M_AXIS_RSTN,
    input  M_AXIS_CLK,
    output reg M_AXIS_TVALID,
    output reg M_AXIS_TLAST,
    input  M_AXIS_TREADY,
    output [C_AXIS_DATA_WIDTH-1 : 0] M_AXIS_TDATA,
    ///////////////////////////////////////////////////////////////////////////
    output CHNL_RX_CLK,
    input  CHNL_RX,
    output reg  CHNL_RX_ACK,
    input  CHNL_RX_LAST,
    input  [31:0] CHNL_RX_LEN,
    input  [30:0] CHNL_RX_OFF,
    input  [C_PCI_DATA_WIDTH-1:0] CHNL_RX_DATA,
    input  CHNL_RX_DATA_VALID,
    output reg  CHNL_RX_DATA_REN,
    ///////////////////////////////////////////////////////////////////////////
    output reg [C_COUNTER_WIDTH-1: 0] START_TICKS,
    output reg [C_COUNTER_WIDTH-1: 0] END_TICKS,
    output reg [C_COUNTER_WIDTH-1: 0] DATA_BYTES
);

    wire clk, rstn;
    assign clk = M_AXIS_CLK;
    assign rstn = M_AXIS_RSTN;
    assign CHNL_RX_CLK = clk;
    
    localparam C_WIDTH_RATIO = (C_PCI_DATA_WIDTH / C_AXIS_DATA_WIDTH);
    localparam C_PCI_BYTE_WIDTH = (C_PCI_DATA_WIDTH / 8);
    localparam C_AXIS_BYTE_WIDTH = (C_AXIS_DATA_WIDTH / 8);

    reg [C_PCI_DATA_WIDTH:0] buffer;

    reg [4:0] buffer_status;
    
    localparam ST_IDLE          = 4'b0000;
    localparam ST_RX            = 4'b0001;
    localparam ST_RX_END        = 4'b0010;

    reg [3:0] stat;
    reg [33:0] byte_cnt; 
    reg chnl_rx_valid_r;
    reg chnl_rx_last_r;
    
    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            stat <= ST_IDLE;
            buffer_status <= 'b0;
            buffer <= 'b0;
            byte_cnt <= 'b0;
            chnl_rx_last_r <= 'b0;
            CHNL_RX_ACK <= 'b0;
            M_AXIS_TLAST <= 1'b0;
            M_AXIS_TVALID <= 1'b0;
        end else begin
            case (stat)
            ST_IDLE : begin
                    if (CHNL_RX)
                    begin
                        buffer_status <= 5'b0;
                        //word legnth to byte length
                        byte_cnt <= {CHNL_RX_LEN, 2'b00}; 
                        chnl_rx_last_r <= CHNL_RX_LAST;
                        CHNL_RX_ACK <= 1'b1;
                        M_AXIS_TLAST <= 1'b0;
                        M_AXIS_TVALID <= 1'b0;
                        stat <= ST_RX;
                    end
                end
            ST_RX : begin
                    CHNL_RX_ACK <= 1'b0;
                    
                    if (buffer_status == 'b0) //buffer no data
                    begin
                        if (CHNL_RX_DATA_VALID)
                        begin
                            //load new data
                            buffer <= {1'b0, CHNL_RX_DATA};
                            buffer_status <= 5'b1;
                            M_AXIS_TVALID <= 1'b1;
                            M_AXIS_TLAST <= (chnl_rx_last_r && 
                                (byte_cnt <= C_AXIS_BYTE_WIDTH));
                            if (byte_cnt <= C_AXIS_BYTE_WIDTH)
                                stat <= ST_RX_END;
                        end
                    end else if (M_AXIS_TREADY)
                    begin
                        if (buffer_status == C_WIDTH_RATIO) 
                                //buffer has last data
                        begin
                            if (CHNL_RX_DATA_VALID)
                            begin
                                //load new data
                                buffer <= {1'b0, CHNL_RX_DATA};
                                buffer_status <= 5'b1;
                                M_AXIS_TVALID <= 1'b1;
                                M_AXIS_TLAST <= (chnl_rx_last_r && 
                                    (byte_cnt <= C_AXIS_BYTE_WIDTH*2));
                                if (byte_cnt <= C_AXIS_BYTE_WIDTH*2)
                                    stat <= ST_RX_END;
                            end else begin
                                //buffer go empty
                                buffer_status <= 5'b0;
                                M_AXIS_TVALID <= 1'b0;
                            end
                        end else begin
                            //buffer shift
                            buffer <= buffer[C_PCI_DATA_WIDTH: 
                                C_AXIS_DATA_WIDTH];
                            buffer_status <= buffer_status + 1;
                            M_AXIS_TVALID <= 1'b1;
                            M_AXIS_TLAST <= (chnl_rx_last_r && 
                                (byte_cnt <= C_AXIS_BYTE_WIDTH*2));
                            if (byte_cnt <= C_AXIS_BYTE_WIDTH*2)
                                stat <= ST_RX_END;
                        end
                        
                        byte_cnt <= byte_cnt - C_AXIS_BYTE_WIDTH;
                        
                        
                    end
                 end
             ST_RX_END : begin
             
                        CHNL_RX_ACK <= 1'b0;
                        
                        if (M_AXIS_TREADY)
                        begin
                            M_AXIS_TLAST <= 1'b0;
                            M_AXIS_TVALID <= 1'b0;
                        end
                        
                        //wait until both CHNL and AXIS complete
                        if (!(CHNL_RX || M_AXIS_TVALID)) 
                            stat <= ST_IDLE;                        
                end
             default : begin
                    stat <= ST_IDLE;
                end
            endcase
        end
    end
    
    always @ (posedge clk) chnl_rx_valid_r <= CHNL_RX_DATA_VALID;
    
    always @ (*)
    begin
        if (stat == ST_RX)
        begin
            if (buffer_status == 0)
                CHNL_RX_DATA_REN <= 1'b1;
            else if (buffer_status == C_WIDTH_RATIO)
                CHNL_RX_DATA_REN <= M_AXIS_TREADY;
            else
                CHNL_RX_DATA_REN <= 1'b0;
        end else if (stat == ST_RX_END)
        begin
            //cut the other data
            CHNL_RX_DATA_REN <= chnl_rx_valid_r;  
        end else 
        begin
            CHNL_RX_DATA_REN <= 1'b0;
        end
    end
    
    assign M_AXIS_TDATA = buffer[C_AXIS_DATA_WIDTH - 1: 0];
    
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
                
                start_tick_rdy <= (stat == ST_RX);
                start_tick_trig <= (stat == ST_RX) && !start_tick_rdy;
                if (start_tick_trig)
                    START_TICKS <= timer[C_COUNTER_DIV +: C_COUNTER_WIDTH];
                
                end_tick_rdy <= (stat == ST_RX_END);
                end_tick_trig <= (stat == ST_RX_END) && !end_tick_rdy;
                if (end_tick_trig)
                    END_TICKS <= timer[C_COUNTER_DIV +: C_COUNTER_WIDTH];
                    
                data_cnt_pulse <= (stat == ST_RX) && CHNL_RX_DATA_REN && CHNL_RX_DATA_VALID;
                
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
