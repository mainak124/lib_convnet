#!/usr/bin/python
# Filename : riffa_xpr_builder.py

import os

class RiffaXprBuilder:
    
    def __init__(self, Builder):
        self.builder = Builder
                
    def write_src_file(self, f, src_file):
        f.write('      <File Path="{0}">\n'.format(src_file))
        f.write('        <FileInfo>\n')
        f.write('          <Attr Name="UsedIn" Val="synthesis"/>\n')
        f.write('          <Attr Name="UsedIn" Val="implementation"/>\n')
        f.write('          <Attr Name="UsedIn" Val="simulation"/>\n')
        f.write('        </FileInfo>\n')
        f.write('      </File>\n')
        
 
    def build_xpr(self, src_xpr_file, dst_xpr_file):
        fin = open(src_xpr_file, 'r')
        fout = open(dst_xpr_file, 'w')
        
        src_lines = fin.readlines()
 
        i = 0
        main_path = False

        first = True
        
        while (i < len(src_lines)):
            line = src_lines[i]
            
            if (not line.startswith('<!') and not line.startswith('<?')):
                #<Project Version="7" Minor="2" Path="/home/drichmond/Research/repositories/git/RIFFA-devel/riffa_2.2.0/source/fpga/xilinx/vc709/VC709_Gen3x4If128/prj/VC709_Gen3x4If128.xpr">
                if (not main_path and 'Path=' in line and self.builder.fpga_template_prj in line):
                    strs = line.split(r'Path="')
                    line = strs[0] + 'Path="' + self.builder.fpga_template_dir + '/prj/' + self.builder.fpga_template_prj + '.xpr">\n'
                    main_path = True
                    fout.write(line)
                #<File Path="$PPRDIR/../../../../riffa_hdl/rx_engine_ultrascale.v">
                elif ('File Path=' in line and 'riffa_hdl' in line):
                    line = line.replace('../../../..', '../hdl')
                    fout.write(line)
                #<Filter Type="Srcs"/>
                elif ('<Filter Type="Srcs"/>' in line):
                    fout.write(line)

                    if (first):

                        first = False
                    
                        #write riffa builder files
                        self.write_src_file(fout, '$PPRDIR/../hdl/riffa_axis_m.v')
                        self.write_src_file(fout, '$PPRDIR/../hdl/riffa_axis_s.v')
                        self.write_src_file(fout, '$PPRDIR/../hdl/riffa_gpio.v')
                        self.write_src_file(fout, '$PPRDIR/../hdl/riffa_bram.v')
                        self.write_src_file(fout, '$PPRDIR/../hdl/riffa_bram_core.v')
                        self.write_src_file(fout, '$PPRDIR/../hdl/axis_tester.v')
                        self.write_src_file(fout, '$PPRDIR/../hdl/pfm_counter.v')

                        #write user verilog source files
                        for f in self.builder.verilog_files:
                            self.write_src_file(fout, f)
                        
                #<File Path="$PPRDIR/../../riffa_wrapper_vc709.v">
                elif('File Path=' in line and self.builder.fpga_wrapper_file.lower() in line.lower()):
                    self.write_src_file(fout, '$PPRDIR/../hdl/' + self.builder.fpga_wrapper_file)
                    i = i + 6
                else:
                    fout.write(line)
                
            else:
                fout.write(line)
                
            i = i + 1

        fin.close()
        fout.close()
    