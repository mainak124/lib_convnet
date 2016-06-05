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
// Filename:            riffa_alite_m.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         RIFFA RX/TX interface to AXI-Lite Master.
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

function integer addr_bits_32;
	input [31:0] v;
	reg [31:0] value;
	begin
		value = v;
		if (value <= 32) begin
			addr_bits_32 = 1;
		end
		else begin
			value = value-1;
			for (addr_bits_32=0; value>0; addr_bits_32=addr_bits_32+1)
				value = value>>1;
		    addr_bits_32 = addr_bits_32 - 5;
		end
	end
endfunction

module riffa_alite_m #(
    parameter C_M_AXI_DATA_WIDTH = 32,
    parameter C_M_AXI_ADDR_WIDTH = 32,
    parameter C_PCI_DATA_WIDTH = 128,
    parameter C_GPIO_OUT_WIDTH = 64,
    parameter C_GPIO_IN_WIDTH = 64)
(
    ////////////////////////////////////////////////////////////////////////////
    // AXI-Lite Master
    input  M_AXI_ACLK,
    input  M_AXI_ARESETN,
    output reg [C_M_AXI_ADDR_WIDTH-1 : 0] M_AXI_AWADDR,
    output [2 : 0] M_AXI_AWPROT,
    output reg  M_AXI_AWVALID,
    input  M_AXI_AWREADY,
    output reg [C_M_AXI_DATA_WIDTH-1 : 0] M_AXI_WDATA,
    output reg [C_M_AXI_DATA_WIDTH/8-1 : 0] M_AXI_WSTRB,
    output reg M_AXI_WVALID,
    input  M_AXI_WREADY,
    input  [1 : 0] M_AXI_BRESP,
    input  M_AXI_BVALID,
    output reg  M_AXI_BREADY,
    output reg  [C_M_AXI_ADDR_WIDTH-1 : 0] M_AXI_ARADDR,
    output [2 : 0] M_AXI_ARPROT,
    output reg  M_AXI_ARVALID,
    input  M_AXI_ARREADY,
    input  [C_M_AXI_DATA_WIDTH-1 : 0] M_AXI_RDATA,
    input  [1 : 0] M_AXI_RRESP,
    input  M_AXI_RVALID,
    output reg  M_AXI_RREADY,
    
    ///////////////////////////////////////////////////////////////////////////
    //GPIO
    output [C_GPIO_OUT_WIDTH-1 : 0] GPO,
    input  [C_GPIO_IN_WIDTH-1 : 0] GPI,

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

    output CHNL_TX_CLK,
    output reg CHNL_TX,
    input  CHNL_TX_ACK,
    output reg CHNL_TX_LAST,
    output reg [31:0] CHNL_TX_LEN,
    output reg [30:0] CHNL_TX_OFF,
    output reg [C_PCI_DATA_WIDTH-1:0] CHNL_TX_DATA,
    output reg CHNL_TX_DATA_VALID,
    input   CHNL_TX_DATA_REN

);


    wire clk, rstn;
    assign clk = M_AXI_ACLK;
    assign rstn = M_AXI_ARESETN;
    assign CHNL_RX_CLK = clk;
    assign CHNL_TX_CLK = clk;

    localparam C_RX_DATA_WORD_NUM = 8;
    localparam C_RX_DATA_BITS = (C_RX_DATA_WORD_NUM * 32);
    localparam C_RX_DATA_CNT = (C_RX_DATA_BITS / C_PCI_DATA_WIDTH);
    localparam C_RX_BIT_HEAD = 0;
    localparam C_RX_BIT_WRITE = 16;
    localparam C_RX_BIT_ADDR = 32;
    localparam C_RX_BIT_WSTRB = 64;
    localparam C_RX_BIT_WDATA = 96;

    reg [C_RX_DATA_BITS-1:0] rx_data;

    localparam C_TX_DATA_WORD_NUM = 8;
    localparam C_TX_DATA_BITS = (C_TX_DATA_WORD_NUM * 32);
    localparam C_TX_DATA_CNT = (C_TX_DATA_BITS / C_PCI_DATA_WIDTH);
    localparam C_TX_BIT_HEAD = 0;
    localparam C_TX_BIT_BRESP = 16;
    localparam C_TX_BIT_TIMEOUT = 24;
    localparam C_TX_BIT_DATA = 32;

    reg [C_TX_DATA_BITS-1:0] tx_data;

    reg [3:0] data_cnt;
    
    localparam C_GPIO_OUT_ADDR_WIDTH = addr_bits_32(C_GPIO_OUT_WIDTH);
    localparam C_GPIO_IN_ADDR_WIDTH = addr_bits_32(C_GPIO_IN_WIDTH);;
    localparam C_GPIO_OUT_WARD_NUM = 2**C_GPIO_OUT_ADDR_WIDTH;
    localparam C_GPIO_IN_WARD_NUM = 2**C_GPIO_IN_ADDR_WIDTH;
    
    reg [C_GPIO_OUT_WARD_NUM*32 - 1 : 0] gpio_out;
    wire [C_GPIO_OUT_WARD_NUM*32 - 1 : 0] gpio_out_fb;
    
    reg [C_GPIO_OUT_ADDR_WIDTH-1:0] gpio_out_addr;
    wire [C_GPIO_OUT_ADDR_WIDTH+4:0] gpio_out_baddr;
    reg [C_GPIO_IN_WARD_NUM*32 - 1 :0] gpio_in;
    reg [C_GPIO_IN_ADDR_WIDTH-1:0] gpio_in_addr;
    wire [C_GPIO_IN_ADDR_WIDTH+4:0] gpio_in_baddr;
    
    assign gpio_out_baddr = {gpio_out_addr, 5'b0};
    assign gpio_in_baddr = {gpio_in_addr, 5'b0};

    reg [31:0] gpio_wdata;
    reg [31:0] gpio_rdata;
    reg [31:0] gpio_mask;
    
    assign GPO = gpio_out;
    assign gpio_out_fb = GPO; //use the _fb to eleminate the unused signals
    always @ (posedge clk) gpio_in <= GPI;
    

    localparam ST_IDLE          = 4'b0000;
    localparam ST_RX            = 4'b0001;
    localparam ST_RX_END        = 4'b0010;
    localparam ST_AXI_WRITE     = 4'b0011;
    localparam ST_AXI_BRESP     = 4'b0100;
    localparam ST_AXI_RADDR     = 4'b0101;
    localparam ST_AXI_RDATA     = 4'b0110;
    localparam ST_GIO_WRITE     = 4'b0111;
    localparam ST_GIO_READ      = 4'b1000;
    localparam ST_GIO_READ_END  = 4'b1001;
    localparam ST_TX_START      = 4'b1010;
    localparam ST_TX            = 4'b1011;

    reg [3:0] stat;

    reg axi_aw_rdy, axi_w_rdy, chnl_rx_pending;
    
    integer i;

    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            stat <= ST_IDLE;

            data_cnt <= 'b0;
            rx_data <= 'b0;
            tx_data <= 'b0;
            axi_aw_rdy <= 'b0;
            axi_w_rdy <= 'b0;

            M_AXI_AWADDR <= 'b0;
            M_AXI_AWVALID <= 'b0;
            M_AXI_WDATA <= 'b0;
            M_AXI_WSTRB <= 'b0;
            M_AXI_WVALID <= 'b0;
            M_AXI_BREADY <= 'b0;
            M_AXI_ARADDR <= 'b0;
            M_AXI_ARVALID <= 'b0;
            M_AXI_RREADY <= 'b0;
            CHNL_RX_ACK <= 'b0;
            CHNL_RX_DATA_REN <= 'b0;
            CHNL_TX <= 'b0;
            CHNL_TX_LAST <= 'b0;
            CHNL_TX_LEN <= 'b0;
            CHNL_TX_OFF <= 'b0;
            CHNL_TX_DATA <= 'b0;
            CHNL_TX_DATA_VALID <= 'b0;

        end else begin
            case (stat)
            ST_IDLE : begin
                    if (chnl_rx_pending || CHNL_RX)
                    begin
                        data_cnt <= 3'b0;
                        CHNL_RX_ACK <= 1'b1;
                        CHNL_RX_DATA_REN <= 1'b1;
                        stat <= ST_RX;
                    end
                end
            ST_RX : begin
                    //CHNL_RX_ACK <= 1'b0;
                    if (CHNL_RX_DATA_VALID)
                    begin
                        //if (data_cnt == 0)
                        for (i = 0; i < C_RX_DATA_CNT; i = i + 1)
                            if (data_cnt == i)
                                rx_data[C_PCI_DATA_WIDTH*i +: C_PCI_DATA_WIDTH] <= CHNL_RX_DATA;
                        data_cnt <= data_cnt + 1'b1;
                        if (data_cnt == C_RX_DATA_CNT - 1)
                        begin
                            CHNL_RX_ACK <= 1'b0;
                            stat <= ST_RX_END;
                        end
                    end
                end
            ST_RX_END : begin
                    //Wait until RX finish
                    if (!CHNL_RX)
                    begin
                        CHNL_RX_DATA_REN <= 1'b0;
                        if (rx_data[C_RX_BIT_HEAD +: 16] == 32'h55aa)
                        begin
                            if (rx_data[C_RX_BIT_WRITE])
                            begin
                                M_AXI_AWADDR <= 
                                   rx_data[C_RX_BIT_ADDR +: C_M_AXI_ADDR_WIDTH];
                                M_AXI_AWVALID <= 1'b1;
                                M_AXI_WDATA <= rx_data[C_RX_BIT_WDATA +: 32];
                                M_AXI_WSTRB <= rx_data[C_RX_BIT_WSTRB +: 4];
                                M_AXI_WVALID <= 1'b1;
                                axi_aw_rdy <= 1'b0;
                                axi_w_rdy <= 1'b0;

                                stat <= ST_AXI_WRITE;
                            end else begin
                                M_AXI_ARADDR <= 
                                   rx_data[C_RX_BIT_ADDR +: C_M_AXI_ADDR_WIDTH];
                                M_AXI_ARVALID <= 1'b1;
                                stat <= ST_AXI_RADDR;
                            end
                        end else if (rx_data[C_RX_BIT_HEAD +: 16] == 16'h33cc)
                        begin
                            if (rx_data[C_RX_BIT_WRITE])
                            begin
                                gpio_out_addr <= 
                                   rx_data[C_RX_BIT_ADDR +: C_GPIO_OUT_ADDR_WIDTH];
                                gpio_wdata <= rx_data[C_RX_BIT_WDATA +: 32];
                                gpio_mask <= rx_data[C_RX_BIT_WSTRB +: 32];
                                
                                stat <= ST_GIO_WRITE;
                            end else begin
                                gpio_in_addr <= rx_data[C_RX_BIT_ADDR 
                                    +: C_GPIO_OUT_ADDR_WIDTH];
                                
                                stat <= ST_GIO_READ;
                            end
                        end else begin
                            stat <= ST_IDLE;
                        end
                    end
                end
            ST_AXI_WRITE : begin
                    if (M_AXI_AWREADY)
                    begin
                        M_AXI_AWVALID <= 1'b0;
                        axi_aw_rdy <= 1'b1;
                    end

                    if (M_AXI_WREADY)
                    begin
                        M_AXI_WVALID <= 1'b0;
                        axi_w_rdy <= 1'b1;
                    end

                    if ((M_AXI_AWREADY || axi_aw_rdy) && 
                        (M_AXI_WREADY || axi_w_rdy))
                    begin
                        M_AXI_BREADY <= 1'b1;
                        stat <= ST_AXI_BRESP;
                    end
                end
            ST_AXI_BRESP : begin
                    if (M_AXI_BVALID)
                    begin
                        M_AXI_BREADY <= 1'b0;
                        tx_data[C_TX_BIT_HEAD +: 16] <= 16'hff77;
                        tx_data[C_TX_BIT_BRESP +: 2] <= M_AXI_BRESP;
                        tx_data[C_TX_BIT_DATA +: 32] <= 32'b0;
                        data_cnt <= 0;
                        stat <= ST_TX_START;
                    end else begin
                        //time out ?
                    end
                end
            ST_AXI_RADDR : begin
                    if (M_AXI_ARREADY)
                    begin
                        M_AXI_RREADY <= 1'b1;
                        M_AXI_ARVALID <= 1'b0;
                        stat <= ST_AXI_RDATA;
                    end else begin
                        //time out?
                    end
                end
            ST_AXI_RDATA : begin
                    if (M_AXI_RVALID)
                    begin
                        M_AXI_RREADY <= 1'b0;
                        tx_data[C_TX_BIT_HEAD +: 16] <= 16'hff77;
                        tx_data[C_TX_BIT_BRESP +: 2] <= M_AXI_RRESP;
                        tx_data[C_TX_BIT_DATA +: 32] <= M_AXI_RDATA;
                        data_cnt <= 'b0;
                        stat <= ST_TX_START;
                    end else begin
                        //time out ?
                    end
                end
            ST_GIO_WRITE : begin
                    gpio_out[gpio_out_baddr +: 32] <= 
                        (gpio_wdata & gpio_mask) | 
                        (gpio_out[gpio_out_baddr +: 32] 
                            & ~ gpio_mask);

                    tx_data[C_TX_BIT_HEAD +: 16] <= 16'hff77;
                    tx_data[C_TX_BIT_BRESP +: 2] <= 'b0;
                    tx_data[C_TX_BIT_DATA +: 32] <= 
                        gpio_out_fb[gpio_out_baddr +: 32];
                    data_cnt <= 'b0;
                    stat <= ST_TX_START;
                end
            ST_GIO_READ : begin
                    gpio_rdata <= gpio_in[gpio_in_baddr +: 32];
                    stat <= ST_GIO_READ_END;
                end
            ST_GIO_READ_END : begin
                    tx_data[C_TX_BIT_HEAD +: 16] <= 16'hff77;
                    tx_data[C_TX_BIT_BRESP +: 2] <= 'b0;
                    tx_data[C_TX_BIT_DATA +: 32] <= gpio_rdata;
                    data_cnt <= 'b0;
                    stat <= ST_TX_START;
                end
            ST_TX_START : begin
                    CHNL_TX <= 1'b1;
                    CHNL_TX_LAST <= 1'b1;
                    CHNL_TX_LEN <= C_TX_DATA_WORD_NUM;
                    CHNL_TX_OFF <= 'b0;
                    CHNL_TX_DATA_VALID <= 1'b0;
                    CHNL_TX_DATA <= tx_data[C_PCI_DATA_WIDTH - 1: 0];
                    tx_data <= tx_data[(C_TX_DATA_WORD_NUM*32-1)
                        : C_PCI_DATA_WIDTH];
                    data_cnt <= 'b0;
                    stat <= ST_TX;
                end
            ST_TX : begin
                    
                    if (CHNL_TX_DATA_REN && CHNL_TX_DATA_VALID)
                    begin
                        CHNL_TX_DATA <= tx_data[C_PCI_DATA_WIDTH - 1: 0];
                        tx_data <= tx_data[(C_TX_DATA_WORD_NUM*32-1)
                            : C_PCI_DATA_WIDTH];
                        data_cnt <= data_cnt + 1'b1;
                        if (data_cnt == C_TX_DATA_CNT - 1)
                        begin
                            CHNL_TX <= 1'b0;
                            CHNL_TX_DATA_VALID <= 1'b0;
                            stat <= ST_IDLE;
                        end
                    end else
                        CHNL_TX_DATA_VALID <= CHNL_TX_ACK || CHNL_TX_DATA_VALID;
                end
             default : begin
                    stat <= ST_IDLE;
                end
            endcase
        end
    end

    reg chnl_rx_r;

    always @ (posedge clk)
    begin
        chnl_rx_r <= CHNL_RX;

        if (CHNL_RX && ! chnl_rx_r)
            chnl_rx_pending <= 1'b1;
        else if (stat == ST_RX)
            chnl_rx_pending <= 1'b0;
    end

    assign M_AXI_AWPROT = 3'b000;
    assign M_AXI_ARPROT = 3'b000;

endmodule
