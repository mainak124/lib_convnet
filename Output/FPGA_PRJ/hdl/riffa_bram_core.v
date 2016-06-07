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
// Filename:            riffa_bram_core.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         Dual-Ports Block RAM
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns


module riffa_bram_core #(
    parameter DATA_WIDTH = 32,
    parameter WEN_A_WIDTH = 4,
    parameter ADDR_WIDTH = 10
) (
    // Port A
    input   wire                Clk_A,
    input   wire    [WEN_A_WIDTH-1:0] WEN_A,
    input   wire                EN_A,
    input   wire    [ADDR_WIDTH-1:0]  Addr_A,
    input   wire    [DATA_WIDTH-1:0]  Din_A,
    output  reg     [DATA_WIDTH-1:0]  Dout_A,
     
    // Port B
    input   wire                Clk_B,
    input   wire                WEN_B,
    input   wire                EN_B,
    input   wire    [ADDR_WIDTH-1:0]  Addr_B,
    input   wire    [DATA_WIDTH-1:0]  Din_B,
    output  reg     [DATA_WIDTH-1:0]  Dout_B
);

localparam A_BYTE_WIDTH = DATA_WIDTH / WEN_A_WIDTH;

integer i;

// Shared memory
reg [DATA_WIDTH-1:0] mem [(2**ADDR_WIDTH)-1:0];
 
// Port A
always @(posedge Clk_A) begin
    if (EN_A)
    begin
        Dout_A      <= mem[Addr_A];
        
        for (i = 0; i < WEN_A_WIDTH; i = i + 1)
        begin
            if(WEN_A[i]) begin
                mem[Addr_A][i*A_BYTE_WIDTH +: A_BYTE_WIDTH] <= Din_A[i*A_BYTE_WIDTH +: A_BYTE_WIDTH];
            end
        end
    
    end
end

// Port B
always @(posedge Clk_B) begin
    if (EN_B)
    begin
        Dout_B      <= mem[Addr_B];
        if(WEN_B) begin
            mem[Addr_B] <= Din_B;
        end
    end
end
 
endmodule