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
// Filename:            riffa_alite_m_test.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         Simulation bench for the RIFFA to AXI-Lite Master.
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module riffa_bram_simbench#(
    parameter C_BRAM_DATA_WIDTH = 32,
    parameter C_BRAM_ADDR_WIDTH = 16,
    parameter C_PCI_DATA_WIDTH = 128
) ();


    reg ACLK;
    reg ARESETN;
    wire [C_BRAM_ADDR_WIDTH-1 : 0] Addr;
    wire [C_BRAM_DATA_WIDTH-1 : 0] Dout;
    wire [1 : 0] WEN;
    wire EN;
    wire [2 * C_BRAM_DATA_WIDTH-1 : 0] Din;


    wire CHNL_RX_CLK;
    reg  CHNL_RX;
    wire  CHNL_RX_ACK;
    reg  CHNL_RX_LAST;
    reg  [31:0] CHNL_RX_LEN;
    reg  [30:0] CHNL_RX_OFF;
    reg  [C_PCI_DATA_WIDTH-1:0] CHNL_RX_DATA;
    reg  CHNL_RX_DATA_VALID;
    wire  CHNL_RX_DATA_REN;

    wire CHNL_TX_CLK;
    wire CHNL_TX;
    reg  CHNL_TX_ACK;
    wire CHNL_TX_LAST;
    wire [31:0] CHNL_TX_LEN;
    wire [30:0] CHNL_TX_OFF;
    wire [C_PCI_DATA_WIDTH-1:0] CHNL_TX_DATA;
    wire CHNL_TX_DATA_VALID;
    reg   CHNL_TX_DATA_REN;
    
    riffa_bram #(
        .C_BRAM_DATA_WIDTH  (C_BRAM_DATA_WIDTH),
        .C_BRAM_ADDR_WIDTH  (C_BRAM_ADDR_WIDTH),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH  ),
        .C_BRAM_NUM    (2  ))
    uut (
        .CLK          (ACLK     ), 
        .RESETN       (ARESETN  ), 
        .Addr         (Addr),
        .Dout         (Dout),
        .WEN          (WEN ),
        .EN           (EN  ),
        .Din          (Din ),
        .CHNL_RX_CLK         (CHNL_RX_CLK),
        .CHNL_RX             (CHNL_RX),
        .CHNL_RX_ACK         (CHNL_RX_ACK),
        .CHNL_RX_LAST        (CHNL_RX_LAST),
        .CHNL_RX_LEN         (CHNL_RX_LEN),
        .CHNL_RX_OFF         (CHNL_RX_OFF),
        .CHNL_RX_DATA        (CHNL_RX_DATA),
        .CHNL_RX_DATA_VALID  (CHNL_RX_DATA_VALID),
        .CHNL_RX_DATA_REN    (CHNL_RX_DATA_REN),
        .CHNL_TX_CLK         (CHNL_TX_CLK),
        .CHNL_TX             (CHNL_TX),
        .CHNL_TX_ACK         (CHNL_TX_ACK),
        .CHNL_TX_LAST        (CHNL_TX_LAST),
        .CHNL_TX_LEN         (CHNL_TX_LEN),
        .CHNL_TX_OFF         (CHNL_TX_OFF),
        .CHNL_TX_DATA        (CHNL_TX_DATA),
        .CHNL_TX_DATA_VALID  (CHNL_TX_DATA_VALID),
        .CHNL_TX_DATA_REN    (CHNL_TX_DATA_REN)
    );
    
    riffa_bram_core # (
        .DATA_WIDTH(C_BRAM_DATA_WIDTH),
        .ADDR_WIDTH(C_BRAM_ADDR_WIDTH)) ram1 (
        .Clk_A  (ACLK),
        .WEN_A  (WEN[0]),
        .EN_A   (EN),
        .Addr_A (Addr),
        .Din_A  (Dout),
        .Dout_A (Din[0 +: C_BRAM_DATA_WIDTH]),
        .Clk_B  ('b0),
        .WEN_B  ('b0),
        .EN_B   ('b0),
        .Addr_B ('b0),
        .Din_B  ('b0),
        .Dout_B ()
    );
    
    riffa_bram_core # (
        .DATA_WIDTH(C_BRAM_DATA_WIDTH),
        .ADDR_WIDTH(C_BRAM_ADDR_WIDTH)) ram2 (
        .Clk_A  (ACLK),
        .WEN_A  (WEN[1]),
        .EN_A   (EN),
        .Addr_A (Addr),
        .Din_A  (Dout),
        .Dout_A (Din[C_BRAM_DATA_WIDTH +: C_BRAM_DATA_WIDTH]),
        .Clk_B  ('b0),
        .WEN_B  ('b0),
        .EN_B   ('b0),
        .Addr_B ('b0),
        .Din_B  ('b0),
        .Dout_B ()
    );
    
    
    //main clock 100 MHz
    always #5 ACLK = ~ACLK;
    
    reg [9:0] rand = 3;
    
    always @(posedge ACLK)
    begin
        rand <= {rand[8:0], rand[9]^rand[6]};
    end
    
    //////////////////////////////////////////
    //bit postions, must same with the module inside
    localparam C_WIDTH_RATIO = (C_PCI_DATA_WIDTH / C_BRAM_DATA_WIDTH);
    localparam C_PCI_BYTE_WIDTH = (C_PCI_DATA_WIDTH / 8);
    localparam C_BRAM_BYTE_WIDTH = (C_BRAM_DATA_WIDTH / 8);


    localparam C_RX_DATA_WORD_NUM = 8;
    localparam C_RX_DATA_BITS = (C_RX_DATA_WORD_NUM * 32);
    localparam C_RX_DATA_CNT = (C_RX_DATA_BITS / C_PCI_DATA_WIDTH);
    localparam C_RX_BIT_HEAD = 0;
    localparam C_RX_BIT_WRITE = 16;
    localparam C_RX_BIT_ADDR = 32;
    localparam C_RX_BIT_SEL = 64;
    localparam C_RX_BIT_LEN = 96;

    reg [1023:0] send_data;

    reg [1023:0] recv_data;
    //////////////////////////////////////////
    
    
    /////////////////////////////////////
    //Send task, functinal similar with the SW API fpga_send();
    task fpga_send;
        input integer words;
        input integer offset;
        input last;
        integer i;
    begin
        @(posedge CHNL_RX_CLK);
        #1 CHNL_RX = 1'b0;
        
        @(posedge CHNL_RX_CLK);
        #1 CHNL_RX = 1'b1;
        CHNL_RX_LAST = last;
        CHNL_RX_OFF = offset;
        CHNL_RX_LEN = words;
        
        @(posedge CHNL_RX_CLK);
        
        while (!CHNL_RX_ACK) @(posedge CHNL_RX_CLK);
        
        i = 0;
        
        #1 CHNL_RX_DATA_VALID = 1'b1;
        
        while (i < (words * 32 / C_PCI_DATA_WIDTH))
        begin
            #1 CHNL_RX_DATA = send_data[i*C_PCI_DATA_WIDTH +: C_PCI_DATA_WIDTH];
            @(posedge CHNL_RX_CLK);
            if (CHNL_RX_DATA_REN)
                i = i + 1;
        end
        
        #1 CHNL_RX_DATA_VALID = 1'b0;
        CHNL_RX = 1'b0;
        CHNL_RX_LAST = 1'b0;
        
        @(posedge CHNL_RX_CLK);
    end
    endtask  
    
    /////////////////////////////////////
    //Receive task, functinal similar with the SW API fpga_recv();
    task fpga_recv;
        input integer words;
        integer i;
    begin
        #1 CHNL_TX_DATA_REN = 1'b0;
        CHNL_TX_ACK = 1'b0;
    
        @(posedge CHNL_TX_CLK);
        
        while (!CHNL_TX) @(posedge CHNL_TX_CLK);

        @(posedge CHNL_TX_CLK);
        
        #1 CHNL_TX_ACK = 1'b1;
        
        @(posedge CHNL_TX_CLK);
        
        if (CHNL_TX_LEN != words)
        begin
            $display ("Recv err. host want %d words, but fpga want %d words", words, CHNL_TX_LEN);
        end
        
        #1 CHNL_TX_ACK = 1'b0;
        //CHNL_TX_DATA_REN = 1'b1;
        
        i = 0;
        
        while (i < (words * 32 / C_PCI_DATA_WIDTH))
        begin
            #1 CHNL_TX_DATA_REN = rand[9] && rand[8];
            @(posedge CHNL_TX_CLK);
            if (CHNL_TX_DATA_VALID && CHNL_TX_DATA_REN)
            begin
                recv_data[i*C_PCI_DATA_WIDTH +: C_PCI_DATA_WIDTH] = CHNL_TX_DATA;
                i = i + 1;
            end
        end
        
        #1 CHNL_TX_DATA_REN = 1'b0;
        
        @(posedge CHNL_TX_CLK);
    end
    endtask
    
    
    /////////////////////////////////////
    //AXI-Lite write task, simulate the host app behavior
    task bram_write;
        input integer addr;
        input integer sel;
        input integer words;
        integer i;
    begin
        //prepare the sending data
        send_data[C_RX_BIT_HEAD +: 16] = 16'h55aa;
        send_data[C_RX_BIT_WRITE] = 1'b1;
        send_data[C_RX_BIT_ADDR +: C_BRAM_ADDR_WIDTH] = addr;
        send_data[C_RX_BIT_SEL +: 8] = sel;
        send_data[C_RX_BIT_LEN +: 32] = words * 4;
        
        for (i = 0; i < words; i = i + 1)
        begin
            send_data[(C_RX_DATA_WORD_NUM + i) * 32 +: 32] = i;
        end

        //send to fpga
        fpga_send(C_RX_DATA_WORD_NUM + words, 0, 1);
        
    end
    endtask
    
    /////////////////////////////////////
    //AXI-Lite write task, simulate the host app behavior
    task bram_read;
        input integer addr;
        input integer sel;
        input integer words;
        integer i;
    begin
        //prepare the sending data
        send_data[C_RX_BIT_HEAD +: 16] = 16'h55aa;
        send_data[C_RX_BIT_WRITE] = 1'b0;
        send_data[C_RX_BIT_ADDR +: C_BRAM_ADDR_WIDTH] = addr;
        send_data[C_RX_BIT_SEL +: 8] = sel;
        send_data[C_RX_BIT_LEN +: 32] = words * 4;
        
        //send to fpga
        fpga_send(C_RX_DATA_WORD_NUM, 0, 1);
        
        //recv from fpga
        fpga_recv(words);
        
        for (i = 0; i < words; i = i + 1)
        begin
            if (recv_data[i * 32 +: 32] != i)
                $display ("Read err. should 0x%H, but 0x%H", i, recv_data[i * 32 +: 32]);
        end
        
    end
    endtask

    
    integer alite_result;
    integer alite_rd_data;
    
    integer progress;

    initial 
    begin
    
        progress = 0;
        
        send_data = 'b0;
        recv_data = 'b0;
    
        CHNL_RX = 'b0;
        CHNL_RX_LAST = 'b0;
        CHNL_RX_LEN = 'b0;
        CHNL_RX_OFF = 'b0;
        CHNL_RX_DATA = 'b0;
        CHNL_RX_DATA_VALID = 'b0;
        CHNL_TX_ACK = 'b0;
        CHNL_TX_DATA_REN = 'b0;

        ACLK = 1'b0;

        ARESETN = 1'b0;
        # 20;
        ARESETN = 1'b1;
        # 20;
        
        progress = 1;
        bram_write(0, 0, 16);
        bram_write(1, 1, 16);
        progress = 2;
        bram_read(0, 0, 16);
        bram_read(1, 1, 16);
        
        
       // $finish;
    end


endmodule
