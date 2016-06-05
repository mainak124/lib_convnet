#!/usr/bin/python
# Filename : riffa_host_builder.py

import os

class RiffaHostBuilder:
    
    def __init__(self, Builder):
        self.builder = Builder
        
    def write_func_declaration(self, f):
        f.write('double {0}(fpga_t* fpga'.format(self.name))
        for m in self.builder.modules:
            for p in m.ports:
                if (p.c_type != 'system'):
                   if (p.style == 'Scalar' and p.direction == 'in'):
                       f.write(', {0} {1}'.format(p.c_type, p.c_variable))
                   else:
                       f.write(', {0}* {1}'.format(p.c_type, p.c_variable))
        f.write(', int debug_level)')

    def write_port_init_0(self, f, port, port_var):
        f.write('    ptr = &{0};\n'.format(port_var))
        f.write('    sprintf(ptr->port_name, "%s", "{0}");\n'.format(port.wirename))
        if (port.style == 'Scalar' and port.name != 'ap_clk'):
            f.write('    ptr->style = PORT_SCALAR;\n')
            f.write('    ptr->bit_pos = {0};\n'.format(port.gpio_bit))
        elif (port.style == 'AXIS'):
            f.write('    ptr->style = PORT_AXIS;\n')
            f.write('    ptr->bit_pos = {0};\n'.format(port.gpio_bit))
        elif (port.style == 'BRAM'):
            f.write('    ptr->style = PORT_BRAM;\n')
            f.write('    ptr->bram_index = {0};\n'.format(port.bram_index))
        
        if (port.c_type == 'system'):
            if (port.name == 'ap_start'):
                f.write('    ptr->direction = DIR_AP_START;\n')
            elif (port.name == 'ap_ready'):
                f.write('    ptr->direction = DIR_AP_READY;\n')
            elif (port.name == 'ap_done'):
                f.write('    ptr->direction = DIR_AP_DONE;\n')
            elif (port.name == 'ap_rst_n' or port.name == 'ap_rst'):
                f.write('    ptr->direction = DIR_AP_RST;\n')
            elif (port.name == 'ap_idle'):
                f.write('    ptr->direction = DIR_AP_IDLE;\n')
            else:
                f.write('    ptr->direction = DIR_AP_UNKNOW;\n')

        elif (port.direction == 'in'):
            f.write('    ptr->direction = DIR_IN;\n')
        elif (port.direction == 'out'):
            f.write('    ptr->direction = DIR_OUT;\n')
        else:
            f.write('    ptr->direction = DIR_IN | DIR_OUT;\n')
        
        f.write('    ptr->channel = {0};\n'.format(port.chnl))
        f.write('    ptr->width = {0};\n'.format(port.width))
        f.write('    ptr->c_width = {0};\n'.format(port.aligned_width))
        f.write('    ptr->words = {0};\n'.format(port.words))
        f.write('    ptr->addr = {0};\n'.format(0))
        f.write('    ptr->last = 1;\n')
        f.write('    ptr->off = 0;\n')
        f.write('    ptr->timeout = {0};\n'.format(port.timeout))
        f.write('    ptr->fpga = fpga;\n\n')

    def write_port_init(self, f, port, cnt):
        self.write_port_init_0(f, port, 'ports[{0}]'.format(cnt))

    def write_pfm_init_rest(self, f):
        f.write('    ptr->style = PORT_PFM_COUNTER;\n')
        f.write('    ptr->direction = DIR_OUT;\n')
        f.write('    ptr->channel = {0};\n'.format(self.builder.gpio_channel))
        f.write('    ptr->width = {0};\n'.format(self.builder.performance_counters_width))
        f.write('    ptr->c_width = {0};\n'.format(self.builder.performance_counters_width))
        f.write('    ptr->words = {0};\n'.format(1))
        f.write('    ptr->addr = {0};\n'.format(0))
        f.write('    ptr->last = 1;\n')
        f.write('    ptr->off = 0;\n')
        f.write('    ptr->timeout = {0};\n'.format(self.builder.hardware_timeout))
        f.write('    ptr->fpga = fpga;\n\n')

    def write_module_pfm_init(self, f, m, cnt):
        f.write('    ptr = &ports[{0}];\n'.format(cnt))
        f.write('    sprintf(ptr->port_name, "%s", "Module {0} start");\n'.format(m.ins_name))
        f.write('    ptr->bit_pos = {0};\n'.format(m.gpio_bit_start_ticks))
        self.write_pfm_init_rest(f)

        f.write('    ptr = &ports[{0}];\n'.format(cnt+1))
        f.write('    sprintf(ptr->port_name, "%s", "Module {0} done");\n'.format(m.ins_name))
        f.write('    ptr->bit_pos = {0};\n'.format(m.gpio_bit_done_ticks))
        self.write_pfm_init_rest(f)

    def write_axis_pfm_init(self, f, p, cnt):
        f.write('    ptr = &ports[{0}];\n'.format(cnt))
        f.write('    sprintf(ptr->port_name, "%s", "AXIS {0} start at");\n'.format(p.wirename))
        f.write('    ptr->bit_pos = {0};\n'.format(p.gpio_bit_start_ticks))
        self.write_pfm_init_rest(f)

        f.write('    ptr = &ports[{0}];\n'.format(cnt+1))
        f.write('    sprintf(ptr->port_name, "%s", "AXIS {0} end at");\n'.format(p.wirename))
        f.write('    ptr->bit_pos = {0};\n'.format(p.gpio_bit_end_ticks))
        self.write_pfm_init_rest(f)

        f.write('    ptr = &ports[{0}];\n'.format(cnt+2))
        f.write('    sprintf(ptr->port_name, "%s", "AXIS {0} transferred bytes");\n'.format(p.wirename))
        f.write('    ptr->bit_pos = {0};\n'.format(p.gpio_bit_data_bytes))
        self.write_pfm_init_rest(f)
        f.write('    ptr->style = PORT_DATA_COUNTER;\n')


    def write_port_data(self, f, port, cnt):
        if (port.style == 'Scalar'):
            if (port.direction == 'in'):
                f.write('    ptr = &ports[{0}];\n'.format(cnt))
                f.write('    ptr->data = *(__int64*)(&{0});\n'.format(port.c_variable))
        else:
            f.write('    ptr = &ports[{0}];\n'.format(cnt))
            f.write('    ptr->buffer = (void *)({0});\n'.format(port.c_variable))
            f.write('    ptr->dma_running = 0;\n\n')

    def write_read_data(self, f, port, cnt):
        if (port.style == 'Scalar' and port.direction == 'out'):
            f.write('    ptr = &ports[{0}];\n'.format(cnt))
            f.write('    *{0} = ptr->data;\n\n'.format(port.c_variable))

    def build_c_function(self, directroy, name):
        fc = open(directroy + '/' + name + '.c', 'w')
        self.name = name
        
        fc.write('/*******************************************************************************\n')
        fc.write(' *\n')
        fc.write(' * Filename: {0}.c\n'.format(name))
        fc.write(' * Version: 0.1 \n')
        fc.write(' * Description: RIFFA Builder User function\n')
        fc.write(' * Author: Auto Generated \n')
        fc.write(' * History:\n')
        fc.write(' *\n')
        fc.write(' */\n')
        fc.write('\n')
        
        fc.write('#include "riffa_run.h"\n\n')
        
        port_num = 0
        
        #how many ports
        for m in self.builder.modules:
            for p in m.ports:
                if (p.c_type == 'unknow'):
                    return 'The port {0}.{1} has no C type yet'.format(m.name, p.name)
                if (self.builder.performance_counters and p.style == 'AXIS'):
                    port_num = port_num + 3
                #if (p.c_type != 'system'):
                port_num = port_num + 1
            if (self.builder.performance_counters):
                port_num = port_num + 2
        fc.write('#define FPGA_PORT_NUM {0}\n'.format(port_num))
        fc.write('#define PCIE_USERCLK_FREQ_MHZ {0}\n'.format(self.builder.riffa_clk_freq_mhz))
        fc.write('#define MAINCLK_DIV {0}\n'.format(self.builder.clk_div))
        fc.write('#define PFM_TICK_DIV {0}\n\n'.format(pow(2, self.builder.performance_counters_tick_div)))

        #declare user function
        self.write_func_declaration(fc)
        fc.write(' {\n')
        fc.write('    int i;\n'.format(port_num))
        fc.write('    double run_time_ms;\n'.format(port_num))
        fc.write('    FPGA_PORT ports[FPGA_PORT_NUM];\n')
        fc.write('    FPGA_PORT* ptr;\n\n'.format(port_num))
        
        port_cnt = 0;
        for m in self.builder.modules:
            for p in m.ports:
                self.write_port_init(fc, p, port_cnt)
                port_cnt = port_cnt + 1

        if (self.builder.performance_counters):
            for m in self.builder.modules:
                self.write_module_pfm_init(fc, m, port_cnt)
                port_cnt = port_cnt + 2
                for p in m.ports:
                    if (p.style == 'AXIS'):
                        self.write_axis_pfm_init(fc,p,port_cnt)
                        port_cnt = port_cnt + 3

        port_cnt = 0;
        for m in self.builder.modules:
            for p in m.ports:
                if (p.c_type != 'system'):
                    self.write_port_data(fc, p, port_cnt)
                port_cnt = port_cnt + 1
        
        fc.write('    run_time_ms = riffa_run(ports, FPGA_PORT_NUM, debug_level);\n\n')

        port_cnt = 0;
        for m in self.builder.modules:
            for p in m.ports:
                if (p.c_type != 'system'):
                    self.write_read_data(fc, p, port_cnt)
                port_cnt = port_cnt + 1

        if (self.builder.performance_counters):
            fc.write('    riffa_performance(ports, FPGA_PORT_NUM, debug_level);\n\n')
            fc.write('    printf("Performance report. (time calculated by RIFFA user_clk = {0} MHz)\\n");\n'.format(self.builder.riffa_clk_freq_mhz))
            fc.write('    for (i = 0; i < FPGA_PORT_NUM; i ++) {\n')
            fc.write('        ptr = &ports[i];\n')
            fc.write('        if (ptr->style == PORT_PFM_COUNTER) {\n')
            fc.write('            printf("  %s: %d (%f us)\\n", ptr->port_name, ptr->data, ptr->data*MAINCLK_DIV*PFM_TICK_DIV*1.0/PCIE_USERCLK_FREQ_MHZ);\n')
            fc.write('        }\n')
            fc.write('        else if (ptr->style == PORT_DATA_COUNTER) {\n')
            fc.write('            printf("  %s: %d\\n", ptr->port_name, ptr->data);\n')
            fc.write('        }\n')
            fc.write('    }\n')

        fc.write('    return run_time_ms;\n')
        fc.write('}\n\n')

        fc.close()
        
        #build the header file
        
        fc = open(directroy + '/' + name + '.h', 'w')
        
        fc.write('/*******************************************************************************\n')
        fc.write(' *\n')
        fc.write(' * Filename: {0}.h\n'.format(name))
        fc.write(' * Version: 0.1 \n')
        fc.write(' * Description: RIFFA Builder User function\n')
        fc.write(' * Author: Auto Generated \n')
        fc.write(' * History:\n')
        fc.write(' *\n')
        fc.write(' */\n')
        fc.write('\n')
        fc.write('#ifndef __{0}_H__\n'.format(name.upper()))
        fc.write('#define __{0}_H__\n\n'.format(name.upper()))

        fc.write('#include "riffa.h"\n')
        fc.write('#include "riffa_alite.h"\n')
        fc.write('#include "riffa_run.h"\n\n')

        fc.write('#ifdef __cplusplus\n')
        fc.write('extern "C" {\n')
        fc.write('#endif\n\n')

        #declare user function
        self.write_func_declaration(fc)

        fc.write(';\n\n')

        fc.write('#ifdef __cplusplus\n')
        fc.write('}\n')
        fc.write('#endif\n\n')

        fc.write('#endif\n')
        
        fc.close()

    def write_main_variable(self, f, p):
        if (p.c_type != 'system'):
            if (p.style == 'Scalar'):
                f.write('    {0} {1};\n'.format(p.c_type, p.c_variable))
            else:
                f.write('    {0}* {1};\n'.format(p.c_type, p.c_variable))
    
    def write_main_malloc(self, f, p):
        if (p.style != 'Scalar'):
            f.write('    {0} = ({1} *)malloc({2}*4);\n'.format(p.c_variable, p.c_type, p.words))
            f.write('    if ({0} == NULL) {{\n'.format(p.c_variable, p.c_type, ))
            f.write('        printf("Can not alloc memory for the variable \'{0}\' for {1} bytes");\n'.format(p.c_variable, p.words * 4))
            f.write('        return -1;\n')
            f.write('    }\n\n')
    
    def write_main_init_scaler(self, f, p):
        if (p.style == 'Scalar' and 'in' in p.direction and p.c_type != 'system'):
            f.write('    {0} = 0;  //Only for example\n\n'.format(p.c_variable))

    def write_main_init_array(self, f, p):
        if (p.style != 'Scalar' and 'in' in p.direction):
            f.write('    for (i = 0; i < {0}; i ++) {{\n'.format(p.length))
            f.write('        {0}[i] = i;  //Only for example\n'.format(p.c_variable))
            f.write('    }\n\n')

    def get_format_string(self, ctype):
        if (ctype in ('float', 'double')):
            return '%f'
        elif ('unsigned' in ctype):
            return '%u'
        else:
            return '%d'

    def write_main_show_scalar(self, f, p):
        if (p.style == 'Scalar' and 'out' in p.direction and p.c_type != 'system'):
            f.write('    printf("{0} = {1} (0x%x)\\n",{0}, {0});\n'.format(p.c_variable, self.get_format_string(p.c_type)))

    def write_main_show_array(self, f, p):
        show_len = p.length;
        if (show_len > 10):
            show_len = 10
        if (p.style != 'Scalar' and 'out' in p.direction):
            f.write('    for (i = 0; i < {0}; i ++) {{\n'.format(show_len))
            f.write('        printf("{0}[%d] = {1} (0x%x)\\n",i, {0}[i], {0}[i]);\n'.format(p.c_variable, self.get_format_string(p.c_type)))
            f.write('    }\n\n')

    def build_c_reset(self, directroy):
        name = 'rst_fpga'
        fc = open(directroy + '/' + name + '.c', 'w')
        
        fc.write('/*******************************************************************************\n')
        fc.write(' *\n')
        fc.write(' * Filename: {0}.c\n'.format(name))
        fc.write(' * Version: 0.1 \n')
        fc.write(' * Description: Reset the RIFFA FPGA\n')
        fc.write(' * Author: Auto Generated \n')
        fc.write(' * History:\n')
        fc.write(' *\n')
        fc.write(' */\n')
        fc.write('\n')
        
        fc.write('#include <stdlib.h>\n')
        fc.write('#include <stdio.h>\n')
        fc.write('#include <windows.h>\n')
        fc.write('#include "riffa.h"\n')

        fc.write('int main(int argc, char** argv) {\n')
        fc.write('    int id = 0;\n')
        fc.write('    fpga_t* fpga; \n\n')
        fc.write('    fpga = fpga_open(id);\n\n')
        fc.write('    if (fpga == NULL) {\n')
        fc.write('        printf("Could not get FPGA %d\\n", id);\n')
        fc.write('        return -1;\n')
        fc.write('    }\n\n')
        fc.write('    fpga_reset(fpga);\n\n')
        fc.write('    fpga_close(fpga);\n\n')
        fc.write('    return 0;\n')
        fc.write('}\n')
        
        fc.close()
        
    def build_c_main(self, directroy, name):
        self.main_name = name
        fc = open(directroy + '/' + name + '.c', 'w')
        
        fc.write('/*******************************************************************************\n')
        fc.write(' *\n')
        fc.write(' * Filename: {0}.c\n'.format(name))
        fc.write(' * Version: 0.1 \n')
        fc.write(' * Description: RIFFA Builder Main Program\n')
        fc.write(' * Author: Auto Generated \n')
        fc.write(' * History:\n')
        fc.write(' *\n')
        fc.write(' */\n')
        fc.write('\n')
        
        fc.write('#include <stdlib.h>\n')
        fc.write('#include <stdio.h>\n')
        fc.write('#include <windows.h>\n')
        fc.write('#include "timer.h"\n')
        fc.write('#include "{0}.h"\n\n'.format(self.name))

        fc.write('#define DEBUG_LEVEL {0} //0 = no debug printing"\n\n'.format(self.builder.host_debug_level))

        fc.write('int main(int argc, char** argv) {\n')
        fc.write('    int i = 0;\n')
        fc.write('    int id = 0;\n')
        fc.write('    double run_time_ms;\n')
        fc.write('    fpga_t* fpga; \n\n')
        fc.write('    GET_TIME_INIT(5);\n')
        fc.write('    //User variables \n')
        
        print('Generating variables...')
        for m in self.builder.modules:
            for p in m.ports:
                self.write_main_variable(fc, p)

        
        fc.write('\n    //Malloc user buffers\n\n')
        
        print('Generating memory allocation...')
        for m in self.builder.modules:
            for p in m.ports:
                self.write_main_malloc(fc, p)         

        print('Generating variables initialization...')
        fc.write('    //TODO: Initial the input variables and arrays\n')
        for m in self.builder.modules:
            for p in m.ports:
                self.write_main_init_scaler(fc, p)
                
        for m in self.builder.modules:
            for p in m.ports:
                self.write_main_init_array(fc, p)
        
        fc.write('    fpga = fpga_open(id);\n\n')
        fc.write('    if (fpga == NULL) {\n')
        fc.write('        printf("Could not get FPGA %d\\n", id);\n')
        fc.write('        return -1;\n')
        fc.write('    }\n\n')
        fc.write('    fpga_reset(fpga);\n\n')
        fc.write('    Sleep(200);\n\n')
        fc.write('    //Call the user function \n')

        fc.write('    GET_TIME_VAL(0);\n')
        fc.write('    run_time_ms = {0}(fpga'.format(self.name))
        for m in self.builder.modules:
            for p in m.ports:
                if (p.c_type != 'system'):
                   if (p.style == 'Scalar' and p.direction == 'out'):
                       fc.write(', &{0}'.format(p.c_variable))
                   else:
                       fc.write(', {0}'.format(p.c_variable))
        fc.write(', DEBUG_LEVEL);\n\n')
        fc.write('    GET_TIME_VAL(1);\n')
        fc.write('    printf("The FPGA module running costed %f ms\\n", run_time_ms);\n')
        fc.write('    printf("Total function calling costed %f ms\\n", TIME_VAL_TO_MS(1) - TIME_VAL_TO_MS(0));\n\n')
        fc.write('    //Done with device \n')
        fc.write('    fpga_close(fpga);\n\n')
        fc.write('    //TODO: Process the output data\n\n')

        for m in self.builder.modules:
            for p in m.ports:
                self.write_main_show_scalar(fc, p)

        for m in self.builder.modules:
            for p in m.ports:
                self.write_main_show_array(fc, p)

        fc.write('    return 0;\n')
        fc.write('}\n')
        
        fc.close()

    def build_compile_cmd(self, directroy, name):
        self.compile_name = name
        fc = open(directroy + '/' + name + '.bat', 'w')
        print('Generating gcc compiling batch file...')
        fc.write('gcc.exe -o main.exe main.c {0}.c riffa_run_win.c riffa_alite.c -L. -lriffa\n'.format(self.name))
        fc.write('gcc.exe -o rst_fpga.exe rst_fpga.c -L. -lriffa\n'.format(self.name))
        fc.write('pause\n')
        fc.close()
        fc = open(directroy + '/opencmd.bat', 'w')
        fc.write('cmd\n')
        fc.close()

