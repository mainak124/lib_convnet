############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2015 Xilinx Inc. All rights reserved.
############################################################
set_directive_pipeline "maxPoolNxN/maxPoolNxN_label1"
set_directive_pipeline "mult/mult_label4"
set_directive_pipeline "add/add_label6"
set_directive_pipeline "softmax/softmax_label7"
set_directive_array_partition -type cyclic -factor 4 -dim 2 "sm" S
set_directive_array_partition -type cyclic -factor 4 -dim 2 "sm" T
set_directive_array_partition -type cyclic -factor 4 -dim 2 "fc" S
set_directive_array_partition -type cyclic -factor 4 -dim 2 "fc" T
set_directive_array_partition -type complete -dim 0 "inference" fcIn
set_directive_array_partition -type cyclic -factor 4 -dim 2 "inference" fcOut4
set_directive_array_partition -type complete -dim 0 "inference" smOut5
set_directive_unroll -factor 4 "sigmoid/sigmoid_label8"
set_directive_pipeline "sigmoid/sigmoid_label8"
set_directive_array_partition -type cyclic -factor 4 -dim 3 "inference" convOutput3
set_directive_pipeline "conv2d/conv2d_label0"
set_directive_dataflow "inference"
set_directive_array_partition -type cyclic -factor 5 -dim 2 "inference" x_in
set_directive_array_partition -type cyclic -factor 5 -dim 1 "inference" x_in
set_directive_array_partition -type complete -dim 2 "inference" f1
set_directive_array_partition -type complete -dim 1 "inference" f1
set_directive_array_partition -type complete -dim 4 "inference" f1
set_directive_array_partition -type complete -dim 1 "inference" b1
set_directive_array_partition -type cyclic -factor 4 -dim 2 "inference" convOutput1
set_directive_array_partition -type cyclic -factor 5 -dim 2 "inference" poolOut1
set_directive_array_partition -type complete -dim 2 "inference" f2
set_directive_array_partition -type cyclic -factor 2 -dim 2 "inference" convOutput2
set_directive_array_partition -type complete -dim 0 "inference" poolOut2
set_directive_array_partition -type complete -dim 2 "inference" f3
set_directive_array_partition -type complete -dim 1 "inference" W4
set_directive_array_partition -type complete -dim 1 "inference" W5
set_directive_pipeline "inference/inference_label0"
set_directive_pipeline "inference/inference_label1"
set_directive_pipeline "inference/inference_label2"
set_directive_pipeline "inference/inference_label3"
set_directive_pipeline "inference/inference_label4"
set_directive_pipeline "inference/inference_label5"
set_directive_pipeline "inference/inference_label6"
set_directive_pipeline "inference/inference_label7"
set_directive_pipeline "inference/inference_label8"
set_directive_pipeline "inference/inference_label9"
set_directive_pipeline "inference/inference_label10"
set_directive_pipeline "inference/inference_label11"
