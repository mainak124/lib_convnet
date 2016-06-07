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
// Filename:            riffa_bram.v
// Version:
// Verilog Standard:    Verilog-2001
// Description:         RIFFA RX/TX interface to BlockRAMs.
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module riffa_bram #(
    parameter C_BRAM_DATA_WIDTH = 32,
    parameter C_BRAM_ADDR_WIDTH = 32,
    parameter C_BRAM_NUM = 2,
    parameter C_PCI_DATA_WIDTH = 128)
(
    ////////////////////////////////////////////////////////////////////////////
    // BRAM R/W
    input  CLK,
    input  RESETN,
    output reg [C_BRAM_ADDR_WIDTH-1 : 0] Addr,
    output [C_BRAM_DATA_WIDTH-1 : 0] Dout,
    output reg [C_BRAM_NUM-1 : 0] WEN,
    output reg EN,
    input  [C_BRAM_NUM * C_BRAM_DATA_WIDTH-1 : 0] Din,
    
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
    output [30:0] CHNL_TX_OFF,
    output [C_PCI_DATA_WIDTH-1:0] CHNL_TX_DATA,
    output reg CHNL_TX_DATA_VALID,
    input   CHNL_TX_DATA_REN
);


    wire clk, rstn;
    assign clk = CLK;
    assign rstn = RESETN;
    assign CHNL_RX_CLK = clk;
    assign CHNL_TX_CLK = clk;
    
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
    
    reg [C_RX_DATA_BITS-1:0] rx_data;

    reg [3:0] data_cnt;
    
    localparam ST_IDLE       = 4'b0000;          
    localparam ST_RX_HEAD    = 4'b0001;          
    localparam ST_HEAD       = 4'b0010;          
    localparam ST_BRAM_WRITE = 4'b0011;          
    localparam ST_BRAM_READ  = 4'b0100;          
    localparam ST_RX_END     = 4'b0101;          
    localparam ST_TX_END     = 4'b0110;          
    
    reg [7:0] bram_sel;
    reg [31:0] bram_len;   
    
    reg [C_PCI_DATA_WIDTH : 0] rx_buffer;
    reg [C_PCI_DATA_WIDTH : 0] tx_buffer;
    

    reg [3:0] stat;
    reg [33:0] byte_cnt; 
    reg chnl_rx_valid_r;
    reg addr_vld, bram_vld, bram_valid;
    reg [C_BRAM_DATA_WIDTH - 1: 0] bram_din;
    reg [4:0] buffer_status;
    reg frame_continue;
    reg [C_BRAM_NUM-1 : 0] wen_high;
    
    
    reg chnl_rx_pending;
    
    integer i;

    always @ (posedge clk)
    begin
        if (!rstn)
        begin
            stat <= ST_IDLE;

            data_cnt <= 'b0;
            rx_data <= 'b0;
            Addr <= 'b0;
            bram_sel <= 'b0;
            byte_cnt <= 'b0;
            buffer_status <= 'b0;
            rx_buffer <= 'b0;
            WEN <= 'b0;
            frame_continue <= 'b0;
            addr_vld <= 'b0;
            bram_vld <= 'b0;
            bram_valid <= 'b0;

            CHNL_RX_ACK <= 'b0;
            CHNL_TX <= 'b0;
            CHNL_TX_LAST <= 'b0;
            CHNL_TX_LEN <= 'b0;
            //CHNL_TX_OFF <= 'b0;
            CHNL_TX_DATA_VALID <= 'b0;
            //flag0 <= 'b0;
            //flag3 <= 'b0;

        end else begin
            case (stat)
            ST_IDLE : begin
                    addr_vld <= 1'b0;
                    bram_vld <= 'b0;
                    bram_valid <= 'b0;
                    
                    if (chnl_rx_pending || CHNL_RX)
                    begin
                        data_cnt <= 3'b0;
                        CHNL_RX_ACK <= 1'b1;
                        stat <= ST_RX_HEAD;
                        
                    end
                end
            ST_RX_HEAD : begin
                    if (CHNL_RX_DATA_VALID)
                    begin
                        for (i = 0; i < C_RX_DATA_CNT; i = i + 1)
                            if (data_cnt == i)
                                rx_data[C_PCI_DATA_WIDTH*i +: C_PCI_DATA_WIDTH] <= CHNL_RX_DATA;
                        data_cnt <= data_cnt + 1'b1;
                        if (data_cnt == C_RX_DATA_CNT - 1)
                        begin
                            stat <= ST_HEAD;
                        end
                    end
                end
            ST_HEAD : begin
                    if (rx_data[C_RX_BIT_HEAD +: 16] == 32'h55aa)
                    begin
                        Addr <= rx_data[C_RX_BIT_ADDR +: C_BRAM_ADDR_WIDTH];
                        addr_vld <= 1'b1;
                        bram_vld <= 'b0;
                        bram_valid <= 'b0;
                        bram_sel <= rx_data[C_RX_BIT_SEL +: 8];
                        byte_cnt <= rx_data[C_RX_BIT_LEN +: 32];
                        buffer_status <= 5'b0;

                        if (rx_data[C_RX_BIT_WRITE])
                        begin
                            stat <= ST_BRAM_WRITE;
                        end else begin
                            CHNL_RX_ACK <= 1'b0;
                            if (CHNL_TX_ACK && CHNL_TX)
                                stat <= ST_BRAM_READ;
                            CHNL_TX <= 1'b1;
                            CHNL_TX_LAST <= 1'b1;
                            if (rx_data[C_RX_BIT_LEN +: 2] == 2'b00)
                                CHNL_TX_LEN <= rx_data[(C_RX_BIT_LEN+2) +: 30];
                            else
                                CHNL_TX_LEN <= rx_data[(C_RX_BIT_LEN+2) +: 30] + 1;
                            
                        end
                    end else begin
                        stat <= ST_RX_END;
                    end
                    
                end
            ST_BRAM_WRITE : begin
                    if (buffer_status == 'b0) //buffer no data
                    begin
                        if (CHNL_RX_DATA_VALID)
                        begin
                            //load new data
                            rx_buffer <= {1'b0, CHNL_RX_DATA};
                            buffer_status <= 5'b1;
                            WEN <= wen_high;
                            if (byte_cnt <= C_BRAM_BYTE_WIDTH)
                                stat <= ST_RX_END;
                        end
                    end else
                    begin
                        if (buffer_status == C_WIDTH_RATIO) 
                                //rx_buffer has last data
                        begin
                            if (CHNL_RX_DATA_VALID)
                            begin
                                //load new data
                                rx_buffer <= {1'b0, CHNL_RX_DATA};
                                buffer_status <= 5'b1;
                                WEN <= wen_high;
                                if (byte_cnt <= C_BRAM_BYTE_WIDTH*2)
                                    stat <= ST_RX_END;
                            end else begin
                                //rx_buffer go empty
                                buffer_status <= 5'b0;
                                WEN <= 'b0;
                            end
                        end else begin
                            //rx_buffer shift
                            rx_buffer <= rx_buffer[C_PCI_DATA_WIDTH: 
                                C_BRAM_DATA_WIDTH];
                            buffer_status <= buffer_status + 1;
                            WEN <= wen_high;
                            if (byte_cnt <= C_BRAM_BYTE_WIDTH*2)
                                stat <= ST_RX_END;
                        end
                        
                        byte_cnt <= byte_cnt - C_BRAM_BYTE_WIDTH;
                        Addr <= Addr + 1'b1;
                    end
                end
            ST_RX_END : begin
                    //if (!CHNL_RX)
                    CHNL_RX_ACK <= 1'b0;
                    stat <= ST_IDLE;
                    WEN <= 'b0;
                end
            ST_BRAM_READ : begin
                    bram_vld <= addr_vld;
                    bram_valid <= bram_vld;
                    
                    if (buffer_status != C_WIDTH_RATIO) //tx_buffer not full
                    begin
                        Addr <= Addr + 1'b1;
                        addr_vld <= 1'b1;
                        
                        if (bram_valid)
                        begin
                            //load new data
                            for (i = 0; i < C_WIDTH_RATIO; i = i + 1)
                            begin
                                if (buffer_status == i)
                                    tx_buffer[C_BRAM_DATA_WIDTH*i +: 
                                        C_BRAM_DATA_WIDTH] <= bram_din;
                            end
                            
                            byte_cnt <= byte_cnt - C_BRAM_BYTE_WIDTH;
                            if (byte_cnt <= C_BRAM_BYTE_WIDTH)
                                 //last cnt data
                            begin
                                buffer_status <= C_WIDTH_RATIO; 
                                    //force the tx_buffer full
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
                        Addr <= Addr + 1'b1;
                        addr_vld <= 1'b1;
//                        bram_vld <= addr_vld;
//                        bram_valid <= bram_vld;
                        
                        if (!frame_continue) //frame finished
                        begin
                            CHNL_TX_DATA_VALID <= 1'b0;
                            stat <= ST_TX_END;
                        end else if (bram_valid)  //new data available
                        begin
                            tx_buffer[0 +: C_BRAM_DATA_WIDTH] <= bram_din;
                            buffer_status <= 5'b1;
                            byte_cnt <= byte_cnt - C_BRAM_BYTE_WIDTH;
                            CHNL_TX_DATA_VALID <= 1'b0;
                            
                            //if last cnt data or axis_last
                            if (byte_cnt <= C_BRAM_BYTE_WIDTH) 
                            begin
                                //force the tx_buffer full
                                buffer_status <= C_WIDTH_RATIO; 
                                CHNL_TX_DATA_VALID <= 1'b1;
                                frame_continue <= 1'b0;
                            end else begin
                                buffer_status <= 5'b1;
                                CHNL_TX_DATA_VALID <= 1'b0;
                                frame_continue <= 1'b1;
                            end
                        end else begin
                            buffer_status <= 5'b0; //mark the tx_buffer empty
                            CHNL_TX_DATA_VALID <= 1'b0;
                        end
                    end else begin
                        //addr_vld <= 1'b0;
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
                            byte_cnt <= byte_cnt - C_BRAM_BYTE_WIDTH;
                        end
                    end
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
        else if (stat == ST_RX_HEAD)
            chnl_rx_pending <= 1'b0;
    end
    
    always @ (posedge clk) chnl_rx_valid_r <= CHNL_RX_DATA_VALID;
    
    always @ (*)
    begin
        if (stat == ST_RX_HEAD)
        begin
            CHNL_RX_DATA_REN <= 1'b1;
        end else if (stat == ST_BRAM_WRITE)
        begin
            if (buffer_status == 0)
                CHNL_RX_DATA_REN <= 1'b1;
            else if (buffer_status == C_WIDTH_RATIO)
                CHNL_RX_DATA_REN <= 1'b1;
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
        
        if ((stat == ST_BRAM_WRITE) || (stat == ST_RX_END))
        begin
            EN <= 1'b1;
        end else if (stat == ST_BRAM_READ) begin
            EN <= (CHNL_TX_DATA_REN || (buffer_status != C_WIDTH_RATIO));
        end else begin
            EN <= 1'b0;
        end

        for (i = 0; i < C_BRAM_NUM; i = i + 1)
        begin
            if (bram_sel == i)
            begin
                wen_high[i] <= 1'b1;
            end else begin
                wen_high[i] <= 1'b0;
            end
        end

    end
    
    assign Dout = rx_buffer[C_BRAM_DATA_WIDTH - 1: 0];

    always @ (posedge clk)
    begin
        //two clocks latency from address to data
        //flag1 <= flag0;
        //flag2 <= flag1;
        
        //data source selection
        for (i = 0; i < C_BRAM_NUM; i = i + 1)
        begin
            if (bram_sel == i)
            begin
                if (EN)
                    bram_din <= Din[C_BRAM_DATA_WIDTH*i +: C_BRAM_DATA_WIDTH];
            end
        end
    end
    
    assign CHNL_TX_DATA = tx_buffer;
    assign CHNL_TX_OFF = 'b0;

endmodule
