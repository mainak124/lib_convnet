############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
open_project cnn
set_top inference
add_files convnet_finproj/lib_convnet/convnet_cpp/cnn.h
add_files convnet_finproj/lib_convnet/convnet_cpp/conv.h
add_files convnet_finproj/lib_convnet/convnet_cpp/fc_module.h
add_files convnet_finproj/lib_convnet/convnet_cpp/inference.cpp
add_files convnet_finproj/lib_convnet/convnet_cpp/matrixTemplate.h
add_files convnet_finproj/lib_convnet/convnet_cpp/myutils.cpp
add_files convnet_finproj/lib_convnet/convnet_cpp/myutils.h
add_files convnet_finproj/lib_convnet/convnet_cpp/sm_module.h
add_files convnet_finproj/lib_convnet/convnet_cpp/weights.h
add_files -tb convnet_finproj/lib_convnet/convnet_cpp/conv_test.cpp
open_solution "solution1"
set_part {xc7vx690tffg1761-2}
create_clock -period 10 -name default
source "convnet_finproj/lib_convnet/convnet_cpp/directives.tcl"
csim_design -clean
csynth_design
#cosim_design
export_design -format ip_catalog
