#!/usr/bin/python
# Filename : riffa_topv_builder.py

import os

class RiffaTopvBuilder:
    
    def __init__(self, Builder):
        self.builder = Builder
        
    def write_clock(self, f):
        
        #declare clock and reset 
        f.write('\n')
        f.write('    wire {0};\n'.format(self.builder.main_clk))
        f.write('    wire {0};\n'.format(self.builder.main_rstn))
        f.write('    wire {0};\n'.format(self.builder.main_rst))
        
        #clock and reset
        f.write('\n')
        if (self.builder.clk_div == 1):
            f.write('    assign {0} = user_clk;\n'.format(self.builder.main_clk))
        else:
            f.write('\n')
            f.write('    localparam MAIN_CLK_DIV= {0};\n\n'.format(self.builder.clk_div))

            f.write('    reg [7:0] main_clk_cnt;\n')
            f.write('    reg main_clk;\n')
            f.write('    always @ (posedge user_clk)\n')
            f.write('    begin\n')
            f.write('        if (main_clk_cnt == (MAIN_CLK_DIV - 1))\n')
            f.write('        begin\n')
            f.write('            main_clk <= 1\'b1;\n')
            f.write('            main_clk_cnt <= \'b0;\n')
            f.write('        end else if (main_clk_cnt == (MAIN_CLK_DIV / 2 - 1))\n'.format(int(self.builder.clk_div/2) - 1))
            f.write('        begin\n')
            f.write('            main_clk <= 1\'b0;\n')
            f.write('            main_clk_cnt <= main_clk_cnt + 1\'b1;\n')
            f.write('        end else\n')
            f.write('            main_clk_cnt <= main_clk_cnt + 1\'b1;\n')
            f.write('    end\n\n')
            f.write('    BUFG mclk_buf (.I(main_clk), .O({0}));\n'.format(self.builder.main_clk))
        f.write('    assign {0} = ! rst_out;\n'.format(self.builder.main_rstn))
        f.write('    assign {0} = rst_out;\n'.format(self.builder.main_rst))
            
    
    def write_gpio(self, f):
        f.write('\n')
        f.write('    //\n    //CHNL 0 : GPIO\n')
        f.write('    localparam C_GPIO_WIDTH = {0};\n'.format(self.builder.gpio_width))
        f.write('        wire [C_GPIO_WIDTH - 1:0] gpo;\n')
        f.write('        wire [C_GPIO_WIDTH - 1:0] gpi;\n')
        f.write('\n')
        f.write('    riffa_gpio #(\n')
        f.write('        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),\n')
        f.write('        .C_GPIO_OUT_WIDTH    (C_GPIO_WIDTH),\n')
        f.write('        .C_GPIO_IN_WIDTH     (C_GPIO_WIDTH))\n')
        f.write('    gpio (\n')
        f.write('        .CLK                 ({0}),\n'.format(self.builder.main_clk))
        f.write('        .RESETN              ({0}),\n'.format(self.builder.main_rstn))
        f.write('        .GPO                 (gpo),\n')
        f.write('        .GPI                 (gpi),\n')
        f.write('        .CHNL_RX_CLK         (chnl_rx_clk[0]),\n')
        f.write('        .CHNL_RX             (chnl_rx[0]),\n')
        f.write('        .CHNL_RX_ACK         (chnl_rx_ack[0]),\n')
        f.write('        .CHNL_RX_LAST        (chnl_rx_last[0]),\n')
        f.write('        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W-1:0]),\n')
        f.write('        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W-1:0]),\n')
        f.write('        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH-1:0]),\n')
        f.write('        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid[0]),\n')
        f.write('        .CHNL_RX_DATA_REN    (chnl_rx_data_ren[0]),\n')
        f.write('        .CHNL_TX_CLK         (chnl_tx_clk[0]),\n')
        f.write('        .CHNL_TX             (chnl_tx[0]),\n')
        f.write('        .CHNL_TX_ACK         (chnl_tx_ack[0]),\n')
        f.write('        .CHNL_TX_LAST        (chnl_tx_last[0]),\n')
        f.write('        .CHNL_TX_LEN         (chnl_tx_len[`SIG_CHNL_LENGTH_W-1:0]),\n')
        f.write('        .CHNL_TX_OFF         (chnl_tx_off[`SIG_CHNL_OFFSET_W-1:0]),\n')
        f.write('        .CHNL_TX_DATA        (chnl_tx_data[C_PCI_DATA_WIDTH-1:0]),\n')
        f.write('        .CHNL_TX_DATA_VALID  (chnl_tx_data_valid[0]),\n')
        f.write('        .CHNL_TX_DATA_REN    (chnl_tx_data_ren[0]));\n')
            
    def write_tester(self, f, chnl):
        chnl = str(chnl)
        f.write('\n')
        f.write('    //\n    //CHNL ' + chnl + ': RIFFA tester\n')
        f.write('    localparam C_TESTER_CHNL = ' + chnl + ';\n')
        f.write('\n')
        f.write('    chnl_tester #(\n')
        f.write('        .C_PCI_DATA_WIDTH  (C_PCI_DATA_WIDTH))\n')
        f.write('    tester (\n')
        f.write('        .CLK               (user_clk),\n')
        f.write('        .RST               (rst_out),\n')
        f.write('        .CHNL_RX_CLK       (chnl_rx_clk[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_RX           (chnl_rx[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_RX_ACK       (chnl_rx_ack[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_RX_LAST      (chnl_rx_last[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_RX_LEN       (chnl_rx_len[`SIG_CHNL_LENGTH_W*C_TESTER_CHNL +:`SIG_CHNL_LENGTH_W]),\n')
        f.write('        .CHNL_RX_OFF       (chnl_rx_off[`SIG_CHNL_OFFSET_W*C_TESTER_CHNL +:`SIG_CHNL_OFFSET_W]),\n')
        f.write('        .CHNL_RX_DATA      (chnl_rx_data[C_PCI_DATA_WIDTH*C_TESTER_CHNL +:C_PCI_DATA_WIDTH]),\n')
        f.write('        .CHNL_RX_DATA_VALID(chnl_rx_data_valid[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_RX_DATA_REN  (chnl_rx_data_ren[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_TX_CLK       (chnl_tx_clk[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_TX           (chnl_tx[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_TX_ACK       (chnl_tx_ack[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_TX_LAST      (chnl_tx_last[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_TX_LEN       (chnl_tx_len[`SIG_CHNL_LENGTH_W*C_TESTER_CHNL +:`SIG_CHNL_LENGTH_W]),\n')
        f.write('        .CHNL_TX_OFF       (chnl_tx_off[`SIG_CHNL_OFFSET_W*C_TESTER_CHNL +:`SIG_CHNL_OFFSET_W]),\n')
        f.write('        .CHNL_TX_DATA      (chnl_tx_data[C_PCI_DATA_WIDTH*C_TESTER_CHNL +:C_PCI_DATA_WIDTH]),\n')
        f.write('        .CHNL_TX_DATA_VALID(chnl_tx_data_valid[C_TESTER_CHNL]),\n')
        f.write('        .CHNL_TX_DATA_REN  (chnl_tx_data_ren[C_TESTER_CHNL]));\n')
        
    def write_port_wires(self, f, port):
        name = port.wirename
        if (port.debug):
            debug = '(* mark_debug = "true" *) '
        else:
            debug = ''
        if (port.style == 'AXIS'):
            f.write('    '+debug+'wire [{0}:0] {1}_tdata;\n'.format(port.aligned_width-1, name))
            f.write('    '+debug+'wire ' + name + '_tvalid;\n')
            f.write('    '+debug+'wire ' + name + '_tready;\n')
            f.write('    '+debug+'wire ' + name + '_tlast;\n')
            f.write('    wire [{0}:0] {1}_start_ticks;\n'.format(self.builder.performance_counters_width-1, name))
            f.write('    wire [{0}:0] {1}_end_ticks;\n'.format(self.builder.performance_counters_width-1, name))
            f.write('    wire [{0}:0] {1}_data_bytes;\n'.format(self.builder.performance_counters_width-1, name))

            if (port.direction == 'out'):
                f.write('    '+debug+'wire [{0}:0] {1}_len;\n'.format(self.builder.riffa_len_width-1, name))
        elif (port.style == 'BRAM'):
            f.write('    '+debug+'wire [{0}:0] {1}_Addr_A;\n'.format(port.addr_width + port.addr_zero -1, name))
            f.write('    '+debug+'wire [{0}:0] {1}_Din_A;\n'.format(port.width-1, name))
            f.write('    '+debug+'wire [{0}:0] {1}_Dout_A;\n'.format(port.width-1, name))
            if (port.wena_width <= 1):
                f.write('    '+debug+'wire {0}_WEN_A;\n'.format(name))
            else:
                f.write('    '+debug+'wire [{0}:0] {1}_WEN_A;\n'.format(port.wena_width-1, name))
            
            f.write('    '+debug+'wire {0}_EN_A;\n'.format(name))
            if (port.has_clk):
                f.write('    wire {0}_Clk_A;\n'.format(name))
            if (port.has_rst):
                f.write('    '+debug+'wire {0}_Rst_A;\n'.format(name))
        else:
            if (port.width == 1):
                f.write('    '+debug+'wire ' + name + ';\n')
            else:
                f.write('    '+debug+'wire [{0}:0] {1};\n'.format(port.aligned_width-1, name))
    
    def write_bram_wires(self, f, bch):
        f.write('    wire [{1}:0] bram{0}_Addr;\n'.format(bch.chnl, bch.addr_width - 1))
        f.write('    wire [{1}:0] bram{0}_Din;\n'.format(bch.chnl, bch.width - 1))
        f.write('    wire [{1}:0] bram{0}_Dout;\n'.format(bch.chnl, bch.width*bch.num - 1))
        f.write('    wire [{1}:0] bram{0}_WEN;\n'.format(bch.chnl, bch.num - 1))
        f.write('    wire bram{0}_EN;\n'.format(bch.chnl))
    
    def write_connection(self, f, port):
        p = port
        if (p.style == 'Scalar'):
            if (p == p.module.done_port):
                f.write('\n    reg {0}_holder;\n\n'.format(p.wirename))
                f.write('    always @ (posedge {0} or posedge {1})\n'.format(self.builder.main_clk, self.builder.main_rst))
                f.write('    begin\n')
                f.write('        if ({0})\n'.format(self.builder.main_rst))
                f.write('            {0}_holder <= 1\'b0;\n'.format(p.wirename))
                f.write('        else begin\n')
                f.write('            if (! {0})\n'.format(p.module.start_port.wirename))
                f.write('                {0}_holder <= 1\'b0;\n'.format(p.wirename))
                f.write('            else if ({0})\n'.format(p.wirename))
                f.write('                {0}_holder <= 1\'b1;\n'.format(p.wirename))
                f.write('        end\n')
                f.write('    end\n\n')
                f.write('    assign gpi[{0}] = {1}_holder;\n'.format(p.gpio_bit, p.wirename))

            elif (p.name in self.builder.module_clks):
                f.write('    assign {0} = {1};\n'.format(p.wirename, self.builder.main_clk))
            elif (p.name in self.builder.module_rstns):
                f.write('    assign {0} = {1} & ~gpo[{2}];\n'.format(p.wirename, self.builder.main_rstn, p.gpio_bit))
                f.write('    assign gpi[{0}] = gpo[{0}];\n'.format(p.gpio_bit))
            elif (p.name in self.builder.module_rsts):
                f.write('    assign {0} = {1} & gpo[{2}];\n'.format(p.wirename, self.builder.main_rst, p.gpio_bit))
                f.write('    assign gpi[{0}] = gpo[{0}];\n'.format(p.gpio_bit))
            elif (p.direction == 'in'):
                if (p.width == 1):
                    f.write('    assign {0} = gpo[{1}];\n'.format(p.wirename, p.gpio_bit))
                    f.write('    assign gpi[{0}] = gpo[{0}];\n'.format(p.gpio_bit))
                else:
                    f.write('    assign {0} = gpo[{1}:{2}];\n'.format(p.wirename, p.gpio_bit + p.width - 1, p.gpio_bit))
                    f.write('    assign gpi[{0}:{1}] = gpo[{0}:{1}];\n'.format(p.gpio_bit + p.width - 1, p.gpio_bit))
            else: #direction == 'out'
                if (p.width == 1):
                    f.write('    assign gpi[{0}] = {1};\n'.format(p.gpio_bit, p.wirename))
                else:
                    f.write('    assign gpi[{0}:{1}] = {2};\n'.format(p.gpio_bit + p.width - 1, p.gpio_bit, p.wirename))
        elif (p.style == 'AXIS'):
            if (p.direction == 'out'):
                f.write('    assign {0}_len = (gpo[{1}:{2}])? gpo[{1}:{2}] : {3};\n'.format(p.wirename, p.gpio_bit + self.builder.riffa_len_width - 1, p.gpio_bit, p.words))
                f.write('    assign gpi[{0}:{1}] = gpo[{0}:{1}];\n'.format(p.gpio_bit + self.builder.riffa_len_width - 1, p.gpio_bit))
            if (self.builder.performance_counters):
                f.write('    assign gpi[{0}+:{1}] = {2}_start_ticks;\n'.format(p.gpio_bit_start_ticks, self.builder.performance_counters_width, p.wirename))
                f.write('    assign gpi[{0}+:{1}] = {2}_end_ticks;\n'.format(p.gpio_bit_end_ticks, self.builder.performance_counters_width, p.wirename))
                f.write('    assign gpi[{0}+:{1}] = {2}_data_bytes;\n'.format(p.gpio_bit_data_bytes, self.builder.performance_counters_width, p.wirename))

    def write_pfm_wires(self, f, m):
        for m in self.builder.modules:
            f.write('    wire [{0}:0] {1}start_ticks;\n'.format(self.builder.performance_counters_width-1, m.prefix))
            f.write('    wire [{0}:0] {1}done_ticks;\n'.format(self.builder.performance_counters_width-1, m.prefix))

    def write_pfm_connection(self, f, m):
        if (self.builder.performance_counters):
            f.write('    assign gpi[{0}+:{1}] = {2}start_ticks;\n'.format(m.gpio_bit_start_ticks, self.builder.performance_counters_width, m.prefix))
            f.write('    assign gpi[{0}+:{1}] = {2}done_ticks;\n'.format(m.gpio_bit_done_ticks, self.builder.performance_counters_width, m.prefix))

    def write_axis_m(self, f, port):
        name = port.wirename
        width = port.width
        chnl = str(port.chnl)
        CHNL = 'C_'+name.upper()+'_CHNL'
        f.write('\n')
        f.write('    //\n    //CHNL ' + chnl + ' RX\n\n')
        self.write_port_wires(f,port)
        f.write('\n    localparam '+CHNL+' = '+chnl+';\n')
        f.write('    riffa_axis_m #(\n')
        f.write('        .C_AXIS_DATA_WIDTH   ('+str(width)+'),\n')
        f.write('        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),\n')
        f.write('        .C_COUNTER           ({0}),\n'.format(1 if self.builder.performance_counters else 0))
        f.write('        .C_COUNTER_WIDTH     ({0}),\n'.format(self.builder.performance_counters_width))
        f.write('        .C_COUNTER_DIV       ({0}))\n'.format(self.builder.performance_counters_tick_div))

        f.write('    am'+chnl+' (\n')
        f.write('        .M_AXIS_RSTN         (' + self.builder.main_rstn +'),\n')
        f.write('        .M_AXIS_CLK          (' + self.builder.main_clk +'),\n')
        f.write('        .M_AXIS_TVALID       (' + name + '_tvalid),\n')
        f.write('        .M_AXIS_TLAST        (' + name + '_tlast),\n')
        f.write('        .M_AXIS_TREADY       (' + name + '_tready),\n')
        f.write('        .M_AXIS_TDATA        (' + name + '_tdata),\n')
        f.write('        .CHNL_RX_CLK         (chnl_rx_clk['+CHNL+']),\n')
        f.write('        .CHNL_RX             (chnl_rx['+CHNL+']),\n')
        f.write('        .CHNL_RX_ACK         (chnl_rx_ack['+CHNL+']),\n')
        f.write('        .CHNL_RX_LAST        (chnl_rx_last['+CHNL+']),\n')
        f.write('        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*'+CHNL+' +:`SIG_CHNL_LENGTH_W]),\n')
        f.write('        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*'+CHNL+' +:`SIG_CHNL_OFFSET_W]),\n')
        f.write('        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*'+CHNL+'+:C_PCI_DATA_WIDTH]),\n')
        f.write('        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid['+CHNL+']),\n')
        f.write('        .CHNL_RX_DATA_REN    (chnl_rx_data_ren['+CHNL+']),\n')
        f.write('        .START_TICKS         ({0}_start_ticks),\n'.format(name))
        f.write('        .END_TICKS           ({0}_end_ticks),\n'.format(name))
        f.write('        .DATA_BYTES          ({0}_data_bytes));\n'.format(name))


        
    def write_axis_s(self, f, port):
        name = port.wirename
        width = str(port.width)
        chnl = str(port.chnl)
        CHNL = 'C_'+name.upper()+'_CHNL'
        f.write('\n')
        f.write('    //\n    //CHNL ' + chnl + ' TX\n\n')
        self.write_port_wires(f,port)
        f.write('\n    localparam '+CHNL+'='+chnl+';\n')
        f.write('\n')
        f.write('    riffa_axis_s #(\n')
        f.write('        .C_AXIS_DATA_WIDTH('+str(width)+') ,\n')
        f.write('        .C_PCI_DATA_WIDTH    (C_PCI_DATA_WIDTH),\n')
        f.write('        .C_COUNTER           ({0}),\n'.format(1 if self.builder.performance_counters else 0))
        f.write('        .C_COUNTER_WIDTH     ({0}),\n'.format(self.builder.performance_counters_width))
        f.write('        .C_COUNTER_DIV       ({0}))\n'.format(self.builder.performance_counters_tick_div))
        f.write('    as'+chnl+' (\n')
        f.write('        .S_AXIS_RSTN         (' + self.builder.main_rstn + '),\n')
        f.write('        .S_AXIS_CLK          (' + self.builder.main_clk + '),\n')
        f.write('        .S_AXIS_TVALID       ('+name+'_tvalid),\n')
        f.write('        .S_AXIS_TLAST        ('+name+'_tlast),\n')
        f.write('        .S_AXIS_TREADY       ('+name+'_tready),\n')
        f.write('        .S_AXIS_TDATA        ('+name+'_tdata),\n')
        f.write('        .S_AXIS_LEN          ('+name+'_len),\n')
        f.write('        .CHNL_TX_CLK         (chnl_tx_clk['+CHNL+']),\n')
        f.write('        .CHNL_TX             (chnl_tx['+CHNL+']),\n')
        f.write('        .CHNL_TX_ACK         (chnl_tx_ack['+CHNL+']),\n')
        f.write('        .CHNL_TX_LAST        (chnl_tx_last['+CHNL+']),\n')
        f.write('        .CHNL_TX_LEN         (chnl_tx_len[`SIG_CHNL_LENGTH_W*'+CHNL+' +:`SIG_CHNL_LENGTH_W]),\n')
        f.write('        .CHNL_TX_OFF         (chnl_tx_off[`SIG_CHNL_OFFSET_W*'+CHNL+' +:`SIG_CHNL_OFFSET_W]),\n')
        f.write('        .CHNL_TX_DATA        (chnl_tx_data[C_PCI_DATA_WIDTH*'+CHNL+' +:C_PCI_DATA_WIDTH]),\n')
        f.write('        .CHNL_TX_DATA_VALID  (chnl_tx_data_valid['+CHNL+']),\n')
        f.write('        .CHNL_TX_DATA_REN    (chnl_tx_data_ren['+CHNL+']),\n')
        f.write('        .START_TICKS         ({0}_start_ticks),\n'.format(name))
        f.write('        .END_TICKS           ({0}_end_ticks),\n'.format(name))
        f.write('        .DATA_BYTES          ({0}_data_bytes));\n'.format(name))

    def write_riffa_bram(self, f, bch):
        chnl = bch.chnl
        CHNL = 'C_BRAM_CHNL'.format(bch.chnl)
        f.write('\n')
        f.write('    //\n    //CHNL {0}\n\n'.format(chnl))
        self.write_bram_wires(f, bch);
        f.write('\n    localparam {0} = {1};\n\n'.format(CHNL, chnl))

        f.write('    riffa_bram #(\n')
        
        f.write('        .C_BRAM_DATA_WIDTH({0}),\n'.format(bch.width))
        f.write('        .C_BRAM_ADDR_WIDTH({0}),\n'.format(bch.addr_width))
        f.write('        .C_BRAM_NUM       ({0}),\n'.format(bch.num))
        f.write('        .C_PCI_DATA_WIDTH (C_PCI_DATA_WIDTH))\n')
        f.write('    bm{0}(\n'.format(chnl))
        
        f.write('        .CLK                 ({0}),\n'.format(self.builder.main_clk))
        f.write('        .RESETN              ({0}),\n'.format(self.builder.main_rstn))
        f.write('        .Addr                (bram{0}_Addr),\n'.format(bch.chnl))
        f.write('        .Dout                (bram{0}_Din ),\n'.format(bch.chnl))
        f.write('        .WEN                 (bram{0}_WEN ),\n'.format(bch.chnl))
        f.write('        .EN                  (bram{0}_EN  ),\n'.format(bch.chnl))
        f.write('        .Din                 (bram{0}_Dout),\n'.format(bch.chnl))
        f.write('        .CHNL_RX_CLK         (chnl_rx_clk['+CHNL+']),\n')
        f.write('        .CHNL_RX             (chnl_rx['+CHNL+']),\n')
        f.write('        .CHNL_RX_ACK         (chnl_rx_ack['+CHNL+']),\n')
        f.write('        .CHNL_RX_LAST        (chnl_rx_last['+CHNL+']),\n')
        f.write('        .CHNL_RX_LEN         (chnl_rx_len[`SIG_CHNL_LENGTH_W*'+CHNL+' +:`SIG_CHNL_LENGTH_W]),\n')
        f.write('        .CHNL_RX_OFF         (chnl_rx_off[`SIG_CHNL_OFFSET_W*'+CHNL+' +:`SIG_CHNL_OFFSET_W]),\n')
        f.write('        .CHNL_RX_DATA        (chnl_rx_data[C_PCI_DATA_WIDTH*'+CHNL+'+:C_PCI_DATA_WIDTH]),\n')
        f.write('        .CHNL_RX_DATA_VALID  (chnl_rx_data_valid['+CHNL+']),\n')
        f.write('        .CHNL_RX_DATA_REN    (chnl_rx_data_ren['+CHNL+']),\n')
        f.write('        .CHNL_TX_CLK         (chnl_tx_clk['+CHNL+']),\n')
        f.write('        .CHNL_TX             (chnl_tx['+CHNL+']),\n')
        f.write('        .CHNL_TX_ACK         (chnl_tx_ack['+CHNL+']),\n')
        f.write('        .CHNL_TX_LAST        (chnl_tx_last['+CHNL+']),\n')
        f.write('        .CHNL_TX_LEN         (chnl_tx_len[`SIG_CHNL_LENGTH_W*'+CHNL+' +:`SIG_CHNL_LENGTH_W]),\n')
        f.write('        .CHNL_TX_OFF         (chnl_tx_off[`SIG_CHNL_OFFSET_W*'+CHNL+' +:`SIG_CHNL_OFFSET_W]),\n')
        f.write('        .CHNL_TX_DATA        (chnl_tx_data[C_PCI_DATA_WIDTH*'+CHNL+' +:C_PCI_DATA_WIDTH]),\n')
        f.write('        .CHNL_TX_DATA_VALID  (chnl_tx_data_valid['+CHNL+']),\n')
        f.write('        .CHNL_TX_DATA_REN    (chnl_tx_data_ren['+CHNL+']    ));\n')
        
    def write_bram(self, f, port):
        name = port.wirename
        
        f.write('    //\n    //BRAM {0}\n'.format(name))
        self.write_port_wires(f, port)
        f.write('    riffa_bram_core #(\n')
        f.write('        .DATA_WIDTH({0}),\n'.format(port.width))
        f.write('        .ADDR_WIDTH({0})\n'.format(port.addr_width))
        f.write('    ) bram_{0} (\n'.format(name))
        if (port.has_clk):
            f.write('        .Clk_A     ({0}_Clk_A),\n'.format(name))
        else:
            f.write('        .Clk_A     ({0}),\n'.format(self.builder.main_clk))
        f.write('        .WEN_A     ({0}_WEN_A ),\n'.format(name))
        f.write('        .EN_A      ({0}_EN_A  ),\n'.format(name))
        f.write('        .Addr_A    ({0}_Addr_A[{1} +: {2}]),\n'.format(name, port.addr_zero, port.addr_width))
        f.write('        .Din_A     ({0}_Din_A ),\n'.format(name))
        f.write('        .Dout_A    ({0}_Dout_A),\n'.format(name))
        f.write('        .Clk_B     ({0}),\n'.format(self.builder.main_clk))
        f.write('        .WEN_B     (bram{0}_WEN[{1}]),\n'.format(port.bram_chnl.chnl, port.bram_index))
        f.write('        .EN_B      (bram{0}_EN),\n'.format(port.bram_chnl.chnl))
        f.write('        .Addr_B    (bram{0}_Addr[{1}:0]),\n'.format(port.bram_chnl.chnl, port.addr_width -1 ))
        f.write('        .Din_B     (bram{0}_Din[{1}:0]),\n'.format(port.bram_chnl.chnl, port.width - 1))
        f.write('        .Dout_B    (bram{0}_Dout[{1}:{2}]));\n\n'.format(port.bram_chnl.chnl, \
            port.bram_chnl.width * port.bram_index + port.width - 1, port.bram_chnl.width * port.bram_index))
        
        if (port.width < port.bram_chnl.width):
            f.write('    assign bram{0}_Din[{1}:{2}] = \'b0;\n\n'.format(port.bram_chnl.chnl, \
            port.bram_chnl.width * port.bram_index + port.bram_chnl.width - 1, port.bram_chnl.width * port.bram_index + port.width))
        
        if (port.direction == 'in'):
            f.write('    assign {0}_WEN_A = \'b0;\n'.format(name))
            f.write('    assign {0}_Dout_A = \'b0;\n'.format(name))
        
        if (not port.has_en):
            f.write('    assign {0}_EN_A = 1\'b1;\n'.format(name))
            
    
    def write_rx_dumy(self, f, chnl): 
        chnl = str(chnl)
        f.write('    assign chnl_rx_clk[' + chnl + '] = ' + self.builder.main_clk + ';\n')
        f.write('    assign chnl_rx_ack[' + chnl + '] = 1\'b0;\n')
        f.write('    assign chnl_rx_data_ren[' + chnl + '] = 1\'b0;\n')
    
    def write_tx_dumy(self, f, chnl): 
        chnl = str(chnl)
        f.write('    assign chnl_tx_clk[' + chnl + '] = ' + self.builder.main_clk + ';\n')
        f.write('    assign chnl_tx[' + chnl + '] = 1\'b0;\n')
        f.write('    assign chnl_tx_last[' + chnl + '] = 1\'b0;\n')
        f.write('    assign chnl_tx_len[`SIG_CHNL_LENGTH_W*'+chnl+'+:`SIG_CHNL_LENGTH_W] = \'b0;\n')
        f.write('    assign chnl_tx_off[`SIG_CHNL_OFFSET_W*'+chnl+'+:`SIG_CHNL_OFFSET_W] = \'b0;\n')
        f.write('    assign chnl_tx_data[C_PCI_DATA_WIDTH*'+chnl+'+:C_PCI_DATA_WIDTH] = \'b0;\n')
        f.write('    assign chnl_tx_data_valid[' + chnl + '] = 1\'b0;\n')

    def write_performance_counters(self, f):
        f.write('\n');
        f.write('    pfm_counter #(\n');
        f.write('        .CHANNEL_NUM({0}),\n'.format(2*len(self.builder.modules)))
        f.write('        .WIDTH({0}),\n'.format(self.builder.performance_counters_width))
        f.write('        .DIV({0}))\n'.format(self.builder.performance_counters_tick_div))
        f.write('    pfm_counters (\n')
        f.write('        .rst ({0}),\n'.format(self.builder.main_rst))
        f.write('        .clk ({0}),\n'.format(self.builder.main_clk))
        f.write('        .trig ({')
        bfirst = True
        for m in self.builder.modules:
            if (not bfirst):
                f.write('\n             ,')
            bfirst = False
            f.write('{0}ap_start, {0}ap_done'.format(m.prefix))
        f.write('}),\n')
        f.write('        .mark ({')
        bfirst = True
        for m in self.builder.modules:
            if (not bfirst):
                f.write('\n             ,')
            bfirst = False
            f.write('{0}start_ticks, {0}done_ticks'.format(m.prefix))
        f.write('}));\n')

    def write_user_module(self, f, module):
        name = module.ins_name;
        mtype = module.name;
        f.write('\n');
        f.write('    ' + mtype + ' ' + name + '(\n')
        for p in module.external_ports:
            f.write('        .'+p.name.ljust(20)+'(' + p.name +')' + p.comma + '\n')
        for p in module.ports:
            if (p.style == 'Scalar'):
                f.write('        .'+p.name.ljust(20)+'(' + p.wirename +')' + p.comma + '\n')
            if (p.style == 'AXIS'):
                if (p.axis_last):
                    f.write('        .'+(p.name+'_TLAST').ljust(20)+'(' + p.wirename + '_tlast),\n')
                f.write('        .'+(p.name+'_TDATA').ljust(20)+'(' + p.wirename + '_tdata),\n')
                f.write('        .'+(p.name+'_TVALID').ljust(20)+'(' + p.wirename + '_tvalid),\n')
                f.write('        .'+(p.name+'_TREADY').ljust(20)+'(' + p.wirename + '_tready)' + p.comma + '\n')
            if (p.style == 'BRAM'):
                if (p.has_clk):
                    f.write('        .{0}({1}_Clk_A),\n'.format((p.name+'_Clk_A').ljust(20), p.wirename))
                if (p.has_rst):
                    f.write('        .{0}({1}_Rst_A),\n'.format((p.name+'_Rst_A').ljust(20), p.wirename))
                if ('in' in p.direction):
                    f.write('        .{0}({1}_Din_A),\n'.format((p.name+'_Din_A').ljust(20), p.wirename))
                if (p.has_en):
                    f.write('        .{0}({1}_EN_A),\n'.format((p.name+'_EN_A').ljust(20), p.wirename))
                if ('out' in p.direction):
                    f.write('        .{0}({1}_Dout_A),\n'.format((p.name+'_Dout_A').ljust(20), p.wirename))
                    f.write('        .{0}({1}_WEN_A),\n'.format((p.name+'_WEN_A').ljust(20), p.wirename))
                f.write('        .{0}({1}_Addr_A){2}\n'.format((p.name+'_Addr_A').ljust(20), p.wirename, p.comma))
        f.write('\n');
        for p in module.ports:
            if ((p.style == 'AXIS') and (p.direction == 'out')):
                f.write('    assign '+ p.wirename + '_tlast = 1\'b0;\n')

    def build_top_v(self, src_topv_file, dst_topv_file):
        fin = open(src_topv_file, 'r')
        fout = open(dst_topv_file, 'w')
 
        self.builder.axis_rx_num = 0
        self.builder.axis_tx_num = 0
        
        src_lines = fin.readlines()
 
        step = 'channel_num'
 
        i = 0
        incomments = False
        
        while (i < len(src_lines)):
            line = src_lines[i]
            
            if (line.expandtabs().strip().startswith('//')): #comments
                #replace file name
                if ('Filename:' in line):
                    line = line.replace(src_topv_file, dst_topv_file)
                #elif ('Description:' in line):
                #    fout.write('//Description:         Top level module for RIFFA-HLS system\n')
                    
                elif ('Author:' in line):
                    line = '// Author:              Auto Generated\n'
                
                fout.write(line)
                
            elif ((line.expandtabs().strip().startswith('parameter C_NUM_CHNL =')) and \
                step == 'channel_num'):
                    
                fout.write('\n//\n//RIFFA auto generated code begin\n')
                fout.write('      parameter C_NUM_CHNL =' \
                              + str(self.builder.chnl_num) + ',\n')
                fout.write('//RIFFA auto generated code end\n')
                step = 'find_gen'
            elif (('input' in line) and ('PCIE_RESET_N' in line)):
                fout.write(line.replace('\n',''))
                #first = True
                for m in self.builder.modules:
                    for p in m.external_ports:
                        fout.write(',\n')
                        if (p.direction == 'in'):
                            fout.write('     input                          {0}'.format(p.name))
                        elif (p.direction == 'out'):
                            fout.write('     input                          {0}'.format(p.name))
                        if (p.direction == 'inout'):
                            fout.write('     inout                          {0}'.format(p.name))
                        first = False
                fout.write('\n');
            elif ((line.expandtabs().strip().startswith('generate')) and \
                     ('C_NUM_CHNL' in src_lines[i+1]) and \
                     step == 'find_gen'):
 
                #jump over the tester block
                i = i + 2
                while True:
                    if (src_lines[i].expandtabs().strip().startswith('endgenerate')):
                        break
                    else:
                        i = i + 1
                
                fout.write('\n//\n//RIFFA auto generated code begin\n')
                self.write_clock(fout)
                print('Generating clock logic')
                
                #riffa_gpio 
                self.write_gpio(fout)
                print('Generating GPIO adapter')

                #riffa tester
                if (self.builder.need_tester):
                    self.write_tester(fout, 1)
                    print('Generating basic tester')

                
                '''#Signal declaration
                fout.write('    \n    //\n    //Signal declaration\n')
                for m in self.builder.modules:
                    for p in m.ports:
                        self.write_port_wires(fout, p)
                        print('Generating wires for {0}.{1}'.format(m.name, p.name))'''

                

                #riffa to bram
                fout.write('    \n    //\n    //RIFFA-BRAM\n')

                for m in self.builder.bram_chnls:
                    self.write_riffa_bram(fout, m);
                    print('Generating adapter for RIFFA to BRAM on CHNL{0}'.format(m.chnl))

                
                #riffa to axis
                fout.write('    \n    //\n    //RIFFA-AXIS\n')
                for m in self.builder.modules:
                    for p in m.ports:
                        if (p.style == 'AXIS'):
                            if (p.direction == 'in'):
                                self.write_axis_m(fout, p)
                                print('Generating RIFFA to AXIS-Master for {0}.{1}'.format(m.name, p.name))
                
                for m in self.builder.modules:
                    for p in m.ports:
                        if (p.style == 'AXIS'):
                            if (p.direction == 'out'):
                                self.write_axis_s(fout, p)
                                print('Generating RIFFA to AXIS-Slave for {0}.{1}'.format(m.name, p.name))


                #dummy CHNLs
                if (self.builder.chnl_tx_dumy_num > 0):
                    fout.write('    \n    //\n    //Unused TX CHNLs\n')
                    for chnl in range(self.builder.chnl_num - self.builder.chnl_tx_dumy_num, self.builder.chnl_num):
                        self.write_tx_dumy(fout, chnl)
                
                if (self.builder.chnl_rx_dumy_num > 0):
                    fout.write('    \n    //\n    //Unused RX CHNLs\n')
                    for chnl in range(self.builder.chnl_num - self.builder.chnl_rx_dumy_num, self.builder.chnl_num):
                        self.write_rx_dumy(fout, chnl)

                #BRAMs
                fout.write('    \n    //\n    //BlockRAMs\n')
                for m in self.builder.modules:
                    for p in m.ports:
                        if (p.style == 'BRAM'):
                            print('Generating BRAM {0}'.format(m.name))
                            self.write_bram(fout, p)

                #clock, reset and scalar signals
                print('Generating Clock, Reset and GPIO connection')

                fout.write('    \n    //\n    //Clock, Reset and Scalar signals\n')
                for m in self.builder.modules:
                    for p in m.ports:
                        if (p.style not in {'AXIS', 'BRAM'}):
                            self.write_port_wires(fout, p)

                for m in self.builder.modules:
                    self.write_pfm_wires(fout,m)

                #clock, reset and gpio connection
                fout.write('    \n    //\n    //GPIO connections\n')
                for m in self.builder.modules:
                    for p in m.ports:
                        self.write_connection(fout, p)

                for m in self.builder.modules:
                    self.write_pfm_connection(fout,m)

                #performance counters
                self.write_performance_counters(fout)

                #user modules
                for m in self.builder.modules:
                    self.write_user_module(fout, m)
                    print('Generating user module {0}'.format(m.name))


                fout.write('\n')
                fout.write('//RIFFA auto generated code end\n')
                step = 'done'

            else:
                fout.write(line)
            
            i = i + 1;
        
        fin.close()
        fout.close()
    