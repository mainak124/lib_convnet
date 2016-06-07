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
// Filename:            axis_tester.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         AXI-Stream TX/RX tester. Receive a AXIS frame, verify, 
//                      and send back.
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module axis_tester #(
    parameter C_AXIS_DATA_WIDTH = 32) //only 32-bit
(
    ////////////////////////////////////////////////////////////////////////////
    // AXI-Lite Slave (data input)
    input  AXIS_RSTN,
    input  AXIS_CLK,
    input  S_AXIS_TVALID,
    input  S_AXIS_TLAST,
    output S_AXIS_TREADY,
    input [C_AXIS_DATA_WIDTH-1 : 0] S_AXIS_TDATA,
    output M_AXIS_TVALID,
    output reg M_AXIS_TLAST,
    input  M_AXIS_TREADY,
    output [C_AXIS_DATA_WIDTH-1 : 0] M_AXIS_TDATA,
    output reg [31:0] M_AXIS_LEN,
    output reg [31:0] ERR_CNT
);

    wire clk, rstn;
    assign clk = AXIS_CLK;
    assign rstn = AXIS_RSTN;
    
    localparam C_AXIS_BYTE_WIDTH = (C_AXIS_DATA_WIDTH / 8);
        
    localparam ST_IDLE          = 4'b0000;
    localparam ST_RX            = 4'b0001;
    localparam ST_TX            = 4'b0010;

    reg [3:0] stat;
    reg [31:0] byte_cnt; 
    reg [31:0] counter;
    
    reg [10:0] rand;
    
    integer i;

    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            rand <= 11'b11;
            stat <= ST_IDLE;
            byte_cnt <= 'b0;
            counter <= 'b0;
            ERR_CNT <= 'b0;
            M_AXIS_LEN <= 'b0;
            M_AXIS_TLAST <= 1'b0;
        end else begin
        
            //random
            rand <= {rand[9:0], rand[10]^rand[8]};
        
            case (stat)
            ST_IDLE : begin
                    if (S_AXIS_TVALID)
                    begin
                        ERR_CNT <= 'b0;
                        counter <= 1;
                        stat <= ST_RX;
                    end
                end
            ST_RX : begin
                    if (S_AXIS_TVALID && S_AXIS_TREADY)
                    begin
                        counter <= counter + 1;
                        if (S_AXIS_TDATA[31:0] != counter)
                            ERR_CNT <= ERR_CNT + 1'b1;
                        if (S_AXIS_TLAST)
                        begin
                            stat <= ST_TX;
                            counter <= 1;
                            byte_cnt <= {counter[29:0], 2'b00};
                            M_AXIS_LEN <= counter;
                            M_AXIS_TLAST <= 1'b0;
                        end
                    end
                end
            ST_TX : begin
                    if (M_AXIS_TVALID && M_AXIS_TREADY)
                    begin
                        counter <= counter + 1;
                        byte_cnt <= byte_cnt - C_AXIS_BYTE_WIDTH;
                        if (byte_cnt == C_AXIS_BYTE_WIDTH*2)
                        begin
                            M_AXIS_TLAST <= 1'b1;
                        end else if (byte_cnt == C_AXIS_BYTE_WIDTH)
                        begin
                            M_AXIS_TLAST <= 1'b0;
                            stat <= ST_IDLE;
                        end
                    end
                end
             default : begin
                    stat <= ST_IDLE;
                end
            endcase
        end
    end
    
    assign S_AXIS_TREADY = (stat == ST_RX) && rand[10];
    assign M_AXIS_TVALID = (stat == ST_TX) && rand[10];
    assign M_AXIS_TDATA = (M_AXIS_TVALID) ? counter : 'b0;
    
endmodule
