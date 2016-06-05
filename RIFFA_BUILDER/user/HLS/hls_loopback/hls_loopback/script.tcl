open_project hls
set_top Loopback
add_files Loopback.cpp
add_files Loopback.h
add_files -tb Loopback_test.cpp
open_solution "solution1"
set_part {xc7vx690tffg1761-2}
create_clock -period 8 -name default
#csim_design -clean
csynth_design
#cosim_design -tool xsim -rtl verilog
