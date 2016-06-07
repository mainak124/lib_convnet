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
// Filename:            riffa_gpio.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         RIFFA RX/TX interface to GPIO.
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

module riffa_gpio #(
    parameter C_PCI_DATA_WIDTH = 128,
    parameter C_GPIO_OUT_WIDTH = 64,
    parameter C_GPIO_IN_WIDTH = 64)
(
    ////////////////////////////////////////////////////////////////////////////
    input  CLK,
    input  RESETN,
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
    assign clk = CLK;
    assign rstn = RESETN;
    
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
    localparam ST_GIO_WRITE     = 4'b0011;
    localparam ST_GIO_READ      = 4'b0100;
    localparam ST_GIO_READ_END  = 4'b0101;
    localparam ST_TX_START      = 4'b0110;
    localparam ST_TX            = 4'b0111;

    reg [3:0] stat;

    reg chnl_rx_pending;

    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            stat <= ST_IDLE;

            data_cnt <= 'b0;
            rx_data <= 'b0;
            tx_data <= 'b0;
            
            gpio_out <= 'b0;
            gpio_wdata <= 'b0;
            gpio_rdata <= 'b0;

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
                    if (CHNL_RX_DATA_VALID)
                    begin
                        if (data_cnt == 0)
                            rx_data[C_PCI_DATA_WIDTH - 1: 0] <= CHNL_RX_DATA;
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
                        if (rx_data[C_RX_BIT_HEAD +: 16] == 16'h33cc)
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

endmodule
