#!/usr/bin/python
# Filename : riffa_builder.py

print ('RIFFA Builder 0.1')

import sys
import os
import shutil
import pickle
import tkinter
import tkinter.filedialog

from verilog_port_analysis import VerilogModule
from riffa_topv_builder import RiffaTopvBuilder
from riffa_xpr_builder import RiffaXprBuilder
from riffa_host_builder import RiffaHostBuilder

class BramChannel:
    def __init__(self):
        pass

class FpgaBoard:
    def __init__(self, name):
        self.name = name
        self.fullpath = ''
        self.wrapper_file = ''
        self.templates = []

class PortAtrib:
    def __init__(self):
        pass


class RiffaBuilder:
    
    def __init__(self):
        #directory information
        root_dir = os.getcwd()
        root_dir = os.path.join(root_dir, '..')
        root_dir = os.path.join(root_dir, '..')
        root_dir = os.path.abspath(root_dir)
        self.root_dir = root_dir
        self.riffa_dir = os.path.join(self.root_dir, 'riffa')
        self.riffa_src_dir = os.path.join(self.riffa_dir, 'fpga/riffa_hdl')
        self.fpga_templates_dir = os.path.join(self.riffa_dir, 'fpga/xilinx')
        self.host_template_dir = os.path.join(self.riffa_dir, 'c_c++')
         
        #FPGA boards list
        self.boards = []
        
        #architecture information
        self.riffa_len_width = 32
        self.gpio_channel = 0
        self.modules = []
        self.main_clk = 'MAIN_CLK'
        self.main_rstn = 'MAIN_RSTN'
        self.main_rst = 'MAIN_RST'
        self.module_clks = ('ap_clk')
        self.module_rstns = ('ap_rst_n')
        self.module_rsts = ('ap_rst')
        self.module_dones = ('ap_done')
        self.module_starts = ('ap_start')
        self.module_sys_signals = ('ap_clk', 'ap_rst_n', 'ap_ready', 'ap_busy', 'ap_done', 'ap_idle', 'ap_start')
        self.external_prefixs = []
        self.top_name = 'RIFFA_TOP'
        self.clk_div = 1
        self.gpio_width = 0
        self.need_tester = True
        self.bram_share_num = 4
        self.hardware_timeout = 25000
        self.host_debug_level = 3

        self.performance_counters = True
        self.performance_counters_width = 32
        self.performance_counters_tick_div = 0

        self.overwrite_fpga_prj = True
        self.overwrite_host = True

        self.host_os = ''
    
    def find_align(self,pos_now, width, threshold, base):
        pos = pos_now
        if (width > threshold):
            if ((pos % base) > 0):
                pos = int(pos / base)*base + base
        return pos
    
    def find_bit_pos(self, pos_now, width):
        pos = pos_now
        '''pos = self.find_align(pos, width, 16, 32)
        pos = self.find_align(pos, width, 8, 16)
        pos = self.find_align(pos, width, 4, 8)
        pos = self.find_align(pos, width, 3, 4)
        
        if ((width < 32) and (int(pos/32) < int((pos+width)/32))):
            pos = int(pos / 32) + 32'''

        return pos
    
    
    def append_v_module(self, verilog_file):
        module = VerilogModule(verilog_file, self.external_prefixs)

        self.modules.append(module)
        
        #generate wire names
        module_cnt = 0
        for m in self.modules:
            module_prefix = 'm' + str(module_cnt) + '_'
            m.ins_name = module_prefix + m.name
            m.prefix = module_prefix
            module_cnt = module_cnt + 1
            for p in m.ports:
                p.wirename = module_prefix + p.name
                    
        #generate GPIO bit mapping
        gpio_bit_cnt = 0
        for m in self.modules:
            for p in m.ports:
                p.gpio_bit = 0
                # Note: module_clk should not map to gpio
                if (p.style == 'Scalar' and p.name not in self.module_clks):
                    gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, p.width)
                    p.gpio_bit = gpio_bit_cnt
                    gpio_bit_cnt = gpio_bit_cnt + p.width
                    #print('{0}:{1}:{2}:{3}'.format(p.name, p.width, p.gpio_bit, gpio_bit_cnt))
                elif (p.style == 'AXIS' and p.direction == 'out'):
                    #AXIS_S length mapping
                    gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, self.riffa_len_width)
                    p.gpio_bit = gpio_bit_cnt
                    gpio_bit_cnt = gpio_bit_cnt + self.riffa_len_width
                    #print('{0}:{1}:{2}:{3}'.format(p.name, p.width, p.gpio_bit, gpio_bit_cnt))

                if (self.performance_counters):
                    if (p.style == 'AXIS'):
                        gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, self.performance_counters_width)
                        p.gpio_bit_start_ticks = gpio_bit_cnt
                        gpio_bit_cnt = gpio_bit_cnt + self.performance_counters_width
                        gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, self.performance_counters_width)
                        p.gpio_bit_end_ticks = gpio_bit_cnt
                        gpio_bit_cnt = gpio_bit_cnt + self.performance_counters_width
                        gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, self.performance_counters_width)
                        p.gpio_bit_data_bytes = gpio_bit_cnt
                        gpio_bit_cnt = gpio_bit_cnt + self.performance_counters_width

            for m in self.modules:
                gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, self.performance_counters_width)
                m.gpio_bit_start_ticks = gpio_bit_cnt
                gpio_bit_cnt = gpio_bit_cnt + self.performance_counters_width
                gpio_bit_cnt = self.find_bit_pos(gpio_bit_cnt, self.performance_counters_width)
                m.gpio_bit_done_ticks = gpio_bit_cnt
                gpio_bit_cnt = gpio_bit_cnt + self.performance_counters_width

        self.gpio_width = gpio_bit_cnt
        
        #generate CHNL mapping
        self.axis_rx_num = 0
        self.axis_tx_num = 0
        chnl_tx_cnt = 1
        chnl_rx_cnt = 1
        if (self.need_tester):
            chnl_tx_cnt = chnl_tx_cnt + 1
            chnl_rx_cnt = chnl_rx_cnt + 1
        
        #align width
        for m in self.modules:
            for p in m.ports:
                if (p.width > 128):
                    raise RuntimeError(r'Port width is bigger than 128-bit:' + m.name + '.'+p.name)
                elif (p.width > 64):
                    p.aligned_width = 128
                    p.byte_width = 16
                    p.addr_zero = 4
                elif (p.width > 32):
                    p.aligned_width = 64
                    p.byte_width = 8
                    p.addr_zero = 3
                elif (p.width > 16):
                    p.aligned_width = 32
                    p.byte_width = 4
                    p.addr_zero = 2
                elif (p.width > 8):
                    p.aligned_width = 16
                    p.byte_width = 2
                    p.addr_zero = 1
                else:
                    p.aligned_width = 8
                    p.byte_width = 1
                    p.addr_zero = 0

        #CHNL mapping and width determination
        #BRAM
        self.bram_num = 0
        
        self.bram_chnls = []
        
        for m in self.modules:
            for p in m.ports:
                if (p.style == 'BRAM'):
                    hit = False
                    #find a existing channel to fit the barm
                    for bch in self.bram_chnls:
                        if (bch.width == p.aligned_width and bch.num < self.bram_share_num):
                            bch.ports.append(p)
                            p.bram_chnl = bch
                            p.chnl = bch.chnl
                            p.bram_index = bch.num
                            bch.num = bch.num + 1
                            if (p.addr_width > bch.addr_width):
                                bch.addr_width = p.addr_width
                            hit = True
                    
                    #get a new channel for bram
                    if (not hit):
                        bch = BramChannel()
                        bch.ports = []
                        bch.ports.append(p)
                        bch.width = p.aligned_width
                        bch.addr_width = p.addr_width
                        bch.num = 1
                        bch.chnl = chnl_tx_cnt
                        p.bram_index = bch.num-1
                        p.chnl = chnl_tx_cnt
                        p.bram_chnl = bch
                        self.bram_chnls.append(bch)
                        self.bram_num = self.bram_num + 1
                        chnl_tx_cnt = chnl_tx_cnt + 1
                        chnl_rx_cnt = chnl_rx_cnt + 1
        
        #AXIS
        for m in self.modules:
            for p in m.ports:
                if (p.style == 'AXIS'):
                    if (p.direction == 'in'):
                        p.chnl = chnl_rx_cnt
                        chnl_rx_cnt = chnl_rx_cnt + 1
                        self.axis_rx_num = self.axis_rx_num + 1
                    else:
                        p.chnl = chnl_tx_cnt
                        chnl_tx_cnt = chnl_tx_cnt + 1
                        self.axis_tx_num = self.axis_tx_num + 1

        for m in self.modules:
            for p in m.ports:
                if (p.style == 'Scalar'):
                    p.chnl = self.gpio_channel

        for m in self.modules:
            m.done_port = ''
            m.start_port = ''
            for p in m.ports:
                if (p.style == 'Scalar'):
                    if (p.name in self.module_dones):
                        p.module.done_port = p
                    if (p.name in self.module_starts):
                        p.module.start_port = p

        self.chnl_num = max(chnl_tx_cnt, chnl_rx_cnt)
        
        self.chnl_rx_dumy_num = 0
        self.chnl_tx_dumy_num = 0
        
        if(chnl_tx_cnt > chnl_rx_cnt):
            self.chnl_rx_dumy_num = chnl_tx_cnt - chnl_rx_cnt
        elif(chnl_tx_cnt < chnl_rx_cnt):
            self.chnl_tx_dumy_num = chnl_rx_cnt - chnl_tx_cnt
        
        #set the C data type as unknow
        for m in self.modules:
            for p in m.ports:
                if (p.name not in self.module_sys_signals):
                    p.c_type = 'unknow'
                else:
                    p.c_type = 'system'

    def init_fpga_templates(self):
        self.boards = []
        flist = os.listdir(self.fpga_templates_dir)
        for d in flist:
            if (d[0] != '.' and os.path.isdir(self.fpga_templates_dir+'/'+d)):
                board = FpgaBoard(d)
                board.fullpath = self.fpga_templates_dir + '/' + d
                plist = os.listdir(board.fullpath)
                for p in plist:
                    if (p[0] == '.'):
                        continue
                    elif (os.path.isdir(board.fullpath + '/'+ p)):
                        board.templates.append(p)
                    elif (p.startswith('riffa_wrapper') and p.endswith('.v')):
                        board.wrapper_file = p;
                self.boards.append(board)
    
    def show_menu(self, menu_items, return_str):
        if (len(menu_items) == 1):
            if (return_str):
                return menu_items[0]
            else:
                return 0
        else:
            for i in range(0,len(menu_items)):
                print('    {0}:{1}'.format(i+1, menu_items[i]))
            n = input('Please select (1-{0}, default 1):'.format(len(menu_items)))
            if (n <= '0' or n > str(len(menu_items))):
                n = '0'
            n = int(n)

            if (return_str):
                return menu_items[0]
            else:
                return n-1

    def user_setup_ports(self, atrb_strs):

        #prepare the port attributes table
        atrbs = []
        for str in atrb_strs:
            atrb = PortAtrib()
            atrb.debug = False
            strs = str.split(' ')
            cnt = 0
            if (len(strs) >= 3):
                atrb.module = strs[0]
                atrb.port = strs[1]
                atrb.c_type = strs[2]
                cnt = 3
                if (strs[2] == 'unsigned'):
                    atrb.c_type = atrb.c_type + ' ' + strs[3]
                    cnt = cnt + 1

                atrb.length = 1
                if (len(strs) > cnt):
                    if (strs[cnt].isdigit()):
                        atrb.length = int(strs[cnt])
                        cnt = cnt + 1

                if (len(strs) > cnt):
                    if (strs[cnt].upper() == 'DEBUG'):
                        atrb.debug = True;
                atrbs.append(atrb)

                #print('{0} {1}\n'.format(atrb.module, atrb.port))

        #find existing ports
        for m in self.modules:
            for p in m.ports:
                p.length = 0
                p.debug = False
                for atrb in atrbs:
                    if (m.name == atrb.module and p.name == atrb.port):
                        p.c_type = atrb.c_type
                        p.length = atrb.length
                        p.debug = atrb.debug

        m_number = len(self.modules)
        for m in self.modules:
            newtype = False
            for p in m.ports:
                #set C type
                if (p.c_type == 'unknow'):
                    if (p.aligned_width == 8):
                        c_types = ('char', 'unsigend char')
                    elif (p.aligned_width == 16):
                        c_types = ('short', 'unsigend short')
                    elif (p.aligned_width == 32):
                        c_types = ('int', 'unsigend int', 'float')
                    elif (p.aligned_width == 64):
                        c_types = ('__int64', 'unsigned __int64', 'double')
                    elif (p.aligned_width == 128):
                        c_types = ('__int128', 'unsigned __int128')
                    else:
                        raise RuntimeError('Port width err')
                    
                    print ('The {0}-bits port {1}.{2} need a C data type:'.format(p.width, m.name, p.name))
                    p.c_type = self.show_menu(c_types, True)
                        
                    newtype = True
                    
                #set data length
                if (p.style == 'AXIS'):
                    if (p.length == 0):
                        n = input ('How many {0} data will transfer on the AXIS port {1}.{2}? :'.format(p.c_type, m.name, p.name))
                        p.length = int(n)

                    #align the 32-bit words number
                    p.words = int((p.length*p.aligned_width) / 32)
                    if ((p.length*p.aligned_width) % 32 > 0):
                        p.words = p.words + 1
                
                elif (p.style == 'BRAM'):
                    if (p.length == 0):
                        n = input ('How many {0} data reside in the BRAM {1}.{2}? :'.format(p.c_type, m.name, p.name))
                        p.length = int(n)
                    if (p.length > 1):
                        p.addr_width = int.bit_length(p.length - 1)
                    else:
                        p.addr_width = 1

                    #align the 32-bit words number
                    p.words = int((p.length*p.aligned_width) / 32)
                    if ((p.length*p.aligned_width) % 32 > 0):
                        p.words = p.words + 1
                else:
                    p.words = 1
                    p.addr_width = 1

                if (m_number > 1):
                    p.c_variable = p.wirename
                else:
                    p.c_variable = p.name
                    
                #p.time_out
                p.timeout = self.hardware_timeout
                    
            
            #copy C type to some type modules
            if (newtype):
                for m2 in self.modules:
                    if (m2.name == m.name and m != m2):
                        for i in range(0, len(m.ports)):
                            m2.ports[i].c_type = m.ports[i].c_type
                            m2.ports[i].length = m.ports[i].length
    
    def check_file_exists(self, path):
        if (os.path.exists(path)):
            n = input('The file/directory "{0}" already exists. Overwrite (Y/N, default No)?:'.format(path))
            return (n.lower().startswith('y'))
        else:
            return False

    def user_wizard(self):
        
        print ('Initial...')

        #Output directory
        if (not os.path.exists(self.output_dir)):
            print ('Please specify output directory...')
            self.output_dir = tkinter.filedialog.askdirectory()
            if (not os.path.exists(self.output_dir)):
                return 'Directory does not exist. User cancel...'

        print ('Output directory: {0}.\n'.format(self.output_dir))

        if (self.prj_start == ''):
            print ('Which one would you like to start from? :')
            n = self.show_menu( \
                ('Start from a verilog module','Start from a HLS C function', 'Exit'), \
                False)
            if (n == 0):
                self.prj_start = 'Verilog'
            elif (n == 1):
                self.prj_start = 'HLS_C'
            elif (n == 2):
                return 'User cancel...'

        if (self.prj_start == 'Verilog'): #start from verilog module


            if (not os.path.exists(self.verilog_src_file)):
                print ('Please specify the Verilog module source file in the dialog...')
                self.verilog_src_file = tkinter.filedialog.askopenfilename(filetypes=[('Verilog','*.v')])
            print ('User Verilog source file: {0}.\n'.format(self.verilog_src_file))
            self.append_v_module(self.verilog_src_file)
            
            #find all verilog files
            verilog_dir = os.path.dirname(self.verilog_src_file)
            verilog_file = os.path.basename(self.verilog_src_file)
            strs = verilog_file.rpartition('.')
            file_head = strs[0]
            self.verilog_files = []
            
            flist = os.listdir(verilog_dir)
            for f in flist:
                if (f.startswith(file_head) and f.lower().endswith('.v')):
                    self.verilog_files.append(verilog_dir + '/' + f)
                    print ('Source file: {0}.\n'.format(verilog_dir + '/' + f))

            
        elif (self.prj_start == 'HLS_C'): #start from HLS C
            self.prj_start = 'HLS_C'
            print ('Please specify the HLS C source file in the dialog...')
            self.hls_c_src_file = tkinter.filedialog.askopenfilename(filetypes=[('C','*.c'),('C++','*.cpp')])
            self.append_hls_c_module()
        #else: #Load project
        
        #print the module analysis report
        
        #Project Name
        #self.project_name = input ('Please give the project a name (default is {0}):'.format(self.project_name))
        
        #FPGA project
        '''
        n = input ('Do you want to create a FPGA top-level project? (Y/N, default Yes):')
        if (n.lower().startswith('y') or n == ''):
            self.create_fpga = True
        else:
            self.create_fpga = False
        '''

        #FPGA type and project template
        if (self.create_fpga):
            self.init_fpga_templates()

            board = ''
            for bd in self.boards:
                if (bd.name.upper() == self.fpga_board_name.upper()):
                    board = bd

            if (board == ''):
                menu = []
                for bd in self.boards:
                    menu.append(bd.name)
                print ('Please select the FPGA board type')
                n = self.show_menu(menu, False)
                board = self.boards[n]

            print('FPGA board type: {0}'.format(board.name))

            template = ''

            for tp in board.templates:
                if (self.fpga_template_name.upper() == tp.upper()):
                    template = tp
            if (template == ''):
                print ('Please select the FPGA Code Template')
                template = self.show_menu(board.templates, True)

            print('FPGA template project: {0}'.format(template))

            #if want a tester port...
            
            
            self.fpga_template_dir = board.fullpath + '/' + template
            #self.fpga_template_topv = template.replace('_', '')
            self.fpga_template_topv = template
            self.fpga_template_prj = template
            self.fpga_wrapper_dir = board.fullpath
            self.fpga_wrapper_file = board.wrapper_file
            

            self.fpga_prj_dir = self.output_dir + '/FPGA_PRJ'

            #self.overwrite_fpga_prj = self.check_file_exists(self.fpga_prj_dir)
        
        #Host program
        '''
        n = input ('Do you want to create a host C program? (Y/N, default Yes):')
        if (n.lower().startswith('y') or n == ''):
            self.create_host = True
        else:
            self.create_host = False
        '''
        
        #Host program template
        if (self.create_host):
            if (self.host_os == ''):
                print ('What O/S you will running the host program?')
                self.host_os = self.show_menu(('linux','windows'), True)
            if (self.host_platform == ''):
                print ('What platform you will running the host program?')
                self.host_platform = self.show_menu(('x86','x64'), True)

            '''
            print ('Select the host program generation source')
            print ('    0: Common generation template.')
            print ('    1: My HLS C testbench source file.(Not Yet)')
            n = input ('    Please select (0/1, default 0):')
            if (n == '0' or n == ''):
                self.host_template_type = 'Common'
            elif (n == '1'):
                self.host_template_type = 'Testbench'
            '''
        
            if (self.host_template_type == 'Teshbench'):
                print ('Please select your HLS C testbench file');
                self.host_template_file = tkinter.filedialog.askopenfilename(filetypes=[('C','*.c'),('C++','*.cpp')])
            else:
                self.host_template_file = ''
            
            self.user_setup_ports(self.port_atrbs)
    
            self.host_prj_dir = self.output_dir + '/HOST_PRJ'
            #self.overwrite_host = self.check_file_exists(self.host_prj_dir)

        return 'OK'

    
    def make_prj_dir(self, prj_dir, overwrite):
        if (os.path.exists(prj_dir)):
            if (overwrite):
                shutil.rmtree(prj_dir, ignore_errors = True)    
                print ('The directory "{0}" was overwirted'.format(prj_dir))
            else:
                old_cnt = 1
                while (os.path.exists(prj_dir + '_old_' + str(old_cnt))):
                    old_cnt = old_cnt + 1
                new_dir = prj_dir + '_old_' + str(old_cnt)
                shutil.copytree(prj_dir, new_dir)
                print ('The old directory "{0}" was move to {1}'.format(prj_dir, new_dir))
                shutil.rmtree(prj_dir, ignore_errors = True)
        
        
    def build_fpga_project(self):
        if (self.create_fpga):
            if (self.copy_fpga_template):
                #copy the template project
                self.make_prj_dir(self.fpga_prj_dir, self.overwrite_fpga_prj)
                shutil.copytree(self.fpga_template_dir, self.fpga_prj_dir)
                print('Copy {0} to {1}'.format(self.fpga_template_dir, self.fpga_prj_dir))

                #copy the riffa hld source files
                shutil.copytree(self.riffa_src_dir, self.fpga_prj_dir + '/hdl/riffa_hdl')
                print('Copy {0} to {1}'.format(self.riffa_src_dir, self.fpga_prj_dir + '/hdl/riffa_hdl'))

                #copy wrapper file
                shutil.copy(self.fpga_wrapper_dir + '/'+ self.fpga_wrapper_file,  self.fpga_prj_dir + '/hdl')
                print('Copy {0} to {1}'.format(self.fpga_wrapper_dir + '/'+ self.fpga_wrapper_file,  self.fpga_prj_dir + '/hdl'))


                #copy riffa glue files
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/riffa_axis_m.v', self.fpga_prj_dir + '/hdl')
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/riffa_axis_s.v', self.fpga_prj_dir + '/hdl')
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/riffa_gpio.v', self.fpga_prj_dir + '/hdl')
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/riffa_bram.v', self.fpga_prj_dir + '/hdl')
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/riffa_bram_core.v', self.fpga_prj_dir + '/hdl')
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/axis_tester.v', self.fpga_prj_dir + '/hdl')
                shutil.copy(self.root_dir + '/riffa_builder/src/fpga/pfm_counter.v', self.fpga_prj_dir + '/hdl')

                print ('Successful copy the fpga source files\n')
            
            #build verilog top file
            old_top_file = self.fpga_template_dir + '/hdl/' + self.fpga_template_topv + '.v'
            new_top_file = self.fpga_prj_dir + '/hdl/' + self.fpga_template_topv + '.v'
            
            tpb = RiffaTopvBuilder(self)
            tpb.build_top_v(old_top_file, new_top_file)
            
            print ('Successful generate the fpga top-level file: "{0}"\n'.format(self.fpga_template_topv))
            
            #build xpr file
            old_xpr_file = self.fpga_template_dir + '/prj/' + self.fpga_template_prj + '.xpr'
            new_xpr_file = self.fpga_prj_dir + '/prj/' + self.fpga_template_prj + '.xpr'
            pbj = RiffaXprBuilder(self)
            pbj.build_xpr(old_xpr_file, new_xpr_file)
            
            print ('Successful generate the Vivado project: "{0}.xpr"\n'.format(self.fpga_template_prj))
            
    
    def build_host_project(self):
        if (self.create_host):
            if (self.copy_host_template):
                #copy to host template
                self.make_prj_dir(self.host_prj_dir, self.overwrite_host)
                shutil.copytree(self.host_template_dir +'/'+self.host_os+'/'+self.host_platform, self.host_prj_dir)
                shutil.copy(self.root_dir+'/riffa_builder/src/c/timer.h', self.host_prj_dir)
                shutil.copy(self.root_dir+'/riffa_builder/src/c/riffa_alite.c', self.host_prj_dir)
                shutil.copy(self.root_dir+'/riffa_builder/src/c/riffa_alite.h', self.host_prj_dir)
                shutil.copy(self.root_dir+'/riffa_builder/src/c/riffa_run_win.c', self.host_prj_dir)
                shutil.copy(self.root_dir+'/riffa_builder/src/c/riffa_run.h', self.host_prj_dir)

                print ('Successful copy the host source files\n')
            
            hb = RiffaHostBuilder(self)
            c_function_name = self.modules[0].name
            hb.build_c_function(self.host_prj_dir, c_function_name)
            
            print ('Successful generate the user function: "{0}.c/.h"\n'.format(c_function_name))
            
            hb.build_c_main(self.host_prj_dir, 'main')
            hb.build_c_reset(self.host_prj_dir)
            
            print ('Successful generate the main function: "main.c"\n')
            
            hb.build_compile_cmd(self.host_prj_dir, 'compile')
            
            print ('Successful generate the compile batch file: "compile.bat"\n')
                    
'''
bld = RiffaBuilder()

#User options
bld.output_dir = 'C:/VSPrj/RIFFA_BUILDER/user/W1'
bld.verilog_src_file = 'C:/VSPrj/RIFFA_BUILDER/user/HLS/HLS_TEST/solution1/impl/verilog/func.v'
bld.prj_start = 'Verilog'
bld.create_fpga = False
bld.create_host = True
bld.host_os = 'windows'
bld.host_platform = 'x86'
bld.host_template_type = 'Common'
bld.fpga_board_name = 'VC709'
bld.fpga_template_name = 'VC709_Gen3x4If128'
bld.copy_fpga_template = True
bld.copy_host_template = True
bld.overwrite_fpga_prj = True
bld.overwrite_host = True
bld.port_atrbs = [ \
    'func data1 int 1000 debug', \
    'func data2 int 1000 debug',\
    'func data3 int 1000 debug',\
    'func data4 int 1000 debug']
bld.clk_div = 2
bld.hardware_timeout = 10000
bld.host_debug_level = 3
'''

'''
print ('Welcome to RIFFA Builder')
print ('Please select to operation:')
print ('    1: Open a wizard')
print ('    2: Load a existing configuration')
n = input ('input 1 or 2, default 1:')
'''

'''
n = 1
if (n == '2'):
    fname = tkinter.filedialog.askopenfilename() #(filetypes=[('RBD','*.rbd')])
    if (fname != ''):
        f = open(fname, 'rb')
        bld = pickle.load(f)
    else:
        print ('User cancel...Quit')
        sys.exit()
else:
    if ('cancel' in bld.user_wizard()):
        print('Quit')
        sys.exit()

    '''

'''
    n = input ('Setup finished, whould like to save it to a disk file? (Y/N, default Yes):')
    if (n.lower().startswith('y') or n == ''):
        fname = tkinter.filedialog.asksaveasfilename(filetypes=[('RBD','*.rbd')])
        if (fname != ''):
            f = open(fname, 'wb')
            pickle.dump(bld, f)
            '''

'''
bld.build_fpga_project()
bld.build_host_project()


'''
