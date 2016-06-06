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

module riffa_alite_m_simbench#(
    parameter C_M_AXI_DATA_WIDTH = 32,
    parameter C_M_AXI_ADDR_WIDTH = 32,
    parameter C_PCI_DATA_WIDTH = 128,
    parameter C_GPIO_OUT_WIDTH = 64,
    parameter C_GPIO_IN_WIDTH = 64  
) ();

    reg  M_AXI_ACLK;                                
    reg  M_AXI_ARESETN;                             
    wire [C_M_AXI_ADDR_WIDTH-1 : 0] M_AXI_AWADDR;   
    wire [2 : 0] M_AXI_AWPROT;                      
    wire M_AXI_AWVALID;                             
    wire M_AXI_AWREADY;                             
    wire [C_M_AXI_DATA_WIDTH-1 : 0] M_AXI_WDATA;    
    wire [C_M_AXI_DATA_WIDTH/8-1 : 0] M_AXI_WSTRB;  
    wire M_AXI_WVALID;                              
    wire M_AXI_WREADY;                              
    wire [1 : 0] M_AXI_BRESP;                       
    wire M_AXI_BVALID;                              
    wire M_AXI_BREADY;                              
    wire [C_M_AXI_ADDR_WIDTH-1 : 0] M_AXI_ARADDR;   
    wire [2 : 0] M_AXI_ARPROT;                      
    wire M_AXI_ARVALID;                             
    wire M_AXI_ARREADY;                             
    wire [C_M_AXI_DATA_WIDTH-1 : 0] M_AXI_RDATA;    
    wire [1 : 0] M_AXI_RRESP;                       
    wire M_AXI_RVALID;                              
    wire M_AXI_RREADY;
    
    wire [C_GPIO_OUT_WIDTH - 1: 0] GPO;                         
    wire [C_GPIO_IN_WIDTH - 1: 0] GPI;                         

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
    
    riffa_alite_m #(
        .C_M_AXI_DATA_WIDTH  (C_M_AXI_DATA_WIDTH),
        .C_M_AXI_ADDR_WIDTH  (C_M_AXI_ADDR_WIDTH),
        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH  ),
        .C_GPIO_OUT_WIDTH    (C_GPIO_OUT_WIDTH  ), 
        .C_GPIO_IN_WIDTH     (C_GPIO_IN_WIDTH   ) )
    uut (
        .M_AXI_ACLK          (M_AXI_ACLK     ), 
        .M_AXI_ARESETN       (M_AXI_ARESETN  ), 
        .M_AXI_AWADDR        (M_AXI_AWADDR   ), 
        .M_AXI_AWPROT        (M_AXI_AWPROT   ), 
        .M_AXI_AWVALID       (M_AXI_AWVALID  ), 
        .M_AXI_AWREADY       (M_AXI_AWREADY  ),         
        .M_AXI_WDATA         (M_AXI_WDATA    ),         
        .M_AXI_WSTRB         (M_AXI_WSTRB    ),         
        .M_AXI_WVALID        (M_AXI_WVALID   ),         
        .M_AXI_WREADY        (M_AXI_WREADY   ),         
        .M_AXI_BRESP         (M_AXI_BRESP    ),         
        .M_AXI_BVALID        (M_AXI_BVALID   ),         
        .M_AXI_BREADY        (M_AXI_BREADY   ),         
        .M_AXI_ARADDR        (M_AXI_ARADDR   ),         
        .M_AXI_ARPROT        (M_AXI_ARPROT   ),         
        .M_AXI_ARVALID       (M_AXI_ARVALID  ),         
        .M_AXI_ARREADY       (M_AXI_ARREADY  ),         
        .M_AXI_RDATA         (M_AXI_RDATA    ),         
        .M_AXI_RRESP         (M_AXI_RRESP    ),         
        .M_AXI_RVALID        (M_AXI_RVALID   ),         
        .M_AXI_RREADY        (M_AXI_RREADY   ), 
        .GPO                 (GPO),
        .GPI                 (GPI),
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
    
    //AXI-Lite block RAM as read/write target
    blk_mem_alite slave (
        .s_aclk        (M_AXI_ACLK),
        .s_aresetn     (M_AXI_ARESETN),
        .s_axi_awaddr  (M_AXI_AWADDR),
        .s_axi_awvalid (M_AXI_AWVALID),
        .s_axi_awready (M_AXI_AWREADY),
        .s_axi_wdata   (M_AXI_WDATA),
        .s_axi_wstrb   (M_AXI_WSTRB),
        .s_axi_wvalid  (M_AXI_WVALID),
        .s_axi_wready  (M_AXI_WREADY),
        .s_axi_bresp   (M_AXI_BRESP),
        .s_axi_bvalid  (M_AXI_BVALID),
        .s_axi_bready  (M_AXI_BREADY),
        .s_axi_araddr  (M_AXI_ARADDR),
        .s_axi_arvalid (M_AXI_ARVALID),
        .s_axi_arready (M_AXI_ARREADY),
        .s_axi_rdata   (M_AXI_RDATA),
        .s_axi_rresp   (M_AXI_RRESP),
        .s_axi_rvalid  (M_AXI_RVALID),
        .s_axi_rready  (M_AXI_RREADY)
    );
    
    //main clock 100 MHz
    always #5 M_AXI_ACLK = ~M_AXI_ACLK;
    
    assign GPI = 64'h12345678_87654321;
    
    //////////////////////////////////////////
    //bit postions, must same with the module inside
    localparam C_RX_DATA_WORD_NUM = 8;
    localparam C_RX_DATA_BITS = (C_RX_DATA_WORD_NUM * 32);
    localparam C_RX_DATA_CNT = (C_RX_DATA_BITS / C_PCI_DATA_WIDTH);
    localparam C_RX_BIT_HEAD = 0;
    localparam C_RX_BIT_WRITE = 16;
    localparam C_RX_BIT_ADDR = 32;
    localparam C_RX_BIT_WSTRB = 64;
    localparam C_RX_BIT_WDATA = 96;

    reg [C_RX_DATA_BITS-1:0] send_data;

    localparam C_TX_DATA_WORD_NUM = 8;
    localparam C_TX_DATA_BITS = (C_TX_DATA_WORD_NUM * 32);
    localparam C_TX_DATA_CNT = (C_TX_DATA_BITS / C_PCI_DATA_WIDTH);
    localparam C_TX_BIT_HEAD = 0;
    localparam C_TX_BIT_BRESP = 16;
    localparam C_TX_BIT_TIMEOUT = 24;
    localparam C_TX_BIT_DATA = 32;

    reg [C_TX_DATA_BITS-1:0] recv_data;
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
        CHNL_TX_DATA_REN = 1'b1;
        
        i = 0;
        
        while (i < (words * 32 / C_PCI_DATA_WIDTH))
        begin
            @(posedge CHNL_TX_CLK);
            if (CHNL_TX_DATA_VALID)
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
    task alite_write;
        input integer addr;
        input integer data;
        input integer byte_strob;
        output integer result;
    begin
        //prepare the sending data
        send_data[C_RX_BIT_HEAD +: 16] = 16'h55aa;
        send_data[C_RX_BIT_WRITE] = 1'b1;
        send_data[C_RX_BIT_ADDR +: C_M_AXI_ADDR_WIDTH] = addr;
        send_data[C_RX_BIT_WDATA +: C_M_AXI_DATA_WIDTH] = data;
        send_data[C_RX_BIT_WSTRB +: 4] = byte_strob;
        
        //send to fpga
        fpga_send(C_RX_DATA_WORD_NUM, 0, 1);
        
        //recv from fpga
        fpga_recv(C_TX_DATA_WORD_NUM);
        
        if (recv_data[C_TX_BIT_HEAD +: 16] != 16'hff77)
        begin
            $display ("Write err. The fpga feedback data head should be 0xFF77, but 0x%H", recv_data[C_TX_BIT_HEAD +: 16]);
            result = -1;
        end else if (recv_data[C_TX_BIT_BRESP +: 2] != 2'b00)
        begin
            $display ("Write err. The AXI BRESP = ", recv_data[C_TX_BIT_BRESP +: 2]);
            result = -2;
        end else
            result = 0;
    end
    endtask
    
    /////////////////////////////////////
    //AXI-Lite write task, simulate the host app behavior
    task alite_read;
        input integer addr;
        output integer data;
        output integer result;
    begin
        //prepare the sending data
        send_data[C_RX_BIT_HEAD +: 16] = 32'h55aa;
        send_data[C_RX_BIT_WRITE] = 1'b0;
        send_data[C_RX_BIT_ADDR +: C_M_AXI_ADDR_WIDTH] = addr;
        
        //send to fpga
        fpga_send(C_RX_DATA_WORD_NUM, 0, 1);
        
        //recv from fpga
        fpga_recv(C_TX_DATA_WORD_NUM);
        
        //fetch data
        data = recv_data[C_TX_BIT_DATA +: 32];
        
        if (recv_data[C_TX_BIT_HEAD +: 16] != 16'hff77)
        begin
            $display ("Read err. The fpga feedback data head should be 0xFF77, but 0x%H", recv_data[C_TX_BIT_HEAD +: 16]);
            result = -1;
        end else if (recv_data[C_TX_BIT_BRESP +: 2] != 2'b00)
        begin
            $display ("Read err. The AXI RRESP = ", recv_data[C_TX_BIT_BRESP +: 2]);
            result = -2;
        end else
            result = 0;
    end
    endtask

    /////////////////////////////////////
    //GPIO write
    task gpio_write;
        input integer addr;
        input integer data;
        input integer mask;
        output integer result;
    begin
        //prepare the sending data
        send_data[C_RX_BIT_HEAD +: 16] = 16'h33cc;
        send_data[C_RX_BIT_WRITE] = 1'b1;
        send_data[C_RX_BIT_ADDR +: 32] = addr;
        send_data[C_RX_BIT_WDATA +: 32] = data;
        send_data[C_RX_BIT_WSTRB +: 32] = mask;
        
        //send to fpga
        fpga_send(C_RX_DATA_WORD_NUM, 0, 1);
        
        //recv from fpga
        fpga_recv(C_TX_DATA_WORD_NUM);
        
        if (recv_data[C_TX_BIT_HEAD +: 16] != 16'hff77)
        begin
            $display ("Write err. The fpga feedback data head should be 0xFF77, but 0x%H", recv_data[C_TX_BIT_HEAD +: 16]);
            result = -1;
        end else
            result = 0;
    end
    endtask

    task gpio_read;
        input integer addr;
        output integer data;
        output integer result;
    begin
        //prepare the sending data
        send_data[C_RX_BIT_HEAD +: 16] = 32'h33cc;
        send_data[C_RX_BIT_WRITE] = 1'b0;
        send_data[C_RX_BIT_ADDR +: 32] = addr;
        
        //send to fpga
        fpga_send(C_RX_DATA_WORD_NUM, 0, 1);
        
        //recv from fpga
        fpga_recv(C_TX_DATA_WORD_NUM);
        
        //fetch data
        data = recv_data[C_TX_BIT_DATA +: 32];
        
        if (recv_data[C_TX_BIT_HEAD +: 16] != 16'hff77)
        begin
            $display ("Read err. The fpga feedback data head should be 0xFF77, but 0x%H", recv_data[C_TX_BIT_HEAD +: 16]);
            result = -1;
        end else
            result = 0;
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

        M_AXI_ACLK = 1'b0;

        M_AXI_ARESETN = 1'b0;
        # 20;
        M_AXI_ARESETN = 1'b1;
        # 20;
        
        progress = 1;
        alite_write(0, 32'h12345678, 4'hF, alite_result);
        progress = 2;
        alite_write(4, 32'hfedcba98, 4'hF, alite_result);

        progress = 3;
        alite_read(0, alite_rd_data, alite_result);  
        
        if (alite_rd_data !=   32'h12345678)
        begin
            $display ("Verify err. should be 0x12345678 but got 0x%H", alite_rd_data);  
        end else
        begin
            $display ("Verify 1 OK");
        end    

        progress = 4;
        alite_read(4, alite_rd_data, alite_result);  
        
        if (alite_rd_data !=   32'hfedcba98)
        begin
            $display ("Verify err. should be 0xhfedcba98 but got 0x%H", alite_rd_data);  
        end else
        begin
            $display ("Verify 2 OK");
        end
        
        progress = 5;
        gpio_write(0, 32'h12345678, 32'hffffffff, alite_result);
        progress = 6;
        gpio_write(0, 32'h00004321, 32'h0000ffff, alite_result);
        progress = 7;
        gpio_write(1, 32'h87654321, 32'hffffffff, alite_result);
        
        
        if (GPO != 64'h87654321_12344321)
        begin
            $display ("GPIO write err. should be 0x8765432112344321 but got 0x%H", GPO); 
        end else
            $display ("GPIO write OK");
        
        progress = 8;
        gpio_read(0, alite_rd_data, alite_result);
        if (alite_rd_data !=   32'h87654321)
        begin
            $display ("GPIO read 0 err. should be 0x87654321 but got 0x%H", alite_rd_data);  
        end else
            $display ("GPIO read 0 OK");

        progress = 9;
        
        gpio_read(1, alite_rd_data, alite_result);
        if (alite_rd_data !=   32'h12345678)
        begin
            $display ("GPIO read 1 err. should be 0x12345678 but got 0x%H", alite_rd_data);  
        end else
            $display ("GPIO read 1 OK");

        progress = 10;
        
       // $finish;
    end


endmodule
