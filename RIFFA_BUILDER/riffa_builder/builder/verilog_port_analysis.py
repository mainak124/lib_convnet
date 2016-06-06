#!/usr/bin/python
# Filename: verilog_port_analysis.py

class VerilogPort:
    def __init__(self):
        self.name = ''
        self.ins_name = ''
        self.style = ''
        self.axis_last = False
        pass
    def print(self):
        print(self.style+':'+self.name+','+str(self.width)+','+self.direction)

class VerilogModule:
    
    def __init__(self, filename, ex_prefixs):
        self.params = {}
        self.ports_native = []
        self.ports = []
        self.external_ports = []
        self.external_prefixs = ex_prefixs
        
        f = open(filename, 'r')
        
        step = 'start'
        incomments = False
        line_cnt = 0
        
        while True:
            line = f.readline()
            line_cnt = line_cnt + 1
            if (len(line) == 0): #EOF
                break
            
            line = line.expandtabs()
            line = line.strip()
            
            #jump over comments
            if (incomments):
                if (line.find('*/')):
                    strs = line.partition('*/')
                    line = strs[2]
                    incomments = False
                else:
                    line = '';
            
            if (line.find('//') >= 0):
                strs = line.partition('//')
                line = strs[0]
            
            if (line.find('/*') >= 0):
                strs = line.partition('/*')
                line = strs[0]
                incomments = True
            
            line = line.replace('`','')
            line = line.replace(',','')
            line = line.replace(';','')
            line = line.replace('\n','')
            
            
            strs = line.split()

            if (len(strs) < 2):
                continue
            
            
            #find a parameter
            if ((strs[0] == 'parameter') or (strs[0] == 'localparam')):
                if (len(strs) < 4):
                    raise RuntimeError(r'Line ' + str(line_cnt) + ' format error.')
                if (strs[2] != '='):
                    raise RuntimeError(r'Line ' + str(line_cnt) + ' format error.')
                param_name = strs[1]
                param_value = strs[3]
                self.params[param_name] = param_value;
                
            #find module name
            if (strs[0] == 'module'):
                self.name = strs[1]
            
            #find a port
            if ((strs[0] == 'input') or (strs[0] == 'output')):
                if (len(strs) < 2):
                    raise RuntimeError(r'Line ' + str(line_cnt) + ' format error.')
                
                port = VerilogPort()
                if (strs[0] == 'input'):
                    port.direction = 'in'
                else:
                    port.direction = 'out'
                
                str1 = strs[1].replace(' ','')
                
                if (str1[0] == '['):  #it's a bus
                    if (len(strs) < 2):
                        raise RuntimeError(r'Line ' + str(line_cnt) + ' format error.')
                    str1=str1.replace('[','')
                    str1=str1.replace(']','')
                    strs1 = str1.split(':')
                    msb = int(strs1[0]) #self.getvalue(strs1[0])
                    lsb = int(strs1[1]) #self.getvalue(strs1[2])
                    port.width = abs(msb - lsb) + 1
                    port.name = strs[2]
                else:
                    port.width = 1
                    port.name = str1
                
                port.New = True
                self.ports_native.append(port)        

        #search exteranl ports
        for port in self.ports_native:
            if (port.New):
                for prefix in self.external_prefixs:
                    if (prefix in port.name):
                        ex_port = VerilogPort()
                        ex_port.name = port.name
                        ex_port.style = 'Scalar'
                        ex_port.direction = port.direction
                        ex_port.width = port.width
                        self.external_ports.append(ex_port)
                        print('Find external port {0}'.format(ex_port.name))
                        port.New = False
                        break

        axis_suffixs = ('_TDATA', '_TREADY', '_TVALID', 'TLAST')
        bram_suffixs = ('_ADDR_A', '_DOUT_A', '_WEN_A', '_EN_A', '_DIN_A', '_CLK_A', '_RST_A')

        for port in self.ports_native:
            if (port.New):
                axis_name = ''
                bram_name = ''
                
                suffix = axis_suffixs[0]
                if (port.name.upper().endswith(suffix)):
                    axis_name = port.name[:-len(suffix)]
                
                suffix = bram_suffixs[0]
                if (port.name.upper().endswith(suffix)):
                    bram_name = port.name[:-len(suffix)]
                
                if (bram_name != ''):
                    bram_port_exists = [False]*len(bram_suffixs)
                    for port1 in self.ports_native:
                        if (port1.New):
                            bram_port_index = 0
                            for suffix in bram_suffixs:
                                if (port1.name.startswith(bram_name) and \
                                    port1.name.upper().endswith(suffix) and \
                                    len(port1.name) == (len(bram_name) + len(suffix))):
                                        bram_suffix = suffix
                                        break
                                bram_port_index = bram_port_index + 1
                            if (bram_port_index < len(bram_suffixs)):
                                bram_port_exists[bram_port_index] = True
                                port1.New = False
                                if (bram_suffix.upper() == '_DIN_A'):
                                    bram_in_width = port1.width
                                if (bram_suffix.upper() == '_DOUT_A'):
                                    bram_out_width = port1.width
                                if (bram_suffix.upper() == '_ADDR_A'):
                                    bram_addr_width = port1.width
                                if (bram_suffix.upper() == '_WEN_A'):
                                    bram_wena_width = port1.width
                         
                    if (bram_port_exists[0] and \
                        ((bram_port_exists[1] and bram_port_exists[2]) or \
                        bram_port_exists[4])):
                        
                        bram_port = VerilogPort()
                        bram_port.name = bram_name
                        bram_port.addr_width = bram_addr_width
                        bram_port.wena_width = bram_wena_width
                        bram_port.style = 'BRAM'
                        
                        if (bram_port_exists[1] and bram_port_exists[4]):
                            bram_port.direction = 'inout'
                        elif (bram_port_exists[1]):
                            bram_port.direction = 'out'
                        elif (bram_port_exists[4]):
                            bram_port.direction = 'in'
                        else:
                            raise RuntimeError(r'BRAM port ' + bram_name + ' direction unknown.')
                        
                        bram_port.has_en = bram_port_exists[3]
                        bram_port.has_clk = bram_port_exists[5]
                        bram_port.has_rst = bram_port_exists[6]
                        
                        if (bram_port.direction == 'inout'):
                            if (bram_in_width != bram_out_width):
                                raise RuntimeError(r'BRAM port ' + bram_name + ' got different in/out width.')
                        
                        if (bram_port.direction == 'in' or bram_port.direction == 'inout'):
                            bram_port.width = bram_in_width
                        else:
                            bram_port.width = bram_out_width
                        
                        self.ports.append(bram_port)
                        print('Find BRAM port {0}'.format(bram_name))
                    else:
                        raise RuntimeError(r'AXIS ' + axis_name + ' incomplete.')
                             
                         
    
                if (axis_name != ''):
                    #seach for a complete AXIS port group
                    axis_port_exists = [False,False,False,False]
                    for port1 in self.ports_native:
                        if (port1.New):
                            axis_port_index = 0
                            for suffix in axis_suffixs:
                                if (port1.name.startswith(axis_name) and \
                                    port1.name.upper().endswith(suffix) and \
                                    len(port1.name) == (len(axis_name) + len(suffix))):
                                    break
                                axis_port_index = axis_port_index + 1
                            if (axis_port_index < 4):
                                axis_port_exists[axis_port_index] = True
                                port1.New = False #mark the port as Old
                            if (axis_port_index == 0):
                                axis_direction = port1.direction
                                axis_width = port1.width
                    #if tdata/tready/tvalid exist
                    if (axis_port_exists[0:3] == [True, True, True]):
                        axis_port = VerilogPort()
                        axis_port.name = axis_name
                        axis_port.style = 'AXIS'
                        axis_port.direction = axis_direction
                        axis_port.axis_last = axis_port_exists[3]
                        axis_port.width = axis_width
                        self.ports.append(axis_port)
                        print('Find AXIS port {0}'.format(axis_name))
                    else:
                        raise RuntimeError(r'AXIS ' + axis_name + ' incomplete.')

        for port in self.ports_native:
            if (port.New):
                scalar_port = VerilogPort()
                scalar_port.name = port.name
                scalar_port.style = 'Scalar'
                scalar_port.direction = port.direction
                scalar_port.width = port.width
                self.ports.append(scalar_port)
                print('Find SCALAR port {0}'.format(scalar_port.name))

    
        #self.ports = sorted(self.ports, key = lambda port:port.name)
        #self.ports = sorted(self.ports, key = lambda port:port.style)
        
        for port in self.ports:
            port.comma = ','
            port.module = self

        self.ports[-1].comma = ');'

        for port in self.external_ports:
            port.comma = ','
            port.module = self

    def print(self):
        for port in self.ports:
            port.print()

#md = VerilogModule(r'HDL/MergeSort.v');

#End of verilog_port_analysis.py


