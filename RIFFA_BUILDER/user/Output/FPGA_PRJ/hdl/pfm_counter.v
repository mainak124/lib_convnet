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
// Filename:            pfm_counter.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         Performance counter 
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module pfm_counter #(
    CHANNEL_NUM = 1,
    WIDTH = 32,
    DIV = 0)
(
    input rst,
    input clk,
    input [CHANNEL_NUM-1:0] trig,
    output reg [CHANNEL_NUM*WIDTH-1 : 0] mark
);

reg [WIDTH + DIV -1:0] counter;
reg [CHANNEL_NUM*3-1:0] trig_r;

integer i;

always @ (posedge rst or posedge clk)
begin
    if (rst)
    begin
        counter <= 'b0;
        trig_r <= 'b0;
        mark <= 'b0;
    end else begin
    
        trig_r <= {trig_r[CHANNEL_NUM*2-1:0], trig};
        
        if (~counter[WIDTH + DIV -1: DIV] != 0)
            counter <= counter + 1'b1;
        
        for (i = 0; i < CHANNEL_NUM; i = i + 1)
        begin
            if (trig_r[CHANNEL_NUM*1+i] && ~trig_r[CHANNEL_NUM*2+i])
                mark[i*WIDTH +: WIDTH] <= counter[WIDTH + DIV -1: DIV];
        end
    end
end

endmodule
