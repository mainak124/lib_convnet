############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project hls_loopback
set_top Loopback
add_files hls_loopback/Loopback.cpp
add_files -tb hls_loopback/Loopback.h
add_files -tb hls_loopback/Loopback_test.cpp
open_solution "solution1"
set_part {xc7vx690tffg1761-2}
create_clock -period 10 -name default
#source "./hls_loopback/solution1/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -format ip_catalog
