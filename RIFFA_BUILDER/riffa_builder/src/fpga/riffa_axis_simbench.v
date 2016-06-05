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
// Description:         Simulation bench for the RIFFA to AXI-Stream.
// Author:              Qiongzhi Wu
// History:
//-----------------------------------------------------------------------------

`timescale 1ns/1ns

module riffa_axis_simbench#(
    parameter C_AXIS_DATA_WIDTH = 32,
    parameter C_PCI_DATA_WIDTH = 128
) ();

    reg AXIS_RSTN;
    reg AXIS_CLK;
//    wire AXIS_TVALID;
//    wire AXIS_TLAST;
//    wire AXIS_TREADY;
//    wire [C_AXIS_DATA_WIDTH-1 : 0] AXIS_TDATA;
//    reg [31:0] AXIS_LEN;


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
    
    wire down_axis_tvalid;
    wire down_axis_tready;
    wire down_axis_tlast;
    wire [C_AXIS_DATA_WIDTH - 1:0] down_axis_tdata;
    
    wire up_axis_tvalid;
    wire up_axis_tready;
    wire up_axis_tlast;
    wire [C_AXIS_DATA_WIDTH - 1:0] up_axis_tdata;
    wire [31:0] up_axis_len;
    
    riffa_axis_m #(
        .C_AXIS_DATA_WIDTH(C_AXIS_DATA_WIDTH),
        .C_PCI_DATA_WIDTH (C_PCI_DATA_WIDTH ))
    am (
        .M_AXIS_RSTN         (AXIS_RSTN      ),
        .M_AXIS_CLK          (AXIS_CLK         ),
        .M_AXIS_TVALID       (down_axis_tvalid   ),
        .M_AXIS_TLAST        (down_axis_tlast    ),
        .M_AXIS_TREADY       (down_axis_tready   ),
        .M_AXIS_TDATA        (down_axis_tdata    ),
        .CHNL_RX_CLK         (CHNL_RX_CLK        ),
        .CHNL_RX             (CHNL_RX            ),
        .CHNL_RX_ACK         (CHNL_RX_ACK        ),
        .CHNL_RX_LAST        (CHNL_RX_LAST       ),
        .CHNL_RX_LEN         (CHNL_RX_LEN        ),
        .CHNL_RX_OFF         (CHNL_RX_OFF        ),
        .CHNL_RX_DATA        (CHNL_RX_DATA       ),
        .CHNL_RX_DATA_VALID  (CHNL_RX_DATA_VALID ),
        .CHNL_RX_DATA_REN    (CHNL_RX_DATA_REN   )
    );
    
    riffa_axis_s #(
        .C_AXIS_DATA_WIDTH(C_AXIS_DATA_WIDTH) ,
        .C_PCI_DATA_WIDTH (C_PCI_DATA_WIDTH ))
    as(
        .S_AXIS_RSTN         (AXIS_RSTN       ),
        .S_AXIS_CLK          (AXIS_CLK          ),
        .S_AXIS_TVALID       (up_axis_tvalid      ),
        .S_AXIS_TLAST        (up_axis_tlast       ),
        .S_AXIS_TREADY       (up_axis_tready      ),
        .S_AXIS_TDATA        (up_axis_tdata       ),
        .S_AXIS_LEN          (up_axis_len         ),
        .CHNL_TX_CLK         (CHNL_TX_CLK         ),
        .CHNL_TX             (CHNL_TX             ),
        .CHNL_TX_ACK         (CHNL_TX_ACK         ),
        .CHNL_TX_LAST        (CHNL_TX_LAST        ),
        .CHNL_TX_LEN         (CHNL_TX_LEN         ),
        .CHNL_TX_OFF         (CHNL_TX_OFF         ),
        .CHNL_TX_DATA        (CHNL_TX_DATA        ),
        .CHNL_TX_DATA_VALID  (CHNL_TX_DATA_VALID  ),
        .CHNL_TX_DATA_REN    (CHNL_TX_DATA_REN    )
    );
    
    wire [31:0] down_axis_err_cnt;
    
    axis_tester #(
        .C_AXIS_DATA_WIDTH(C_AXIS_DATA_WIDTH)) 
    a_tester (
        .AXIS_RSTN      (AXIS_RSTN     ),
        .AXIS_CLK       (AXIS_CLK        ),
        .S_AXIS_TVALID  (down_axis_tvalid  ),
        .S_AXIS_TLAST   (down_axis_tlast   ),
        .S_AXIS_TREADY  (down_axis_tready  ),
        .S_AXIS_TDATA   (down_axis_tdata   ),
        .M_AXIS_TVALID  (up_axis_tvalid   ),
        .M_AXIS_TLAST   (up_axis_tlast    ),
        .M_AXIS_TREADY  (up_axis_tready   ),
        .M_AXIS_TDATA   (up_axis_tdata    ),
        .M_AXIS_LEN     (up_axis_len      ),
        .ERR_CNT        (down_axis_err_cnt)
    );
    
    localparam C_WIDTH_RATIO = (C_PCI_DATA_WIDTH / C_AXIS_DATA_WIDTH);
    localparam C_PCI_BYTE_WIDTH = (C_PCI_DATA_WIDTH / 8);
    localparam C_AXIS_BYTE_WIDTH = (C_AXIS_DATA_WIDTH / 8);
    
    reg [7:0] send_data [255:0];
    reg [7:0] recv_data [255:0];

    
    //main clock 100 MHz
    always #5 AXIS_CLK = ~AXIS_CLK;
    
    reg [9:0] rand = 3;
    
    always @(posedge AXIS_CLK)
    begin
        rand <= {rand[8:0], rand[9]^rand[6]};
    end
    
    /////////////////////////////////////
    //Send task, functinal similar with the SW API fpga_send();
    task fpga_send;
        input integer words;
        input integer offset;
        input last;
        integer i, j;
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
        
        
        
        while (i < words*4)
        begin
            #1 CHNL_RX_DATA_VALID = rand[9];
            if (CHNL_RX_DATA_VALID)
            begin
                for (j = 0; j < C_PCI_BYTE_WIDTH; j = j + 1)
                    CHNL_RX_DATA[j*8 +: 8] = send_data[i + j];
            end else
                CHNL_RX_DATA <= 0;
            
            @(posedge CHNL_RX_CLK);
            
            if (CHNL_RX_DATA_REN && CHNL_RX_DATA_VALID)
                i = i + C_PCI_BYTE_WIDTH;
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
        integer i, j;
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
        
        
        i = 0;
        
        while (i < words * 4)
        begin
            #1 CHNL_TX_DATA_REN = rand[9];
            @(posedge CHNL_TX_CLK);
            if (CHNL_TX_DATA_VALID && CHNL_TX_DATA_REN)
            begin
                for (j = 0; j < C_PCI_BYTE_WIDTH; j = j + 1)
                    recv_data[i + j] = CHNL_TX_DATA[j*8 +: 8];
                i = i + C_PCI_BYTE_WIDTH;
            end
        end
        
        #1 CHNL_TX_DATA_REN = 1'b0;
        
        @(posedge CHNL_TX_CLK);
    end
    endtask
    
    integer progress1, progress2, NN = 38;

    
    initial
    begin : p1
    
        integer i;
    
        progress1 = 0;
        
        for (i = 0; i < 256; i = i + 1)
            send_data[i] = 0;
        for (i = 0; i < 256/4; i = i + 1)
            send_data[i*4] = i+1;
    
        CHNL_RX = 'b0;
        CHNL_RX_LAST = 'b0;
        CHNL_RX_LEN = 'b0;
        CHNL_RX_OFF = 'b0;
        CHNL_RX_DATA = 'b0;
        CHNL_RX_DATA_VALID = 'b0;

        AXIS_CLK = 1'b0;

        AXIS_RSTN = 1'b0;
        # 20;
        AXIS_RSTN = 1'b1;
        # 20;
        
        progress1 = 1;
        
        fpga_send(NN, 0, 1);
        
        progress1 = 2;
        
    end


    initial
    begin : p2
    
        integer i;

        progress2 = 0;
        
        for (i = 0; i < 255; i = i + 1)
            recv_data[i] = 'b0;
    
        CHNL_TX_ACK = 'b0;
        CHNL_TX_DATA_REN = 'b0;

        #20;
        while (!AXIS_RSTN) @(posedge CHNL_RX_CLK);

        
        fpga_recv(NN);
        
        
        for (i = 0; i < NN*4; i = i + 1)
        begin
            if (recv_data[i] != send_data[i])
            begin
                $display ("Err. At %d shoud 0x%H but 0x%H", i, send_data[i], recv_data[i]);  
                i = NN*4;
            end
        end
    end

endmodule
