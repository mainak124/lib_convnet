#include "inference.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference::thread_poolOut2_2_7_i_write() {
    poolOut2_2_7_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_7.read();
}

void inference::thread_poolOut2_2_7_t_address0() {
    poolOut2_2_7_t_address0 = inference_conv2d_U0_x_2_7_address0.read();
}

void inference::thread_poolOut2_2_7_t_address1() {
    poolOut2_2_7_t_address1 = inference_conv2d_U0_x_2_7_address1.read();
}

void inference::thread_poolOut2_2_7_t_ce0() {
    poolOut2_2_7_t_ce0 = inference_conv2d_U0_x_2_7_ce0.read();
}

void inference::thread_poolOut2_2_7_t_ce1() {
    poolOut2_2_7_t_ce1 = inference_conv2d_U0_x_2_7_ce1.read();
}

void inference::thread_poolOut2_2_7_t_d0() {
    poolOut2_2_7_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_7_t_d1() {
    poolOut2_2_7_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_7_t_read() {
    poolOut2_2_7_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_7_t_we0() {
    poolOut2_2_7_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_7_t_we1() {
    poolOut2_2_7_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_8_U_ap_dummy_ce() {
    poolOut2_2_8_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_8_i_address0() {
    poolOut2_2_8_i_address0 = inference_maxPoolNxN_U0_out_feature_2_8_address0.read();
}

void inference::thread_poolOut2_2_8_i_address1() {
    poolOut2_2_8_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_8_i_ce0() {
    poolOut2_2_8_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_8_ce0.read();
}

void inference::thread_poolOut2_2_8_i_ce1() {
    poolOut2_2_8_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_8_i_d0() {
    poolOut2_2_8_i_d0 = inference_maxPoolNxN_U0_out_feature_2_8_d0.read();
}

void inference::thread_poolOut2_2_8_i_we0() {
    poolOut2_2_8_i_we0 = inference_maxPoolNxN_U0_out_feature_2_8_we0.read();
}

void inference::thread_poolOut2_2_8_i_write() {
    poolOut2_2_8_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_8.read();
}

void inference::thread_poolOut2_2_8_t_address0() {
    poolOut2_2_8_t_address0 = inference_conv2d_U0_x_2_8_address0.read();
}

void inference::thread_poolOut2_2_8_t_address1() {
    poolOut2_2_8_t_address1 = inference_conv2d_U0_x_2_8_address1.read();
}

void inference::thread_poolOut2_2_8_t_ce0() {
    poolOut2_2_8_t_ce0 = inference_conv2d_U0_x_2_8_ce0.read();
}

void inference::thread_poolOut2_2_8_t_ce1() {
    poolOut2_2_8_t_ce1 = inference_conv2d_U0_x_2_8_ce1.read();
}

void inference::thread_poolOut2_2_8_t_d0() {
    poolOut2_2_8_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_8_t_d1() {
    poolOut2_2_8_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_8_t_read() {
    poolOut2_2_8_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_8_t_we0() {
    poolOut2_2_8_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_8_t_we1() {
    poolOut2_2_8_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_9_U_ap_dummy_ce() {
    poolOut2_2_9_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_9_i_address0() {
    poolOut2_2_9_i_address0 = inference_maxPoolNxN_U0_out_feature_2_9_address0.read();
}

void inference::thread_poolOut2_2_9_i_address1() {
    poolOut2_2_9_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_9_i_ce0() {
    poolOut2_2_9_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_9_ce0.read();
}

void inference::thread_poolOut2_2_9_i_ce1() {
    poolOut2_2_9_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_9_i_d0() {
    poolOut2_2_9_i_d0 = inference_maxPoolNxN_U0_out_feature_2_9_d0.read();
}

void inference::thread_poolOut2_2_9_i_we0() {
    poolOut2_2_9_i_we0 = inference_maxPoolNxN_U0_out_feature_2_9_we0.read();
}

void inference::thread_poolOut2_2_9_i_write() {
    poolOut2_2_9_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_9.read();
}

void inference::thread_poolOut2_2_9_t_address0() {
    poolOut2_2_9_t_address0 = inference_conv2d_U0_x_2_9_address0.read();
}

void inference::thread_poolOut2_2_9_t_address1() {
    poolOut2_2_9_t_address1 = inference_conv2d_U0_x_2_9_address1.read();
}

void inference::thread_poolOut2_2_9_t_ce0() {
    poolOut2_2_9_t_ce0 = inference_conv2d_U0_x_2_9_ce0.read();
}

void inference::thread_poolOut2_2_9_t_ce1() {
    poolOut2_2_9_t_ce1 = inference_conv2d_U0_x_2_9_ce1.read();
}

void inference::thread_poolOut2_2_9_t_d0() {
    poolOut2_2_9_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_9_t_d1() {
    poolOut2_2_9_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_9_t_read() {
    poolOut2_2_9_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_9_t_we0() {
    poolOut2_2_9_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_9_t_we1() {
    poolOut2_2_9_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_0_U_ap_dummy_ce() {
    poolOut2_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_0_i_address0() {
    poolOut2_3_0_i_address0 = inference_maxPoolNxN_U0_out_feature_3_0_address0.read();
}

void inference::thread_poolOut2_3_0_i_address1() {
    poolOut2_3_0_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_0_i_ce0() {
    poolOut2_3_0_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_0_ce0.read();
}

void inference::thread_poolOut2_3_0_i_ce1() {
    poolOut2_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_0_i_d0() {
    poolOut2_3_0_i_d0 = inference_maxPoolNxN_U0_out_feature_3_0_d0.read();
}

void inference::thread_poolOut2_3_0_i_we0() {
    poolOut2_3_0_i_we0 = inference_maxPoolNxN_U0_out_feature_3_0_we0.read();
}

void inference::thread_poolOut2_3_0_i_write() {
    poolOut2_3_0_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_0.read();
}

void inference::thread_poolOut2_3_0_t_address0() {
    poolOut2_3_0_t_address0 = inference_conv2d_U0_x_3_0_address0.read();
}

void inference::thread_poolOut2_3_0_t_address1() {
    poolOut2_3_0_t_address1 = inference_conv2d_U0_x_3_0_address1.read();
}

void inference::thread_poolOut2_3_0_t_ce0() {
    poolOut2_3_0_t_ce0 = inference_conv2d_U0_x_3_0_ce0.read();
}

void inference::thread_poolOut2_3_0_t_ce1() {
    poolOut2_3_0_t_ce1 = inference_conv2d_U0_x_3_0_ce1.read();
}

void inference::thread_poolOut2_3_0_t_d0() {
    poolOut2_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_0_t_d1() {
    poolOut2_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_0_t_read() {
    poolOut2_3_0_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_0_t_we0() {
    poolOut2_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_0_t_we1() {
    poolOut2_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_10_U_ap_dummy_ce() {
    poolOut2_3_10_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_10_i_address0() {
    poolOut2_3_10_i_address0 = inference_maxPoolNxN_U0_out_feature_3_10_address0.read();
}

void inference::thread_poolOut2_3_10_i_address1() {
    poolOut2_3_10_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_10_i_ce0() {
    poolOut2_3_10_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_10_ce0.read();
}

void inference::thread_poolOut2_3_10_i_ce1() {
    poolOut2_3_10_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_10_i_d0() {
    poolOut2_3_10_i_d0 = inference_maxPoolNxN_U0_out_feature_3_10_d0.read();
}

void inference::thread_poolOut2_3_10_i_we0() {
    poolOut2_3_10_i_we0 = inference_maxPoolNxN_U0_out_feature_3_10_we0.read();
}

void inference::thread_poolOut2_3_10_i_write() {
    poolOut2_3_10_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_10.read();
}

void inference::thread_poolOut2_3_10_t_address0() {
    poolOut2_3_10_t_address0 = inference_conv2d_U0_x_3_10_address0.read();
}

void inference::thread_poolOut2_3_10_t_address1() {
    poolOut2_3_10_t_address1 = inference_conv2d_U0_x_3_10_address1.read();
}

void inference::thread_poolOut2_3_10_t_ce0() {
    poolOut2_3_10_t_ce0 = inference_conv2d_U0_x_3_10_ce0.read();
}

void inference::thread_poolOut2_3_10_t_ce1() {
    poolOut2_3_10_t_ce1 = inference_conv2d_U0_x_3_10_ce1.read();
}

void inference::thread_poolOut2_3_10_t_d0() {
    poolOut2_3_10_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_10_t_d1() {
    poolOut2_3_10_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_10_t_read() {
    poolOut2_3_10_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_10_t_we0() {
    poolOut2_3_10_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_10_t_we1() {
    poolOut2_3_10_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_11_U_ap_dummy_ce() {
    poolOut2_3_11_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_11_i_address0() {
    poolOut2_3_11_i_address0 = inference_maxPoolNxN_U0_out_feature_3_11_address0.read();
}

void inference::thread_poolOut2_3_11_i_address1() {
    poolOut2_3_11_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_11_i_ce0() {
    poolOut2_3_11_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_11_ce0.read();
}

void inference::thread_poolOut2_3_11_i_ce1() {
    poolOut2_3_11_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_11_i_d0() {
    poolOut2_3_11_i_d0 = inference_maxPoolNxN_U0_out_feature_3_11_d0.read();
}

void inference::thread_poolOut2_3_11_i_we0() {
    poolOut2_3_11_i_we0 = inference_maxPoolNxN_U0_out_feature_3_11_we0.read();
}

void inference::thread_poolOut2_3_11_i_write() {
    poolOut2_3_11_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_11.read();
}

void inference::thread_poolOut2_3_11_t_address0() {
    poolOut2_3_11_t_address0 = inference_conv2d_U0_x_3_11_address0.read();
}

void inference::thread_poolOut2_3_11_t_address1() {
    poolOut2_3_11_t_address1 = inference_conv2d_U0_x_3_11_address1.read();
}

void inference::thread_poolOut2_3_11_t_ce0() {
    poolOut2_3_11_t_ce0 = inference_conv2d_U0_x_3_11_ce0.read();
}

void inference::thread_poolOut2_3_11_t_ce1() {
    poolOut2_3_11_t_ce1 = inference_conv2d_U0_x_3_11_ce1.read();
}

void inference::thread_poolOut2_3_11_t_d0() {
    poolOut2_3_11_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_11_t_d1() {
    poolOut2_3_11_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_11_t_read() {
    poolOut2_3_11_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_11_t_we0() {
    poolOut2_3_11_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_11_t_we1() {
    poolOut2_3_11_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_12_U_ap_dummy_ce() {
    poolOut2_3_12_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_12_i_address0() {
    poolOut2_3_12_i_address0 = inference_maxPoolNxN_U0_out_feature_3_12_address0.read();
}

void inference::thread_poolOut2_3_12_i_address1() {
    poolOut2_3_12_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_12_i_ce0() {
    poolOut2_3_12_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_12_ce0.read();
}

void inference::thread_poolOut2_3_12_i_ce1() {
    poolOut2_3_12_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_12_i_d0() {
    poolOut2_3_12_i_d0 = inference_maxPoolNxN_U0_out_feature_3_12_d0.read();
}

void inference::thread_poolOut2_3_12_i_we0() {
    poolOut2_3_12_i_we0 = inference_maxPoolNxN_U0_out_feature_3_12_we0.read();
}

void inference::thread_poolOut2_3_12_i_write() {
    poolOut2_3_12_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_12.read();
}

void inference::thread_poolOut2_3_12_t_address0() {
    poolOut2_3_12_t_address0 = inference_conv2d_U0_x_3_12_address0.read();
}

void inference::thread_poolOut2_3_12_t_address1() {
    poolOut2_3_12_t_address1 = inference_conv2d_U0_x_3_12_address1.read();
}

void inference::thread_poolOut2_3_12_t_ce0() {
    poolOut2_3_12_t_ce0 = inference_conv2d_U0_x_3_12_ce0.read();
}

void inference::thread_poolOut2_3_12_t_ce1() {
    poolOut2_3_12_t_ce1 = inference_conv2d_U0_x_3_12_ce1.read();
}

void inference::thread_poolOut2_3_12_t_d0() {
    poolOut2_3_12_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_12_t_d1() {
    poolOut2_3_12_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_12_t_read() {
    poolOut2_3_12_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_12_t_we0() {
    poolOut2_3_12_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_12_t_we1() {
    poolOut2_3_12_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_13_U_ap_dummy_ce() {
    poolOut2_3_13_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_13_i_address0() {
    poolOut2_3_13_i_address0 = inference_maxPoolNxN_U0_out_feature_3_13_address0.read();
}

void inference::thread_poolOut2_3_13_i_address1() {
    poolOut2_3_13_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_13_i_ce0() {
    poolOut2_3_13_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_13_ce0.read();
}

void inference::thread_poolOut2_3_13_i_ce1() {
    poolOut2_3_13_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_13_i_d0() {
    poolOut2_3_13_i_d0 = inference_maxPoolNxN_U0_out_feature_3_13_d0.read();
}

void inference::thread_poolOut2_3_13_i_we0() {
    poolOut2_3_13_i_we0 = inference_maxPoolNxN_U0_out_feature_3_13_we0.read();
}

void inference::thread_poolOut2_3_13_i_write() {
    poolOut2_3_13_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_13.read();
}

void inference::thread_poolOut2_3_13_t_address0() {
    poolOut2_3_13_t_address0 = inference_conv2d_U0_x_3_13_address0.read();
}

void inference::thread_poolOut2_3_13_t_address1() {
    poolOut2_3_13_t_address1 = inference_conv2d_U0_x_3_13_address1.read();
}

void inference::thread_poolOut2_3_13_t_ce0() {
    poolOut2_3_13_t_ce0 = inference_conv2d_U0_x_3_13_ce0.read();
}

void inference::thread_poolOut2_3_13_t_ce1() {
    poolOut2_3_13_t_ce1 = inference_conv2d_U0_x_3_13_ce1.read();
}

void inference::thread_poolOut2_3_13_t_d0() {
    poolOut2_3_13_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_13_t_d1() {
    poolOut2_3_13_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_13_t_read() {
    poolOut2_3_13_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_13_t_we0() {
    poolOut2_3_13_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_13_t_we1() {
    poolOut2_3_13_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_14_U_ap_dummy_ce() {
    poolOut2_3_14_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_14_i_address0() {
    poolOut2_3_14_i_address0 = inference_maxPoolNxN_U0_out_feature_3_14_address0.read();
}

void inference::thread_poolOut2_3_14_i_address1() {
    poolOut2_3_14_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_14_i_ce0() {
    poolOut2_3_14_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_14_ce0.read();
}

void inference::thread_poolOut2_3_14_i_ce1() {
    poolOut2_3_14_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_14_i_d0() {
    poolOut2_3_14_i_d0 = inference_maxPoolNxN_U0_out_feature_3_14_d0.read();
}

void inference::thread_poolOut2_3_14_i_we0() {
    poolOut2_3_14_i_we0 = inference_maxPoolNxN_U0_out_feature_3_14_we0.read();
}

void inference::thread_poolOut2_3_14_i_write() {
    poolOut2_3_14_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_14.read();
}

void inference::thread_poolOut2_3_14_t_address0() {
    poolOut2_3_14_t_address0 = inference_conv2d_U0_x_3_14_address0.read();
}

void inference::thread_poolOut2_3_14_t_address1() {
    poolOut2_3_14_t_address1 = inference_conv2d_U0_x_3_14_address1.read();
}

void inference::thread_poolOut2_3_14_t_ce0() {
    poolOut2_3_14_t_ce0 = inference_conv2d_U0_x_3_14_ce0.read();
}

void inference::thread_poolOut2_3_14_t_ce1() {
    poolOut2_3_14_t_ce1 = inference_conv2d_U0_x_3_14_ce1.read();
}

void inference::thread_poolOut2_3_14_t_d0() {
    poolOut2_3_14_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_14_t_d1() {
    poolOut2_3_14_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_14_t_read() {
    poolOut2_3_14_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_14_t_we0() {
    poolOut2_3_14_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_14_t_we1() {
    poolOut2_3_14_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_15_U_ap_dummy_ce() {
    poolOut2_3_15_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_15_i_address0() {
    poolOut2_3_15_i_address0 = inference_maxPoolNxN_U0_out_feature_3_15_address0.read();
}

void inference::thread_poolOut2_3_15_i_address1() {
    poolOut2_3_15_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_15_i_ce0() {
    poolOut2_3_15_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_15_ce0.read();
}

void inference::thread_poolOut2_3_15_i_ce1() {
    poolOut2_3_15_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_15_i_d0() {
    poolOut2_3_15_i_d0 = inference_maxPoolNxN_U0_out_feature_3_15_d0.read();
}

void inference::thread_poolOut2_3_15_i_we0() {
    poolOut2_3_15_i_we0 = inference_maxPoolNxN_U0_out_feature_3_15_we0.read();
}

void inference::thread_poolOut2_3_15_i_write() {
    poolOut2_3_15_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_15.read();
}

void inference::thread_poolOut2_3_15_t_address0() {
    poolOut2_3_15_t_address0 = inference_conv2d_U0_x_3_15_address0.read();
}

void inference::thread_poolOut2_3_15_t_address1() {
    poolOut2_3_15_t_address1 = inference_conv2d_U0_x_3_15_address1.read();
}

void inference::thread_poolOut2_3_15_t_ce0() {
    poolOut2_3_15_t_ce0 = inference_conv2d_U0_x_3_15_ce0.read();
}

void inference::thread_poolOut2_3_15_t_ce1() {
    poolOut2_3_15_t_ce1 = inference_conv2d_U0_x_3_15_ce1.read();
}

void inference::thread_poolOut2_3_15_t_d0() {
    poolOut2_3_15_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_15_t_d1() {
    poolOut2_3_15_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_15_t_read() {
    poolOut2_3_15_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_15_t_we0() {
    poolOut2_3_15_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_15_t_we1() {
    poolOut2_3_15_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_1_U_ap_dummy_ce() {
    poolOut2_3_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_1_i_address0() {
    poolOut2_3_1_i_address0 = inference_maxPoolNxN_U0_out_feature_3_1_address0.read();
}

void inference::thread_poolOut2_3_1_i_address1() {
    poolOut2_3_1_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_1_i_ce0() {
    poolOut2_3_1_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_1_ce0.read();
}

void inference::thread_poolOut2_3_1_i_ce1() {
    poolOut2_3_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_1_i_d0() {
    poolOut2_3_1_i_d0 = inference_maxPoolNxN_U0_out_feature_3_1_d0.read();
}

void inference::thread_poolOut2_3_1_i_we0() {
    poolOut2_3_1_i_we0 = inference_maxPoolNxN_U0_out_feature_3_1_we0.read();
}

void inference::thread_poolOut2_3_1_i_write() {
    poolOut2_3_1_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_1.read();
}

void inference::thread_poolOut2_3_1_t_address0() {
    poolOut2_3_1_t_address0 = inference_conv2d_U0_x_3_1_address0.read();
}

void inference::thread_poolOut2_3_1_t_address1() {
    poolOut2_3_1_t_address1 = inference_conv2d_U0_x_3_1_address1.read();
}

void inference::thread_poolOut2_3_1_t_ce0() {
    poolOut2_3_1_t_ce0 = inference_conv2d_U0_x_3_1_ce0.read();
}

void inference::thread_poolOut2_3_1_t_ce1() {
    poolOut2_3_1_t_ce1 = inference_conv2d_U0_x_3_1_ce1.read();
}

void inference::thread_poolOut2_3_1_t_d0() {
    poolOut2_3_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_1_t_d1() {
    poolOut2_3_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_1_t_read() {
    poolOut2_3_1_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_1_t_we0() {
    poolOut2_3_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_1_t_we1() {
    poolOut2_3_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_2_U_ap_dummy_ce() {
    poolOut2_3_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_2_i_address0() {
    poolOut2_3_2_i_address0 = inference_maxPoolNxN_U0_out_feature_3_2_address0.read();
}

void inference::thread_poolOut2_3_2_i_address1() {
    poolOut2_3_2_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_2_i_ce0() {
    poolOut2_3_2_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_2_ce0.read();
}

void inference::thread_poolOut2_3_2_i_ce1() {
    poolOut2_3_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_2_i_d0() {
    poolOut2_3_2_i_d0 = inference_maxPoolNxN_U0_out_feature_3_2_d0.read();
}

void inference::thread_poolOut2_3_2_i_we0() {
    poolOut2_3_2_i_we0 = inference_maxPoolNxN_U0_out_feature_3_2_we0.read();
}

void inference::thread_poolOut2_3_2_i_write() {
    poolOut2_3_2_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_2.read();
}

void inference::thread_poolOut2_3_2_t_address0() {
    poolOut2_3_2_t_address0 = inference_conv2d_U0_x_3_2_address0.read();
}

void inference::thread_poolOut2_3_2_t_address1() {
    poolOut2_3_2_t_address1 = inference_conv2d_U0_x_3_2_address1.read();
}

void inference::thread_poolOut2_3_2_t_ce0() {
    poolOut2_3_2_t_ce0 = inference_conv2d_U0_x_3_2_ce0.read();
}

void inference::thread_poolOut2_3_2_t_ce1() {
    poolOut2_3_2_t_ce1 = inference_conv2d_U0_x_3_2_ce1.read();
}

void inference::thread_poolOut2_3_2_t_d0() {
    poolOut2_3_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_2_t_d1() {
    poolOut2_3_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_2_t_read() {
    poolOut2_3_2_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_2_t_we0() {
    poolOut2_3_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_2_t_we1() {
    poolOut2_3_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_3_U_ap_dummy_ce() {
    poolOut2_3_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_3_i_address0() {
    poolOut2_3_3_i_address0 = inference_maxPoolNxN_U0_out_feature_3_3_address0.read();
}

void inference::thread_poolOut2_3_3_i_address1() {
    poolOut2_3_3_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_3_i_ce0() {
    poolOut2_3_3_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_3_ce0.read();
}

void inference::thread_poolOut2_3_3_i_ce1() {
    poolOut2_3_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_3_i_d0() {
    poolOut2_3_3_i_d0 = inference_maxPoolNxN_U0_out_feature_3_3_d0.read();
}

void inference::thread_poolOut2_3_3_i_we0() {
    poolOut2_3_3_i_we0 = inference_maxPoolNxN_U0_out_feature_3_3_we0.read();
}

void inference::thread_poolOut2_3_3_i_write() {
    poolOut2_3_3_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_3.read();
}

void inference::thread_poolOut2_3_3_t_address0() {
    poolOut2_3_3_t_address0 = inference_conv2d_U0_x_3_3_address0.read();
}

void inference::thread_poolOut2_3_3_t_address1() {
    poolOut2_3_3_t_address1 = inference_conv2d_U0_x_3_3_address1.read();
}

void inference::thread_poolOut2_3_3_t_ce0() {
    poolOut2_3_3_t_ce0 = inference_conv2d_U0_x_3_3_ce0.read();
}

void inference::thread_poolOut2_3_3_t_ce1() {
    poolOut2_3_3_t_ce1 = inference_conv2d_U0_x_3_3_ce1.read();
}

void inference::thread_poolOut2_3_3_t_d0() {
    poolOut2_3_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_3_t_d1() {
    poolOut2_3_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_3_t_read() {
    poolOut2_3_3_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_3_t_we0() {
    poolOut2_3_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_3_t_we1() {
    poolOut2_3_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_4_U_ap_dummy_ce() {
    poolOut2_3_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_4_i_address0() {
    poolOut2_3_4_i_address0 = inference_maxPoolNxN_U0_out_feature_3_4_address0.read();
}

void inference::thread_poolOut2_3_4_i_address1() {
    poolOut2_3_4_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_4_i_ce0() {
    poolOut2_3_4_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_4_ce0.read();
}

void inference::thread_poolOut2_3_4_i_ce1() {
    poolOut2_3_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_4_i_d0() {
    poolOut2_3_4_i_d0 = inference_maxPoolNxN_U0_out_feature_3_4_d0.read();
}

void inference::thread_poolOut2_3_4_i_we0() {
    poolOut2_3_4_i_we0 = inference_maxPoolNxN_U0_out_feature_3_4_we0.read();
}

void inference::thread_poolOut2_3_4_i_write() {
    poolOut2_3_4_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_4.read();
}

void inference::thread_poolOut2_3_4_t_address0() {
    poolOut2_3_4_t_address0 = inference_conv2d_U0_x_3_4_address0.read();
}

void inference::thread_poolOut2_3_4_t_address1() {
    poolOut2_3_4_t_address1 = inference_conv2d_U0_x_3_4_address1.read();
}

void inference::thread_poolOut2_3_4_t_ce0() {
    poolOut2_3_4_t_ce0 = inference_conv2d_U0_x_3_4_ce0.read();
}

void inference::thread_poolOut2_3_4_t_ce1() {
    poolOut2_3_4_t_ce1 = inference_conv2d_U0_x_3_4_ce1.read();
}

void inference::thread_poolOut2_3_4_t_d0() {
    poolOut2_3_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_4_t_d1() {
    poolOut2_3_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_4_t_read() {
    poolOut2_3_4_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_4_t_we0() {
    poolOut2_3_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_4_t_we1() {
    poolOut2_3_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_5_U_ap_dummy_ce() {
    poolOut2_3_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_5_i_address0() {
    poolOut2_3_5_i_address0 = inference_maxPoolNxN_U0_out_feature_3_5_address0.read();
}

void inference::thread_poolOut2_3_5_i_address1() {
    poolOut2_3_5_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_5_i_ce0() {
    poolOut2_3_5_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_5_ce0.read();
}

void inference::thread_poolOut2_3_5_i_ce1() {
    poolOut2_3_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_5_i_d0() {
    poolOut2_3_5_i_d0 = inference_maxPoolNxN_U0_out_feature_3_5_d0.read();
}

void inference::thread_poolOut2_3_5_i_we0() {
    poolOut2_3_5_i_we0 = inference_maxPoolNxN_U0_out_feature_3_5_we0.read();
}

void inference::thread_poolOut2_3_5_i_write() {
    poolOut2_3_5_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_5.read();
}

void inference::thread_poolOut2_3_5_t_address0() {
    poolOut2_3_5_t_address0 = inference_conv2d_U0_x_3_5_address0.read();
}

void inference::thread_poolOut2_3_5_t_address1() {
    poolOut2_3_5_t_address1 = inference_conv2d_U0_x_3_5_address1.read();
}

void inference::thread_poolOut2_3_5_t_ce0() {
    poolOut2_3_5_t_ce0 = inference_conv2d_U0_x_3_5_ce0.read();
}

void inference::thread_poolOut2_3_5_t_ce1() {
    poolOut2_3_5_t_ce1 = inference_conv2d_U0_x_3_5_ce1.read();
}

void inference::thread_poolOut2_3_5_t_d0() {
    poolOut2_3_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_5_t_d1() {
    poolOut2_3_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_5_t_read() {
    poolOut2_3_5_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_5_t_we0() {
    poolOut2_3_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_5_t_we1() {
    poolOut2_3_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_6_U_ap_dummy_ce() {
    poolOut2_3_6_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_6_i_address0() {
    poolOut2_3_6_i_address0 = inference_maxPoolNxN_U0_out_feature_3_6_address0.read();
}

void inference::thread_poolOut2_3_6_i_address1() {
    poolOut2_3_6_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_6_i_ce0() {
    poolOut2_3_6_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_6_ce0.read();
}

void inference::thread_poolOut2_3_6_i_ce1() {
    poolOut2_3_6_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_6_i_d0() {
    poolOut2_3_6_i_d0 = inference_maxPoolNxN_U0_out_feature_3_6_d0.read();
}

void inference::thread_poolOut2_3_6_i_we0() {
    poolOut2_3_6_i_we0 = inference_maxPoolNxN_U0_out_feature_3_6_we0.read();
}

void inference::thread_poolOut2_3_6_i_write() {
    poolOut2_3_6_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_6.read();
}

void inference::thread_poolOut2_3_6_t_address0() {
    poolOut2_3_6_t_address0 = inference_conv2d_U0_x_3_6_address0.read();
}

void inference::thread_poolOut2_3_6_t_address1() {
    poolOut2_3_6_t_address1 = inference_conv2d_U0_x_3_6_address1.read();
}

void inference::thread_poolOut2_3_6_t_ce0() {
    poolOut2_3_6_t_ce0 = inference_conv2d_U0_x_3_6_ce0.read();
}

void inference::thread_poolOut2_3_6_t_ce1() {
    poolOut2_3_6_t_ce1 = inference_conv2d_U0_x_3_6_ce1.read();
}

void inference::thread_poolOut2_3_6_t_d0() {
    poolOut2_3_6_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_6_t_d1() {
    poolOut2_3_6_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_6_t_read() {
    poolOut2_3_6_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_6_t_we0() {
    poolOut2_3_6_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_6_t_we1() {
    poolOut2_3_6_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_7_U_ap_dummy_ce() {
    poolOut2_3_7_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_7_i_address0() {
    poolOut2_3_7_i_address0 = inference_maxPoolNxN_U0_out_feature_3_7_address0.read();
}

void inference::thread_poolOut2_3_7_i_address1() {
    poolOut2_3_7_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_7_i_ce0() {
    poolOut2_3_7_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_7_ce0.read();
}

void inference::thread_poolOut2_3_7_i_ce1() {
    poolOut2_3_7_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_7_i_d0() {
    poolOut2_3_7_i_d0 = inference_maxPoolNxN_U0_out_feature_3_7_d0.read();
}

void inference::thread_poolOut2_3_7_i_we0() {
    poolOut2_3_7_i_we0 = inference_maxPoolNxN_U0_out_feature_3_7_we0.read();
}

void inference::thread_poolOut2_3_7_i_write() {
    poolOut2_3_7_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_7.read();
}

void inference::thread_poolOut2_3_7_t_address0() {
    poolOut2_3_7_t_address0 = inference_conv2d_U0_x_3_7_address0.read();
}

void inference::thread_poolOut2_3_7_t_address1() {
    poolOut2_3_7_t_address1 = inference_conv2d_U0_x_3_7_address1.read();
}

void inference::thread_poolOut2_3_7_t_ce0() {
    poolOut2_3_7_t_ce0 = inference_conv2d_U0_x_3_7_ce0.read();
}

void inference::thread_poolOut2_3_7_t_ce1() {
    poolOut2_3_7_t_ce1 = inference_conv2d_U0_x_3_7_ce1.read();
}

void inference::thread_poolOut2_3_7_t_d0() {
    poolOut2_3_7_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_7_t_d1() {
    poolOut2_3_7_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_7_t_read() {
    poolOut2_3_7_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_7_t_we0() {
    poolOut2_3_7_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_7_t_we1() {
    poolOut2_3_7_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_8_U_ap_dummy_ce() {
    poolOut2_3_8_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_8_i_address0() {
    poolOut2_3_8_i_address0 = inference_maxPoolNxN_U0_out_feature_3_8_address0.read();
}

void inference::thread_poolOut2_3_8_i_address1() {
    poolOut2_3_8_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_8_i_ce0() {
    poolOut2_3_8_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_8_ce0.read();
}

void inference::thread_poolOut2_3_8_i_ce1() {
    poolOut2_3_8_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_8_i_d0() {
    poolOut2_3_8_i_d0 = inference_maxPoolNxN_U0_out_feature_3_8_d0.read();
}

void inference::thread_poolOut2_3_8_i_we0() {
    poolOut2_3_8_i_we0 = inference_maxPoolNxN_U0_out_feature_3_8_we0.read();
}

void inference::thread_poolOut2_3_8_i_write() {
    poolOut2_3_8_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_8.read();
}

void inference::thread_poolOut2_3_8_t_address0() {
    poolOut2_3_8_t_address0 = inference_conv2d_U0_x_3_8_address0.read();
}

void inference::thread_poolOut2_3_8_t_address1() {
    poolOut2_3_8_t_address1 = inference_conv2d_U0_x_3_8_address1.read();
}

void inference::thread_poolOut2_3_8_t_ce0() {
    poolOut2_3_8_t_ce0 = inference_conv2d_U0_x_3_8_ce0.read();
}

void inference::thread_poolOut2_3_8_t_ce1() {
    poolOut2_3_8_t_ce1 = inference_conv2d_U0_x_3_8_ce1.read();
}

void inference::thread_poolOut2_3_8_t_d0() {
    poolOut2_3_8_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_8_t_d1() {
    poolOut2_3_8_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_8_t_read() {
    poolOut2_3_8_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_8_t_we0() {
    poolOut2_3_8_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_8_t_we1() {
    poolOut2_3_8_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_9_U_ap_dummy_ce() {
    poolOut2_3_9_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_3_9_i_address0() {
    poolOut2_3_9_i_address0 = inference_maxPoolNxN_U0_out_feature_3_9_address0.read();
}

void inference::thread_poolOut2_3_9_i_address1() {
    poolOut2_3_9_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_3_9_i_ce0() {
    poolOut2_3_9_i_ce0 = inference_maxPoolNxN_U0_out_feature_3_9_ce0.read();
}

void inference::thread_poolOut2_3_9_i_ce1() {
    poolOut2_3_9_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_9_i_d0() {
    poolOut2_3_9_i_d0 = inference_maxPoolNxN_U0_out_feature_3_9_d0.read();
}

void inference::thread_poolOut2_3_9_i_we0() {
    poolOut2_3_9_i_we0 = inference_maxPoolNxN_U0_out_feature_3_9_we0.read();
}

void inference::thread_poolOut2_3_9_i_write() {
    poolOut2_3_9_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_3_9.read();
}

void inference::thread_poolOut2_3_9_t_address0() {
    poolOut2_3_9_t_address0 = inference_conv2d_U0_x_3_9_address0.read();
}

void inference::thread_poolOut2_3_9_t_address1() {
    poolOut2_3_9_t_address1 = inference_conv2d_U0_x_3_9_address1.read();
}

void inference::thread_poolOut2_3_9_t_ce0() {
    poolOut2_3_9_t_ce0 = inference_conv2d_U0_x_3_9_ce0.read();
}

void inference::thread_poolOut2_3_9_t_ce1() {
    poolOut2_3_9_t_ce1 = inference_conv2d_U0_x_3_9_ce1.read();
}

void inference::thread_poolOut2_3_9_t_d0() {
    poolOut2_3_9_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_9_t_d1() {
    poolOut2_3_9_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_3_9_t_read() {
    poolOut2_3_9_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_3_9_t_we0() {
    poolOut2_3_9_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_3_9_t_we1() {
    poolOut2_3_9_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_0_U_ap_dummy_ce() {
    poolOut2_4_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_0_i_address0() {
    poolOut2_4_0_i_address0 = inference_maxPoolNxN_U0_out_feature_4_0_address0.read();
}

void inference::thread_poolOut2_4_0_i_address1() {
    poolOut2_4_0_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_0_i_ce0() {
    poolOut2_4_0_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_0_ce0.read();
}

void inference::thread_poolOut2_4_0_i_ce1() {
    poolOut2_4_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_0_i_d0() {
    poolOut2_4_0_i_d0 = inference_maxPoolNxN_U0_out_feature_4_0_d0.read();
}

void inference::thread_poolOut2_4_0_i_we0() {
    poolOut2_4_0_i_we0 = inference_maxPoolNxN_U0_out_feature_4_0_we0.read();
}

void inference::thread_poolOut2_4_0_i_write() {
    poolOut2_4_0_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_0.read();
}

void inference::thread_poolOut2_4_0_t_address0() {
    poolOut2_4_0_t_address0 = inference_conv2d_U0_x_4_0_address0.read();
}

void inference::thread_poolOut2_4_0_t_address1() {
    poolOut2_4_0_t_address1 = inference_conv2d_U0_x_4_0_address1.read();
}

void inference::thread_poolOut2_4_0_t_ce0() {
    poolOut2_4_0_t_ce0 = inference_conv2d_U0_x_4_0_ce0.read();
}

void inference::thread_poolOut2_4_0_t_ce1() {
    poolOut2_4_0_t_ce1 = inference_conv2d_U0_x_4_0_ce1.read();
}

void inference::thread_poolOut2_4_0_t_d0() {
    poolOut2_4_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_0_t_d1() {
    poolOut2_4_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_0_t_read() {
    poolOut2_4_0_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_0_t_we0() {
    poolOut2_4_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_0_t_we1() {
    poolOut2_4_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_10_U_ap_dummy_ce() {
    poolOut2_4_10_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_10_i_address0() {
    poolOut2_4_10_i_address0 = inference_maxPoolNxN_U0_out_feature_4_10_address0.read();
}

void inference::thread_poolOut2_4_10_i_address1() {
    poolOut2_4_10_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_10_i_ce0() {
    poolOut2_4_10_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_10_ce0.read();
}

void inference::thread_poolOut2_4_10_i_ce1() {
    poolOut2_4_10_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_10_i_d0() {
    poolOut2_4_10_i_d0 = inference_maxPoolNxN_U0_out_feature_4_10_d0.read();
}

void inference::thread_poolOut2_4_10_i_we0() {
    poolOut2_4_10_i_we0 = inference_maxPoolNxN_U0_out_feature_4_10_we0.read();
}

void inference::thread_poolOut2_4_10_i_write() {
    poolOut2_4_10_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_10.read();
}

void inference::thread_poolOut2_4_10_t_address0() {
    poolOut2_4_10_t_address0 = inference_conv2d_U0_x_4_10_address0.read();
}

void inference::thread_poolOut2_4_10_t_address1() {
    poolOut2_4_10_t_address1 = inference_conv2d_U0_x_4_10_address1.read();
}

void inference::thread_poolOut2_4_10_t_ce0() {
    poolOut2_4_10_t_ce0 = inference_conv2d_U0_x_4_10_ce0.read();
}

void inference::thread_poolOut2_4_10_t_ce1() {
    poolOut2_4_10_t_ce1 = inference_conv2d_U0_x_4_10_ce1.read();
}

void inference::thread_poolOut2_4_10_t_d0() {
    poolOut2_4_10_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_10_t_d1() {
    poolOut2_4_10_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_10_t_read() {
    poolOut2_4_10_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_10_t_we0() {
    poolOut2_4_10_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_10_t_we1() {
    poolOut2_4_10_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_11_U_ap_dummy_ce() {
    poolOut2_4_11_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_11_i_address0() {
    poolOut2_4_11_i_address0 = inference_maxPoolNxN_U0_out_feature_4_11_address0.read();
}

void inference::thread_poolOut2_4_11_i_address1() {
    poolOut2_4_11_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_11_i_ce0() {
    poolOut2_4_11_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_11_ce0.read();
}

void inference::thread_poolOut2_4_11_i_ce1() {
    poolOut2_4_11_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_11_i_d0() {
    poolOut2_4_11_i_d0 = inference_maxPoolNxN_U0_out_feature_4_11_d0.read();
}

void inference::thread_poolOut2_4_11_i_we0() {
    poolOut2_4_11_i_we0 = inference_maxPoolNxN_U0_out_feature_4_11_we0.read();
}

void inference::thread_poolOut2_4_11_i_write() {
    poolOut2_4_11_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_11.read();
}

void inference::thread_poolOut2_4_11_t_address0() {
    poolOut2_4_11_t_address0 = inference_conv2d_U0_x_4_11_address0.read();
}

void inference::thread_poolOut2_4_11_t_address1() {
    poolOut2_4_11_t_address1 = inference_conv2d_U0_x_4_11_address1.read();
}

void inference::thread_poolOut2_4_11_t_ce0() {
    poolOut2_4_11_t_ce0 = inference_conv2d_U0_x_4_11_ce0.read();
}

void inference::thread_poolOut2_4_11_t_ce1() {
    poolOut2_4_11_t_ce1 = inference_conv2d_U0_x_4_11_ce1.read();
}

void inference::thread_poolOut2_4_11_t_d0() {
    poolOut2_4_11_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_11_t_d1() {
    poolOut2_4_11_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_11_t_read() {
    poolOut2_4_11_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_11_t_we0() {
    poolOut2_4_11_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_11_t_we1() {
    poolOut2_4_11_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_12_U_ap_dummy_ce() {
    poolOut2_4_12_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_12_i_address0() {
    poolOut2_4_12_i_address0 = inference_maxPoolNxN_U0_out_feature_4_12_address0.read();
}

void inference::thread_poolOut2_4_12_i_address1() {
    poolOut2_4_12_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_12_i_ce0() {
    poolOut2_4_12_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_12_ce0.read();
}

void inference::thread_poolOut2_4_12_i_ce1() {
    poolOut2_4_12_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_12_i_d0() {
    poolOut2_4_12_i_d0 = inference_maxPoolNxN_U0_out_feature_4_12_d0.read();
}

void inference::thread_poolOut2_4_12_i_we0() {
    poolOut2_4_12_i_we0 = inference_maxPoolNxN_U0_out_feature_4_12_we0.read();
}

void inference::thread_poolOut2_4_12_i_write() {
    poolOut2_4_12_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_12.read();
}

void inference::thread_poolOut2_4_12_t_address0() {
    poolOut2_4_12_t_address0 = inference_conv2d_U0_x_4_12_address0.read();
}

void inference::thread_poolOut2_4_12_t_address1() {
    poolOut2_4_12_t_address1 = inference_conv2d_U0_x_4_12_address1.read();
}

void inference::thread_poolOut2_4_12_t_ce0() {
    poolOut2_4_12_t_ce0 = inference_conv2d_U0_x_4_12_ce0.read();
}

void inference::thread_poolOut2_4_12_t_ce1() {
    poolOut2_4_12_t_ce1 = inference_conv2d_U0_x_4_12_ce1.read();
}

void inference::thread_poolOut2_4_12_t_d0() {
    poolOut2_4_12_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_12_t_d1() {
    poolOut2_4_12_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_12_t_read() {
    poolOut2_4_12_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_12_t_we0() {
    poolOut2_4_12_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_12_t_we1() {
    poolOut2_4_12_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_13_U_ap_dummy_ce() {
    poolOut2_4_13_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_13_i_address0() {
    poolOut2_4_13_i_address0 = inference_maxPoolNxN_U0_out_feature_4_13_address0.read();
}

void inference::thread_poolOut2_4_13_i_address1() {
    poolOut2_4_13_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_13_i_ce0() {
    poolOut2_4_13_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_13_ce0.read();
}

void inference::thread_poolOut2_4_13_i_ce1() {
    poolOut2_4_13_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_13_i_d0() {
    poolOut2_4_13_i_d0 = inference_maxPoolNxN_U0_out_feature_4_13_d0.read();
}

void inference::thread_poolOut2_4_13_i_we0() {
    poolOut2_4_13_i_we0 = inference_maxPoolNxN_U0_out_feature_4_13_we0.read();
}

void inference::thread_poolOut2_4_13_i_write() {
    poolOut2_4_13_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_13.read();
}

void inference::thread_poolOut2_4_13_t_address0() {
    poolOut2_4_13_t_address0 = inference_conv2d_U0_x_4_13_address0.read();
}

void inference::thread_poolOut2_4_13_t_address1() {
    poolOut2_4_13_t_address1 = inference_conv2d_U0_x_4_13_address1.read();
}

void inference::thread_poolOut2_4_13_t_ce0() {
    poolOut2_4_13_t_ce0 = inference_conv2d_U0_x_4_13_ce0.read();
}

void inference::thread_poolOut2_4_13_t_ce1() {
    poolOut2_4_13_t_ce1 = inference_conv2d_U0_x_4_13_ce1.read();
}

void inference::thread_poolOut2_4_13_t_d0() {
    poolOut2_4_13_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_13_t_d1() {
    poolOut2_4_13_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_13_t_read() {
    poolOut2_4_13_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_13_t_we0() {
    poolOut2_4_13_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_13_t_we1() {
    poolOut2_4_13_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_14_U_ap_dummy_ce() {
    poolOut2_4_14_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_14_i_address0() {
    poolOut2_4_14_i_address0 = inference_maxPoolNxN_U0_out_feature_4_14_address0.read();
}

void inference::thread_poolOut2_4_14_i_address1() {
    poolOut2_4_14_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_14_i_ce0() {
    poolOut2_4_14_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_14_ce0.read();
}

void inference::thread_poolOut2_4_14_i_ce1() {
    poolOut2_4_14_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_14_i_d0() {
    poolOut2_4_14_i_d0 = inference_maxPoolNxN_U0_out_feature_4_14_d0.read();
}

void inference::thread_poolOut2_4_14_i_we0() {
    poolOut2_4_14_i_we0 = inference_maxPoolNxN_U0_out_feature_4_14_we0.read();
}

void inference::thread_poolOut2_4_14_i_write() {
    poolOut2_4_14_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_14.read();
}

void inference::thread_poolOut2_4_14_t_address0() {
    poolOut2_4_14_t_address0 = inference_conv2d_U0_x_4_14_address0.read();
}

void inference::thread_poolOut2_4_14_t_address1() {
    poolOut2_4_14_t_address1 = inference_conv2d_U0_x_4_14_address1.read();
}

void inference::thread_poolOut2_4_14_t_ce0() {
    poolOut2_4_14_t_ce0 = inference_conv2d_U0_x_4_14_ce0.read();
}

void inference::thread_poolOut2_4_14_t_ce1() {
    poolOut2_4_14_t_ce1 = inference_conv2d_U0_x_4_14_ce1.read();
}

void inference::thread_poolOut2_4_14_t_d0() {
    poolOut2_4_14_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_14_t_d1() {
    poolOut2_4_14_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_14_t_read() {
    poolOut2_4_14_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_14_t_we0() {
    poolOut2_4_14_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_14_t_we1() {
    poolOut2_4_14_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_15_U_ap_dummy_ce() {
    poolOut2_4_15_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_15_i_address0() {
    poolOut2_4_15_i_address0 = inference_maxPoolNxN_U0_out_feature_4_15_address0.read();
}

void inference::thread_poolOut2_4_15_i_address1() {
    poolOut2_4_15_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_15_i_ce0() {
    poolOut2_4_15_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_15_ce0.read();
}

void inference::thread_poolOut2_4_15_i_ce1() {
    poolOut2_4_15_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_15_i_d0() {
    poolOut2_4_15_i_d0 = inference_maxPoolNxN_U0_out_feature_4_15_d0.read();
}

void inference::thread_poolOut2_4_15_i_we0() {
    poolOut2_4_15_i_we0 = inference_maxPoolNxN_U0_out_feature_4_15_we0.read();
}

void inference::thread_poolOut2_4_15_i_write() {
    poolOut2_4_15_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_15.read();
}

void inference::thread_poolOut2_4_15_t_address0() {
    poolOut2_4_15_t_address0 = inference_conv2d_U0_x_4_15_address0.read();
}

void inference::thread_poolOut2_4_15_t_address1() {
    poolOut2_4_15_t_address1 = inference_conv2d_U0_x_4_15_address1.read();
}

void inference::thread_poolOut2_4_15_t_ce0() {
    poolOut2_4_15_t_ce0 = inference_conv2d_U0_x_4_15_ce0.read();
}

void inference::thread_poolOut2_4_15_t_ce1() {
    poolOut2_4_15_t_ce1 = inference_conv2d_U0_x_4_15_ce1.read();
}

void inference::thread_poolOut2_4_15_t_d0() {
    poolOut2_4_15_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_15_t_d1() {
    poolOut2_4_15_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_15_t_read() {
    poolOut2_4_15_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_15_t_we0() {
    poolOut2_4_15_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_15_t_we1() {
    poolOut2_4_15_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_1_U_ap_dummy_ce() {
    poolOut2_4_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_1_i_address0() {
    poolOut2_4_1_i_address0 = inference_maxPoolNxN_U0_out_feature_4_1_address0.read();
}

void inference::thread_poolOut2_4_1_i_address1() {
    poolOut2_4_1_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_1_i_ce0() {
    poolOut2_4_1_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_1_ce0.read();
}

void inference::thread_poolOut2_4_1_i_ce1() {
    poolOut2_4_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_1_i_d0() {
    poolOut2_4_1_i_d0 = inference_maxPoolNxN_U0_out_feature_4_1_d0.read();
}

void inference::thread_poolOut2_4_1_i_we0() {
    poolOut2_4_1_i_we0 = inference_maxPoolNxN_U0_out_feature_4_1_we0.read();
}

void inference::thread_poolOut2_4_1_i_write() {
    poolOut2_4_1_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_1.read();
}

void inference::thread_poolOut2_4_1_t_address0() {
    poolOut2_4_1_t_address0 = inference_conv2d_U0_x_4_1_address0.read();
}

void inference::thread_poolOut2_4_1_t_address1() {
    poolOut2_4_1_t_address1 = inference_conv2d_U0_x_4_1_address1.read();
}

void inference::thread_poolOut2_4_1_t_ce0() {
    poolOut2_4_1_t_ce0 = inference_conv2d_U0_x_4_1_ce0.read();
}

void inference::thread_poolOut2_4_1_t_ce1() {
    poolOut2_4_1_t_ce1 = inference_conv2d_U0_x_4_1_ce1.read();
}

void inference::thread_poolOut2_4_1_t_d0() {
    poolOut2_4_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_1_t_d1() {
    poolOut2_4_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_1_t_read() {
    poolOut2_4_1_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_1_t_we0() {
    poolOut2_4_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_1_t_we1() {
    poolOut2_4_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_2_U_ap_dummy_ce() {
    poolOut2_4_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_2_i_address0() {
    poolOut2_4_2_i_address0 = inference_maxPoolNxN_U0_out_feature_4_2_address0.read();
}

void inference::thread_poolOut2_4_2_i_address1() {
    poolOut2_4_2_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_2_i_ce0() {
    poolOut2_4_2_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_2_ce0.read();
}

void inference::thread_poolOut2_4_2_i_ce1() {
    poolOut2_4_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_2_i_d0() {
    poolOut2_4_2_i_d0 = inference_maxPoolNxN_U0_out_feature_4_2_d0.read();
}

void inference::thread_poolOut2_4_2_i_we0() {
    poolOut2_4_2_i_we0 = inference_maxPoolNxN_U0_out_feature_4_2_we0.read();
}

void inference::thread_poolOut2_4_2_i_write() {
    poolOut2_4_2_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_2.read();
}

void inference::thread_poolOut2_4_2_t_address0() {
    poolOut2_4_2_t_address0 = inference_conv2d_U0_x_4_2_address0.read();
}

void inference::thread_poolOut2_4_2_t_address1() {
    poolOut2_4_2_t_address1 = inference_conv2d_U0_x_4_2_address1.read();
}

void inference::thread_poolOut2_4_2_t_ce0() {
    poolOut2_4_2_t_ce0 = inference_conv2d_U0_x_4_2_ce0.read();
}

void inference::thread_poolOut2_4_2_t_ce1() {
    poolOut2_4_2_t_ce1 = inference_conv2d_U0_x_4_2_ce1.read();
}

void inference::thread_poolOut2_4_2_t_d0() {
    poolOut2_4_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_2_t_d1() {
    poolOut2_4_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_2_t_read() {
    poolOut2_4_2_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_2_t_we0() {
    poolOut2_4_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_2_t_we1() {
    poolOut2_4_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_3_U_ap_dummy_ce() {
    poolOut2_4_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_3_i_address0() {
    poolOut2_4_3_i_address0 = inference_maxPoolNxN_U0_out_feature_4_3_address0.read();
}

void inference::thread_poolOut2_4_3_i_address1() {
    poolOut2_4_3_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_3_i_ce0() {
    poolOut2_4_3_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_3_ce0.read();
}

void inference::thread_poolOut2_4_3_i_ce1() {
    poolOut2_4_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_3_i_d0() {
    poolOut2_4_3_i_d0 = inference_maxPoolNxN_U0_out_feature_4_3_d0.read();
}

void inference::thread_poolOut2_4_3_i_we0() {
    poolOut2_4_3_i_we0 = inference_maxPoolNxN_U0_out_feature_4_3_we0.read();
}

void inference::thread_poolOut2_4_3_i_write() {
    poolOut2_4_3_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_3.read();
}

void inference::thread_poolOut2_4_3_t_address0() {
    poolOut2_4_3_t_address0 = inference_conv2d_U0_x_4_3_address0.read();
}

void inference::thread_poolOut2_4_3_t_address1() {
    poolOut2_4_3_t_address1 = inference_conv2d_U0_x_4_3_address1.read();
}

void inference::thread_poolOut2_4_3_t_ce0() {
    poolOut2_4_3_t_ce0 = inference_conv2d_U0_x_4_3_ce0.read();
}

void inference::thread_poolOut2_4_3_t_ce1() {
    poolOut2_4_3_t_ce1 = inference_conv2d_U0_x_4_3_ce1.read();
}

void inference::thread_poolOut2_4_3_t_d0() {
    poolOut2_4_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_3_t_d1() {
    poolOut2_4_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_3_t_read() {
    poolOut2_4_3_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_3_t_we0() {
    poolOut2_4_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_3_t_we1() {
    poolOut2_4_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_4_U_ap_dummy_ce() {
    poolOut2_4_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_4_i_address0() {
    poolOut2_4_4_i_address0 = inference_maxPoolNxN_U0_out_feature_4_4_address0.read();
}

void inference::thread_poolOut2_4_4_i_address1() {
    poolOut2_4_4_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_4_i_ce0() {
    poolOut2_4_4_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_4_ce0.read();
}

void inference::thread_poolOut2_4_4_i_ce1() {
    poolOut2_4_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_4_i_d0() {
    poolOut2_4_4_i_d0 = inference_maxPoolNxN_U0_out_feature_4_4_d0.read();
}

void inference::thread_poolOut2_4_4_i_we0() {
    poolOut2_4_4_i_we0 = inference_maxPoolNxN_U0_out_feature_4_4_we0.read();
}

void inference::thread_poolOut2_4_4_i_write() {
    poolOut2_4_4_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_4.read();
}

void inference::thread_poolOut2_4_4_t_address0() {
    poolOut2_4_4_t_address0 = inference_conv2d_U0_x_4_4_address0.read();
}

void inference::thread_poolOut2_4_4_t_address1() {
    poolOut2_4_4_t_address1 = inference_conv2d_U0_x_4_4_address1.read();
}

void inference::thread_poolOut2_4_4_t_ce0() {
    poolOut2_4_4_t_ce0 = inference_conv2d_U0_x_4_4_ce0.read();
}

void inference::thread_poolOut2_4_4_t_ce1() {
    poolOut2_4_4_t_ce1 = inference_conv2d_U0_x_4_4_ce1.read();
}

void inference::thread_poolOut2_4_4_t_d0() {
    poolOut2_4_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_4_t_d1() {
    poolOut2_4_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_4_t_read() {
    poolOut2_4_4_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_4_t_we0() {
    poolOut2_4_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_4_t_we1() {
    poolOut2_4_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_5_U_ap_dummy_ce() {
    poolOut2_4_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_5_i_address0() {
    poolOut2_4_5_i_address0 = inference_maxPoolNxN_U0_out_feature_4_5_address0.read();
}

void inference::thread_poolOut2_4_5_i_address1() {
    poolOut2_4_5_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_5_i_ce0() {
    poolOut2_4_5_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_5_ce0.read();
}

void inference::thread_poolOut2_4_5_i_ce1() {
    poolOut2_4_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_5_i_d0() {
    poolOut2_4_5_i_d0 = inference_maxPoolNxN_U0_out_feature_4_5_d0.read();
}

void inference::thread_poolOut2_4_5_i_we0() {
    poolOut2_4_5_i_we0 = inference_maxPoolNxN_U0_out_feature_4_5_we0.read();
}

void inference::thread_poolOut2_4_5_i_write() {
    poolOut2_4_5_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_5.read();
}

void inference::thread_poolOut2_4_5_t_address0() {
    poolOut2_4_5_t_address0 = inference_conv2d_U0_x_4_5_address0.read();
}

void inference::thread_poolOut2_4_5_t_address1() {
    poolOut2_4_5_t_address1 = inference_conv2d_U0_x_4_5_address1.read();
}

void inference::thread_poolOut2_4_5_t_ce0() {
    poolOut2_4_5_t_ce0 = inference_conv2d_U0_x_4_5_ce0.read();
}

void inference::thread_poolOut2_4_5_t_ce1() {
    poolOut2_4_5_t_ce1 = inference_conv2d_U0_x_4_5_ce1.read();
}

void inference::thread_poolOut2_4_5_t_d0() {
    poolOut2_4_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_5_t_d1() {
    poolOut2_4_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_5_t_read() {
    poolOut2_4_5_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_5_t_we0() {
    poolOut2_4_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_5_t_we1() {
    poolOut2_4_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_6_U_ap_dummy_ce() {
    poolOut2_4_6_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_6_i_address0() {
    poolOut2_4_6_i_address0 = inference_maxPoolNxN_U0_out_feature_4_6_address0.read();
}

void inference::thread_poolOut2_4_6_i_address1() {
    poolOut2_4_6_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_6_i_ce0() {
    poolOut2_4_6_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_6_ce0.read();
}

void inference::thread_poolOut2_4_6_i_ce1() {
    poolOut2_4_6_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_6_i_d0() {
    poolOut2_4_6_i_d0 = inference_maxPoolNxN_U0_out_feature_4_6_d0.read();
}

void inference::thread_poolOut2_4_6_i_we0() {
    poolOut2_4_6_i_we0 = inference_maxPoolNxN_U0_out_feature_4_6_we0.read();
}

void inference::thread_poolOut2_4_6_i_write() {
    poolOut2_4_6_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_6.read();
}

void inference::thread_poolOut2_4_6_t_address0() {
    poolOut2_4_6_t_address0 = inference_conv2d_U0_x_4_6_address0.read();
}

void inference::thread_poolOut2_4_6_t_address1() {
    poolOut2_4_6_t_address1 = inference_conv2d_U0_x_4_6_address1.read();
}

void inference::thread_poolOut2_4_6_t_ce0() {
    poolOut2_4_6_t_ce0 = inference_conv2d_U0_x_4_6_ce0.read();
}

void inference::thread_poolOut2_4_6_t_ce1() {
    poolOut2_4_6_t_ce1 = inference_conv2d_U0_x_4_6_ce1.read();
}

void inference::thread_poolOut2_4_6_t_d0() {
    poolOut2_4_6_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_6_t_d1() {
    poolOut2_4_6_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_6_t_read() {
    poolOut2_4_6_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_6_t_we0() {
    poolOut2_4_6_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_6_t_we1() {
    poolOut2_4_6_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_7_U_ap_dummy_ce() {
    poolOut2_4_7_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_7_i_address0() {
    poolOut2_4_7_i_address0 = inference_maxPoolNxN_U0_out_feature_4_7_address0.read();
}

void inference::thread_poolOut2_4_7_i_address1() {
    poolOut2_4_7_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_7_i_ce0() {
    poolOut2_4_7_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_7_ce0.read();
}

void inference::thread_poolOut2_4_7_i_ce1() {
    poolOut2_4_7_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_7_i_d0() {
    poolOut2_4_7_i_d0 = inference_maxPoolNxN_U0_out_feature_4_7_d0.read();
}

void inference::thread_poolOut2_4_7_i_we0() {
    poolOut2_4_7_i_we0 = inference_maxPoolNxN_U0_out_feature_4_7_we0.read();
}

void inference::thread_poolOut2_4_7_i_write() {
    poolOut2_4_7_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_7.read();
}

void inference::thread_poolOut2_4_7_t_address0() {
    poolOut2_4_7_t_address0 = inference_conv2d_U0_x_4_7_address0.read();
}

void inference::thread_poolOut2_4_7_t_address1() {
    poolOut2_4_7_t_address1 = inference_conv2d_U0_x_4_7_address1.read();
}

void inference::thread_poolOut2_4_7_t_ce0() {
    poolOut2_4_7_t_ce0 = inference_conv2d_U0_x_4_7_ce0.read();
}

void inference::thread_poolOut2_4_7_t_ce1() {
    poolOut2_4_7_t_ce1 = inference_conv2d_U0_x_4_7_ce1.read();
}

void inference::thread_poolOut2_4_7_t_d0() {
    poolOut2_4_7_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_7_t_d1() {
    poolOut2_4_7_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_7_t_read() {
    poolOut2_4_7_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_7_t_we0() {
    poolOut2_4_7_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_7_t_we1() {
    poolOut2_4_7_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_8_U_ap_dummy_ce() {
    poolOut2_4_8_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_8_i_address0() {
    poolOut2_4_8_i_address0 = inference_maxPoolNxN_U0_out_feature_4_8_address0.read();
}

void inference::thread_poolOut2_4_8_i_address1() {
    poolOut2_4_8_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_8_i_ce0() {
    poolOut2_4_8_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_8_ce0.read();
}

void inference::thread_poolOut2_4_8_i_ce1() {
    poolOut2_4_8_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_8_i_d0() {
    poolOut2_4_8_i_d0 = inference_maxPoolNxN_U0_out_feature_4_8_d0.read();
}

void inference::thread_poolOut2_4_8_i_we0() {
    poolOut2_4_8_i_we0 = inference_maxPoolNxN_U0_out_feature_4_8_we0.read();
}

void inference::thread_poolOut2_4_8_i_write() {
    poolOut2_4_8_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_8.read();
}

void inference::thread_poolOut2_4_8_t_address0() {
    poolOut2_4_8_t_address0 = inference_conv2d_U0_x_4_8_address0.read();
}

void inference::thread_poolOut2_4_8_t_address1() {
    poolOut2_4_8_t_address1 = inference_conv2d_U0_x_4_8_address1.read();
}

void inference::thread_poolOut2_4_8_t_ce0() {
    poolOut2_4_8_t_ce0 = inference_conv2d_U0_x_4_8_ce0.read();
}

void inference::thread_poolOut2_4_8_t_ce1() {
    poolOut2_4_8_t_ce1 = inference_conv2d_U0_x_4_8_ce1.read();
}

void inference::thread_poolOut2_4_8_t_d0() {
    poolOut2_4_8_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_8_t_d1() {
    poolOut2_4_8_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_8_t_read() {
    poolOut2_4_8_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_8_t_we0() {
    poolOut2_4_8_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_8_t_we1() {
    poolOut2_4_8_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_9_U_ap_dummy_ce() {
    poolOut2_4_9_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_4_9_i_address0() {
    poolOut2_4_9_i_address0 = inference_maxPoolNxN_U0_out_feature_4_9_address0.read();
}

void inference::thread_poolOut2_4_9_i_address1() {
    poolOut2_4_9_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_4_9_i_ce0() {
    poolOut2_4_9_i_ce0 = inference_maxPoolNxN_U0_out_feature_4_9_ce0.read();
}

void inference::thread_poolOut2_4_9_i_ce1() {
    poolOut2_4_9_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_9_i_d0() {
    poolOut2_4_9_i_d0 = inference_maxPoolNxN_U0_out_feature_4_9_d0.read();
}

void inference::thread_poolOut2_4_9_i_we0() {
    poolOut2_4_9_i_we0 = inference_maxPoolNxN_U0_out_feature_4_9_we0.read();
}

void inference::thread_poolOut2_4_9_i_write() {
    poolOut2_4_9_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_4_9.read();
}

void inference::thread_poolOut2_4_9_t_address0() {
    poolOut2_4_9_t_address0 = inference_conv2d_U0_x_4_9_address0.read();
}

void inference::thread_poolOut2_4_9_t_address1() {
    poolOut2_4_9_t_address1 = inference_conv2d_U0_x_4_9_address1.read();
}

void inference::thread_poolOut2_4_9_t_ce0() {
    poolOut2_4_9_t_ce0 = inference_conv2d_U0_x_4_9_ce0.read();
}

void inference::thread_poolOut2_4_9_t_ce1() {
    poolOut2_4_9_t_ce1 = inference_conv2d_U0_x_4_9_ce1.read();
}

void inference::thread_poolOut2_4_9_t_d0() {
    poolOut2_4_9_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_9_t_d1() {
    poolOut2_4_9_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_4_9_t_read() {
    poolOut2_4_9_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_4_9_t_we0() {
    poolOut2_4_9_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_4_9_t_we1() {
    poolOut2_4_9_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_0_0_0_U_ap_dummy_ce() {
    x_in_0_0_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_0_0_0_i_address0() {
    x_in_0_0_0_i_address0 = inference_Loop_1_proc_U0_x_in_0_0_0_address0.read();
}

void inference::thread_x_in_0_0_0_i_address1() {
    x_in_0_0_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_0_0_0_i_ce0() {
    x_in_0_0_0_i_ce0 = inference_Loop_1_proc_U0_x_in_0_0_0_ce0.read();
}

void inference::thread_x_in_0_0_0_i_ce1() {
    x_in_0_0_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_0_0_0_i_d0() {
    x_in_0_0_0_i_d0 = inference_Loop_1_proc_U0_x_in_0_0_0_d0.read();
}

void inference::thread_x_in_0_0_0_i_we0() {
    x_in_0_0_0_i_we0 = inference_Loop_1_proc_U0_x_in_0_0_0_we0.read();
}

void inference::thread_x_in_0_0_0_i_write() {
    x_in_0_0_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_0_0_0.read();
}

void inference::thread_x_in_0_0_0_t_address0() {
    x_in_0_0_0_t_address0 = inference_conv2d_1_U0_x_0_0_0_address0.read();
}

void inference::thread_x_in_0_0_0_t_address1() {
    x_in_0_0_0_t_address1 = inference_conv2d_1_U0_x_0_0_0_address1.read();
}

void inference::thread_x_in_0_0_0_t_ce0() {
    x_in_0_0_0_t_ce0 = inference_conv2d_1_U0_x_0_0_0_ce0.read();
}

void inference::thread_x_in_0_0_0_t_ce1() {
    x_in_0_0_0_t_ce1 = inference_conv2d_1_U0_x_0_0_0_ce1.read();
}

void inference::thread_x_in_0_0_0_t_d0() {
    x_in_0_0_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_0_0_0_t_d1() {
    x_in_0_0_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_0_0_0_t_read() {
    x_in_0_0_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_0_0_0_t_we0() {
    x_in_0_0_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_0_0_0_t_we1() {
    x_in_0_0_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_0_1_0_U_ap_dummy_ce() {
    x_in_0_1_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_0_1_0_i_address0() {
    x_in_0_1_0_i_address0 = inference_Loop_1_proc_U0_x_in_0_1_0_address0.read();
}

void inference::thread_x_in_0_1_0_i_address1() {
    x_in_0_1_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_0_1_0_i_ce0() {
    x_in_0_1_0_i_ce0 = inference_Loop_1_proc_U0_x_in_0_1_0_ce0.read();
}

void inference::thread_x_in_0_1_0_i_ce1() {
    x_in_0_1_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_0_1_0_i_d0() {
    x_in_0_1_0_i_d0 = inference_Loop_1_proc_U0_x_in_0_1_0_d0.read();
}

void inference::thread_x_in_0_1_0_i_we0() {
    x_in_0_1_0_i_we0 = inference_Loop_1_proc_U0_x_in_0_1_0_we0.read();
}

void inference::thread_x_in_0_1_0_i_write() {
    x_in_0_1_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_0_1_0.read();
}

void inference::thread_x_in_0_1_0_t_address0() {
    x_in_0_1_0_t_address0 = inference_conv2d_1_U0_x_0_1_0_address0.read();
}

void inference::thread_x_in_0_1_0_t_address1() {
    x_in_0_1_0_t_address1 = inference_conv2d_1_U0_x_0_1_0_address1.read();
}

void inference::thread_x_in_0_1_0_t_ce0() {
    x_in_0_1_0_t_ce0 = inference_conv2d_1_U0_x_0_1_0_ce0.read();
}

void inference::thread_x_in_0_1_0_t_ce1() {
    x_in_0_1_0_t_ce1 = inference_conv2d_1_U0_x_0_1_0_ce1.read();
}

void inference::thread_x_in_0_1_0_t_d0() {
    x_in_0_1_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_0_1_0_t_d1() {
    x_in_0_1_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_0_1_0_t_read() {
    x_in_0_1_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_0_1_0_t_we0() {
    x_in_0_1_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_0_1_0_t_we1() {
    x_in_0_1_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_0_2_0_U_ap_dummy_ce() {
    x_in_0_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_0_2_0_i_address0() {
    x_in_0_2_0_i_address0 = inference_Loop_1_proc_U0_x_in_0_2_0_address0.read();
}

void inference::thread_x_in_0_2_0_i_address1() {
    x_in_0_2_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_0_2_0_i_ce0() {
    x_in_0_2_0_i_ce0 = inference_Loop_1_proc_U0_x_in_0_2_0_ce0.read();
}

void inference::thread_x_in_0_2_0_i_ce1() {
    x_in_0_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_0_2_0_i_d0() {
    x_in_0_2_0_i_d0 = inference_Loop_1_proc_U0_x_in_0_2_0_d0.read();
}

void inference::thread_x_in_0_2_0_i_we0() {
    x_in_0_2_0_i_we0 = inference_Loop_1_proc_U0_x_in_0_2_0_we0.read();
}

void inference::thread_x_in_0_2_0_i_write() {
    x_in_0_2_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_0_2_0.read();
}

void inference::thread_x_in_0_2_0_t_address0() {
    x_in_0_2_0_t_address0 = inference_conv2d_1_U0_x_0_2_0_address0.read();
}

void inference::thread_x_in_0_2_0_t_address1() {
    x_in_0_2_0_t_address1 = inference_conv2d_1_U0_x_0_2_0_address1.read();
}

void inference::thread_x_in_0_2_0_t_ce0() {
    x_in_0_2_0_t_ce0 = inference_conv2d_1_U0_x_0_2_0_ce0.read();
}

void inference::thread_x_in_0_2_0_t_ce1() {
    x_in_0_2_0_t_ce1 = inference_conv2d_1_U0_x_0_2_0_ce1.read();
}

void inference::thread_x_in_0_2_0_t_d0() {
    x_in_0_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_0_2_0_t_d1() {
    x_in_0_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_0_2_0_t_read() {
    x_in_0_2_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_0_2_0_t_we0() {
    x_in_0_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_0_2_0_t_we1() {
    x_in_0_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_0_3_0_U_ap_dummy_ce() {
    x_in_0_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_0_3_0_i_address0() {
    x_in_0_3_0_i_address0 = inference_Loop_1_proc_U0_x_in_0_3_0_address0.read();
}

void inference::thread_x_in_0_3_0_i_address1() {
    x_in_0_3_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_0_3_0_i_ce0() {
    x_in_0_3_0_i_ce0 = inference_Loop_1_proc_U0_x_in_0_3_0_ce0.read();
}

void inference::thread_x_in_0_3_0_i_ce1() {
    x_in_0_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_0_3_0_i_d0() {
    x_in_0_3_0_i_d0 = inference_Loop_1_proc_U0_x_in_0_3_0_d0.read();
}

void inference::thread_x_in_0_3_0_i_we0() {
    x_in_0_3_0_i_we0 = inference_Loop_1_proc_U0_x_in_0_3_0_we0.read();
}

void inference::thread_x_in_0_3_0_i_write() {
    x_in_0_3_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_0_3_0.read();
}

void inference::thread_x_in_0_3_0_t_address0() {
    x_in_0_3_0_t_address0 = inference_conv2d_1_U0_x_0_3_0_address0.read();
}

void inference::thread_x_in_0_3_0_t_address1() {
    x_in_0_3_0_t_address1 = inference_conv2d_1_U0_x_0_3_0_address1.read();
}

void inference::thread_x_in_0_3_0_t_ce0() {
    x_in_0_3_0_t_ce0 = inference_conv2d_1_U0_x_0_3_0_ce0.read();
}

void inference::thread_x_in_0_3_0_t_ce1() {
    x_in_0_3_0_t_ce1 = inference_conv2d_1_U0_x_0_3_0_ce1.read();
}

void inference::thread_x_in_0_3_0_t_d0() {
    x_in_0_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_0_3_0_t_d1() {
    x_in_0_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_0_3_0_t_read() {
    x_in_0_3_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_0_3_0_t_we0() {
    x_in_0_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_0_3_0_t_we1() {
    x_in_0_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_0_4_0_U_ap_dummy_ce() {
    x_in_0_4_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_0_4_0_i_address0() {
    x_in_0_4_0_i_address0 = inference_Loop_1_proc_U0_x_in_0_4_0_address0.read();
}

void inference::thread_x_in_0_4_0_i_address1() {
    x_in_0_4_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_0_4_0_i_ce0() {
    x_in_0_4_0_i_ce0 = inference_Loop_1_proc_U0_x_in_0_4_0_ce0.read();
}

void inference::thread_x_in_0_4_0_i_ce1() {
    x_in_0_4_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_0_4_0_i_d0() {
    x_in_0_4_0_i_d0 = inference_Loop_1_proc_U0_x_in_0_4_0_d0.read();
}

void inference::thread_x_in_0_4_0_i_we0() {
    x_in_0_4_0_i_we0 = inference_Loop_1_proc_U0_x_in_0_4_0_we0.read();
}

void inference::thread_x_in_0_4_0_i_write() {
    x_in_0_4_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_0_4_0.read();
}

void inference::thread_x_in_0_4_0_t_address0() {
    x_in_0_4_0_t_address0 = inference_conv2d_1_U0_x_0_4_0_address0.read();
}

void inference::thread_x_in_0_4_0_t_address1() {
    x_in_0_4_0_t_address1 = inference_conv2d_1_U0_x_0_4_0_address1.read();
}

void inference::thread_x_in_0_4_0_t_ce0() {
    x_in_0_4_0_t_ce0 = inference_conv2d_1_U0_x_0_4_0_ce0.read();
}

void inference::thread_x_in_0_4_0_t_ce1() {
    x_in_0_4_0_t_ce1 = inference_conv2d_1_U0_x_0_4_0_ce1.read();
}

void inference::thread_x_in_0_4_0_t_d0() {
    x_in_0_4_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_0_4_0_t_d1() {
    x_in_0_4_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_0_4_0_t_read() {
    x_in_0_4_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_0_4_0_t_we0() {
    x_in_0_4_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_0_4_0_t_we1() {
    x_in_0_4_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_1_0_0_U_ap_dummy_ce() {
    x_in_1_0_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_1_0_0_i_address0() {
    x_in_1_0_0_i_address0 = inference_Loop_1_proc_U0_x_in_1_0_0_address0.read();
}

void inference::thread_x_in_1_0_0_i_address1() {
    x_in_1_0_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_1_0_0_i_ce0() {
    x_in_1_0_0_i_ce0 = inference_Loop_1_proc_U0_x_in_1_0_0_ce0.read();
}

void inference::thread_x_in_1_0_0_i_ce1() {
    x_in_1_0_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_1_0_0_i_d0() {
    x_in_1_0_0_i_d0 = inference_Loop_1_proc_U0_x_in_1_0_0_d0.read();
}

void inference::thread_x_in_1_0_0_i_we0() {
    x_in_1_0_0_i_we0 = inference_Loop_1_proc_U0_x_in_1_0_0_we0.read();
}

void inference::thread_x_in_1_0_0_i_write() {
    x_in_1_0_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_1_0_0.read();
}

void inference::thread_x_in_1_0_0_t_address0() {
    x_in_1_0_0_t_address0 = inference_conv2d_1_U0_x_1_0_0_address0.read();
}

void inference::thread_x_in_1_0_0_t_address1() {
    x_in_1_0_0_t_address1 = inference_conv2d_1_U0_x_1_0_0_address1.read();
}

void inference::thread_x_in_1_0_0_t_ce0() {
    x_in_1_0_0_t_ce0 = inference_conv2d_1_U0_x_1_0_0_ce0.read();
}

void inference::thread_x_in_1_0_0_t_ce1() {
    x_in_1_0_0_t_ce1 = inference_conv2d_1_U0_x_1_0_0_ce1.read();
}

void inference::thread_x_in_1_0_0_t_d0() {
    x_in_1_0_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_1_0_0_t_d1() {
    x_in_1_0_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_1_0_0_t_read() {
    x_in_1_0_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_1_0_0_t_we0() {
    x_in_1_0_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_1_0_0_t_we1() {
    x_in_1_0_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_1_1_0_U_ap_dummy_ce() {
    x_in_1_1_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_1_1_0_i_address0() {
    x_in_1_1_0_i_address0 = inference_Loop_1_proc_U0_x_in_1_1_0_address0.read();
}

void inference::thread_x_in_1_1_0_i_address1() {
    x_in_1_1_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_1_1_0_i_ce0() {
    x_in_1_1_0_i_ce0 = inference_Loop_1_proc_U0_x_in_1_1_0_ce0.read();
}

void inference::thread_x_in_1_1_0_i_ce1() {
    x_in_1_1_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_1_1_0_i_d0() {
    x_in_1_1_0_i_d0 = inference_Loop_1_proc_U0_x_in_1_1_0_d0.read();
}

void inference::thread_x_in_1_1_0_i_we0() {
    x_in_1_1_0_i_we0 = inference_Loop_1_proc_U0_x_in_1_1_0_we0.read();
}

void inference::thread_x_in_1_1_0_i_write() {
    x_in_1_1_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_1_1_0.read();
}

void inference::thread_x_in_1_1_0_t_address0() {
    x_in_1_1_0_t_address0 = inference_conv2d_1_U0_x_1_1_0_address0.read();
}

void inference::thread_x_in_1_1_0_t_address1() {
    x_in_1_1_0_t_address1 = inference_conv2d_1_U0_x_1_1_0_address1.read();
}

void inference::thread_x_in_1_1_0_t_ce0() {
    x_in_1_1_0_t_ce0 = inference_conv2d_1_U0_x_1_1_0_ce0.read();
}

void inference::thread_x_in_1_1_0_t_ce1() {
    x_in_1_1_0_t_ce1 = inference_conv2d_1_U0_x_1_1_0_ce1.read();
}

void inference::thread_x_in_1_1_0_t_d0() {
    x_in_1_1_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_1_1_0_t_d1() {
    x_in_1_1_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_1_1_0_t_read() {
    x_in_1_1_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_1_1_0_t_we0() {
    x_in_1_1_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_1_1_0_t_we1() {
    x_in_1_1_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_1_2_0_U_ap_dummy_ce() {
    x_in_1_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_1_2_0_i_address0() {
    x_in_1_2_0_i_address0 = inference_Loop_1_proc_U0_x_in_1_2_0_address0.read();
}

void inference::thread_x_in_1_2_0_i_address1() {
    x_in_1_2_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_1_2_0_i_ce0() {
    x_in_1_2_0_i_ce0 = inference_Loop_1_proc_U0_x_in_1_2_0_ce0.read();
}

void inference::thread_x_in_1_2_0_i_ce1() {
    x_in_1_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_1_2_0_i_d0() {
    x_in_1_2_0_i_d0 = inference_Loop_1_proc_U0_x_in_1_2_0_d0.read();
}

void inference::thread_x_in_1_2_0_i_we0() {
    x_in_1_2_0_i_we0 = inference_Loop_1_proc_U0_x_in_1_2_0_we0.read();
}

void inference::thread_x_in_1_2_0_i_write() {
    x_in_1_2_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_1_2_0.read();
}

void inference::thread_x_in_1_2_0_t_address0() {
    x_in_1_2_0_t_address0 = inference_conv2d_1_U0_x_1_2_0_address0.read();
}

void inference::thread_x_in_1_2_0_t_address1() {
    x_in_1_2_0_t_address1 = inference_conv2d_1_U0_x_1_2_0_address1.read();
}

void inference::thread_x_in_1_2_0_t_ce0() {
    x_in_1_2_0_t_ce0 = inference_conv2d_1_U0_x_1_2_0_ce0.read();
}

void inference::thread_x_in_1_2_0_t_ce1() {
    x_in_1_2_0_t_ce1 = inference_conv2d_1_U0_x_1_2_0_ce1.read();
}

void inference::thread_x_in_1_2_0_t_d0() {
    x_in_1_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_1_2_0_t_d1() {
    x_in_1_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_1_2_0_t_read() {
    x_in_1_2_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_1_2_0_t_we0() {
    x_in_1_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_1_2_0_t_we1() {
    x_in_1_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_1_3_0_U_ap_dummy_ce() {
    x_in_1_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_1_3_0_i_address0() {
    x_in_1_3_0_i_address0 = inference_Loop_1_proc_U0_x_in_1_3_0_address0.read();
}

void inference::thread_x_in_1_3_0_i_address1() {
    x_in_1_3_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_1_3_0_i_ce0() {
    x_in_1_3_0_i_ce0 = inference_Loop_1_proc_U0_x_in_1_3_0_ce0.read();
}

void inference::thread_x_in_1_3_0_i_ce1() {
    x_in_1_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_1_3_0_i_d0() {
    x_in_1_3_0_i_d0 = inference_Loop_1_proc_U0_x_in_1_3_0_d0.read();
}

void inference::thread_x_in_1_3_0_i_we0() {
    x_in_1_3_0_i_we0 = inference_Loop_1_proc_U0_x_in_1_3_0_we0.read();
}

void inference::thread_x_in_1_3_0_i_write() {
    x_in_1_3_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_1_3_0.read();
}

void inference::thread_x_in_1_3_0_t_address0() {
    x_in_1_3_0_t_address0 = inference_conv2d_1_U0_x_1_3_0_address0.read();
}

void inference::thread_x_in_1_3_0_t_address1() {
    x_in_1_3_0_t_address1 = inference_conv2d_1_U0_x_1_3_0_address1.read();
}

void inference::thread_x_in_1_3_0_t_ce0() {
    x_in_1_3_0_t_ce0 = inference_conv2d_1_U0_x_1_3_0_ce0.read();
}

void inference::thread_x_in_1_3_0_t_ce1() {
    x_in_1_3_0_t_ce1 = inference_conv2d_1_U0_x_1_3_0_ce1.read();
}

void inference::thread_x_in_1_3_0_t_d0() {
    x_in_1_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_1_3_0_t_d1() {
    x_in_1_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_1_3_0_t_read() {
    x_in_1_3_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_1_3_0_t_we0() {
    x_in_1_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_1_3_0_t_we1() {
    x_in_1_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_1_4_0_U_ap_dummy_ce() {
    x_in_1_4_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_1_4_0_i_address0() {
    x_in_1_4_0_i_address0 = inference_Loop_1_proc_U0_x_in_1_4_0_address0.read();
}

void inference::thread_x_in_1_4_0_i_address1() {
    x_in_1_4_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_1_4_0_i_ce0() {
    x_in_1_4_0_i_ce0 = inference_Loop_1_proc_U0_x_in_1_4_0_ce0.read();
}

void inference::thread_x_in_1_4_0_i_ce1() {
    x_in_1_4_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_1_4_0_i_d0() {
    x_in_1_4_0_i_d0 = inference_Loop_1_proc_U0_x_in_1_4_0_d0.read();
}

void inference::thread_x_in_1_4_0_i_we0() {
    x_in_1_4_0_i_we0 = inference_Loop_1_proc_U0_x_in_1_4_0_we0.read();
}

void inference::thread_x_in_1_4_0_i_write() {
    x_in_1_4_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_1_4_0.read();
}

void inference::thread_x_in_1_4_0_t_address0() {
    x_in_1_4_0_t_address0 = inference_conv2d_1_U0_x_1_4_0_address0.read();
}

void inference::thread_x_in_1_4_0_t_address1() {
    x_in_1_4_0_t_address1 = inference_conv2d_1_U0_x_1_4_0_address1.read();
}

void inference::thread_x_in_1_4_0_t_ce0() {
    x_in_1_4_0_t_ce0 = inference_conv2d_1_U0_x_1_4_0_ce0.read();
}

void inference::thread_x_in_1_4_0_t_ce1() {
    x_in_1_4_0_t_ce1 = inference_conv2d_1_U0_x_1_4_0_ce1.read();
}

void inference::thread_x_in_1_4_0_t_d0() {
    x_in_1_4_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_1_4_0_t_d1() {
    x_in_1_4_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_1_4_0_t_read() {
    x_in_1_4_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_1_4_0_t_we0() {
    x_in_1_4_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_1_4_0_t_we1() {
    x_in_1_4_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_2_0_0_U_ap_dummy_ce() {
    x_in_2_0_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_2_0_0_i_address0() {
    x_in_2_0_0_i_address0 = inference_Loop_1_proc_U0_x_in_2_0_0_address0.read();
}

void inference::thread_x_in_2_0_0_i_address1() {
    x_in_2_0_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_2_0_0_i_ce0() {
    x_in_2_0_0_i_ce0 = inference_Loop_1_proc_U0_x_in_2_0_0_ce0.read();
}

void inference::thread_x_in_2_0_0_i_ce1() {
    x_in_2_0_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_2_0_0_i_d0() {
    x_in_2_0_0_i_d0 = inference_Loop_1_proc_U0_x_in_2_0_0_d0.read();
}

void inference::thread_x_in_2_0_0_i_we0() {
    x_in_2_0_0_i_we0 = inference_Loop_1_proc_U0_x_in_2_0_0_we0.read();
}

void inference::thread_x_in_2_0_0_i_write() {
    x_in_2_0_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_2_0_0.read();
}

void inference::thread_x_in_2_0_0_t_address0() {
    x_in_2_0_0_t_address0 = inference_conv2d_1_U0_x_2_0_0_address0.read();
}

void inference::thread_x_in_2_0_0_t_address1() {
    x_in_2_0_0_t_address1 = inference_conv2d_1_U0_x_2_0_0_address1.read();
}

void inference::thread_x_in_2_0_0_t_ce0() {
    x_in_2_0_0_t_ce0 = inference_conv2d_1_U0_x_2_0_0_ce0.read();
}

void inference::thread_x_in_2_0_0_t_ce1() {
    x_in_2_0_0_t_ce1 = inference_conv2d_1_U0_x_2_0_0_ce1.read();
}

void inference::thread_x_in_2_0_0_t_d0() {
    x_in_2_0_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_2_0_0_t_d1() {
    x_in_2_0_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_2_0_0_t_read() {
    x_in_2_0_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_2_0_0_t_we0() {
    x_in_2_0_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_2_0_0_t_we1() {
    x_in_2_0_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_2_1_0_U_ap_dummy_ce() {
    x_in_2_1_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_2_1_0_i_address0() {
    x_in_2_1_0_i_address0 = inference_Loop_1_proc_U0_x_in_2_1_0_address0.read();
}

void inference::thread_x_in_2_1_0_i_address1() {
    x_in_2_1_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_2_1_0_i_ce0() {
    x_in_2_1_0_i_ce0 = inference_Loop_1_proc_U0_x_in_2_1_0_ce0.read();
}

void inference::thread_x_in_2_1_0_i_ce1() {
    x_in_2_1_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_2_1_0_i_d0() {
    x_in_2_1_0_i_d0 = inference_Loop_1_proc_U0_x_in_2_1_0_d0.read();
}

void inference::thread_x_in_2_1_0_i_we0() {
    x_in_2_1_0_i_we0 = inference_Loop_1_proc_U0_x_in_2_1_0_we0.read();
}

void inference::thread_x_in_2_1_0_i_write() {
    x_in_2_1_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_2_1_0.read();
}

void inference::thread_x_in_2_1_0_t_address0() {
    x_in_2_1_0_t_address0 = inference_conv2d_1_U0_x_2_1_0_address0.read();
}

void inference::thread_x_in_2_1_0_t_address1() {
    x_in_2_1_0_t_address1 = inference_conv2d_1_U0_x_2_1_0_address1.read();
}

void inference::thread_x_in_2_1_0_t_ce0() {
    x_in_2_1_0_t_ce0 = inference_conv2d_1_U0_x_2_1_0_ce0.read();
}

void inference::thread_x_in_2_1_0_t_ce1() {
    x_in_2_1_0_t_ce1 = inference_conv2d_1_U0_x_2_1_0_ce1.read();
}

void inference::thread_x_in_2_1_0_t_d0() {
    x_in_2_1_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_2_1_0_t_d1() {
    x_in_2_1_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_2_1_0_t_read() {
    x_in_2_1_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_2_1_0_t_we0() {
    x_in_2_1_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_2_1_0_t_we1() {
    x_in_2_1_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_2_2_0_U_ap_dummy_ce() {
    x_in_2_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_2_2_0_i_address0() {
    x_in_2_2_0_i_address0 = inference_Loop_1_proc_U0_x_in_2_2_0_address0.read();
}

void inference::thread_x_in_2_2_0_i_address1() {
    x_in_2_2_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_x_in_2_2_0_i_ce0() {
    x_in_2_2_0_i_ce0 = inference_Loop_1_proc_U0_x_in_2_2_0_ce0.read();
}

void inference::thread_x_in_2_2_0_i_ce1() {
    x_in_2_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_2_2_0_i_d0() {
    x_in_2_2_0_i_d0 = inference_Loop_1_proc_U0_x_in_2_2_0_d0.read();
}

void inference::thread_x_in_2_2_0_i_we0() {
    x_in_2_2_0_i_we0 = inference_Loop_1_proc_U0_x_in_2_2_0_we0.read();
}

void inference::thread_x_in_2_2_0_i_write() {
    x_in_2_2_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_2_2_0.read();
}

void inference::thread_x_in_2_2_0_t_address0() {
    x_in_2_2_0_t_address0 = inference_conv2d_1_U0_x_2_2_0_address0.read();
}

void inference::thread_x_in_2_2_0_t_address1() {
    x_in_2_2_0_t_address1 = inference_conv2d_1_U0_x_2_2_0_address1.read();
}

void inference::thread_x_in_2_2_0_t_ce0() {
    x_in_2_2_0_t_ce0 = inference_conv2d_1_U0_x_2_2_0_ce0.read();
}

void inference::thread_x_in_2_2_0_t_ce1() {
    x_in_2_2_0_t_ce1 = inference_conv2d_1_U0_x_2_2_0_ce1.read();
}

void inference::thread_x_in_2_2_0_t_d0() {
    x_in_2_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_2_2_0_t_d1() {
    x_in_2_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_2_2_0_t_read() {
    x_in_2_2_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_2_2_0_t_we0() {
    x_in_2_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_2_2_0_t_we1() {
    x_in_2_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_2_3_0_U_ap_dummy_ce() {
    x_in_2_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_2_3_0_i_address0() {
    x_in_2_3_0_i_address0 = inference_Loop_1_proc_U0_x_in_2_3_0_address0.read();
}

void inference::thread_x_in_2_3_0_i_address1() {
    x_in_2_3_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_2_3_0_i_ce0() {
    x_in_2_3_0_i_ce0 = inference_Loop_1_proc_U0_x_in_2_3_0_ce0.read();
}

void inference::thread_x_in_2_3_0_i_ce1() {
    x_in_2_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_2_3_0_i_d0() {
    x_in_2_3_0_i_d0 = inference_Loop_1_proc_U0_x_in_2_3_0_d0.read();
}

void inference::thread_x_in_2_3_0_i_we0() {
    x_in_2_3_0_i_we0 = inference_Loop_1_proc_U0_x_in_2_3_0_we0.read();
}

void inference::thread_x_in_2_3_0_i_write() {
    x_in_2_3_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_2_3_0.read();
}

void inference::thread_x_in_2_3_0_t_address0() {
    x_in_2_3_0_t_address0 = inference_conv2d_1_U0_x_2_3_0_address0.read();
}

void inference::thread_x_in_2_3_0_t_address1() {
    x_in_2_3_0_t_address1 = inference_conv2d_1_U0_x_2_3_0_address1.read();
}

void inference::thread_x_in_2_3_0_t_ce0() {
    x_in_2_3_0_t_ce0 = inference_conv2d_1_U0_x_2_3_0_ce0.read();
}

void inference::thread_x_in_2_3_0_t_ce1() {
    x_in_2_3_0_t_ce1 = inference_conv2d_1_U0_x_2_3_0_ce1.read();
}

void inference::thread_x_in_2_3_0_t_d0() {
    x_in_2_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_2_3_0_t_d1() {
    x_in_2_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_2_3_0_t_read() {
    x_in_2_3_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_2_3_0_t_we0() {
    x_in_2_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_2_3_0_t_we1() {
    x_in_2_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_2_4_0_U_ap_dummy_ce() {
    x_in_2_4_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_2_4_0_i_address0() {
    x_in_2_4_0_i_address0 = inference_Loop_1_proc_U0_x_in_2_4_0_address0.read();
}

void inference::thread_x_in_2_4_0_i_address1() {
    x_in_2_4_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_2_4_0_i_ce0() {
    x_in_2_4_0_i_ce0 = inference_Loop_1_proc_U0_x_in_2_4_0_ce0.read();
}

void inference::thread_x_in_2_4_0_i_ce1() {
    x_in_2_4_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_2_4_0_i_d0() {
    x_in_2_4_0_i_d0 = inference_Loop_1_proc_U0_x_in_2_4_0_d0.read();
}

void inference::thread_x_in_2_4_0_i_we0() {
    x_in_2_4_0_i_we0 = inference_Loop_1_proc_U0_x_in_2_4_0_we0.read();
}

void inference::thread_x_in_2_4_0_i_write() {
    x_in_2_4_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_2_4_0.read();
}

void inference::thread_x_in_2_4_0_t_address0() {
    x_in_2_4_0_t_address0 = inference_conv2d_1_U0_x_2_4_0_address0.read();
}

void inference::thread_x_in_2_4_0_t_address1() {
    x_in_2_4_0_t_address1 = inference_conv2d_1_U0_x_2_4_0_address1.read();
}

void inference::thread_x_in_2_4_0_t_ce0() {
    x_in_2_4_0_t_ce0 = inference_conv2d_1_U0_x_2_4_0_ce0.read();
}

void inference::thread_x_in_2_4_0_t_ce1() {
    x_in_2_4_0_t_ce1 = inference_conv2d_1_U0_x_2_4_0_ce1.read();
}

void inference::thread_x_in_2_4_0_t_d0() {
    x_in_2_4_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_2_4_0_t_d1() {
    x_in_2_4_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_2_4_0_t_read() {
    x_in_2_4_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_2_4_0_t_we0() {
    x_in_2_4_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_2_4_0_t_we1() {
    x_in_2_4_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_3_0_0_U_ap_dummy_ce() {
    x_in_3_0_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_3_0_0_i_address0() {
    x_in_3_0_0_i_address0 = inference_Loop_1_proc_U0_x_in_3_0_0_address0.read();
}

void inference::thread_x_in_3_0_0_i_address1() {
    x_in_3_0_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_3_0_0_i_ce0() {
    x_in_3_0_0_i_ce0 = inference_Loop_1_proc_U0_x_in_3_0_0_ce0.read();
}

void inference::thread_x_in_3_0_0_i_ce1() {
    x_in_3_0_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_3_0_0_i_d0() {
    x_in_3_0_0_i_d0 = inference_Loop_1_proc_U0_x_in_3_0_0_d0.read();
}

void inference::thread_x_in_3_0_0_i_we0() {
    x_in_3_0_0_i_we0 = inference_Loop_1_proc_U0_x_in_3_0_0_we0.read();
}

void inference::thread_x_in_3_0_0_i_write() {
    x_in_3_0_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_3_0_0.read();
}

void inference::thread_x_in_3_0_0_t_address0() {
    x_in_3_0_0_t_address0 = inference_conv2d_1_U0_x_3_0_0_address0.read();
}

void inference::thread_x_in_3_0_0_t_address1() {
    x_in_3_0_0_t_address1 = inference_conv2d_1_U0_x_3_0_0_address1.read();
}

void inference::thread_x_in_3_0_0_t_ce0() {
    x_in_3_0_0_t_ce0 = inference_conv2d_1_U0_x_3_0_0_ce0.read();
}

void inference::thread_x_in_3_0_0_t_ce1() {
    x_in_3_0_0_t_ce1 = inference_conv2d_1_U0_x_3_0_0_ce1.read();
}

void inference::thread_x_in_3_0_0_t_d0() {
    x_in_3_0_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_3_0_0_t_d1() {
    x_in_3_0_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_3_0_0_t_read() {
    x_in_3_0_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_3_0_0_t_we0() {
    x_in_3_0_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_3_0_0_t_we1() {
    x_in_3_0_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_3_1_0_U_ap_dummy_ce() {
    x_in_3_1_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_3_1_0_i_address0() {
    x_in_3_1_0_i_address0 = inference_Loop_1_proc_U0_x_in_3_1_0_address0.read();
}

void inference::thread_x_in_3_1_0_i_address1() {
    x_in_3_1_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_3_1_0_i_ce0() {
    x_in_3_1_0_i_ce0 = inference_Loop_1_proc_U0_x_in_3_1_0_ce0.read();
}

void inference::thread_x_in_3_1_0_i_ce1() {
    x_in_3_1_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_3_1_0_i_d0() {
    x_in_3_1_0_i_d0 = inference_Loop_1_proc_U0_x_in_3_1_0_d0.read();
}

void inference::thread_x_in_3_1_0_i_we0() {
    x_in_3_1_0_i_we0 = inference_Loop_1_proc_U0_x_in_3_1_0_we0.read();
}

void inference::thread_x_in_3_1_0_i_write() {
    x_in_3_1_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_3_1_0.read();
}

void inference::thread_x_in_3_1_0_t_address0() {
    x_in_3_1_0_t_address0 = inference_conv2d_1_U0_x_3_1_0_address0.read();
}

void inference::thread_x_in_3_1_0_t_address1() {
    x_in_3_1_0_t_address1 = inference_conv2d_1_U0_x_3_1_0_address1.read();
}

void inference::thread_x_in_3_1_0_t_ce0() {
    x_in_3_1_0_t_ce0 = inference_conv2d_1_U0_x_3_1_0_ce0.read();
}

void inference::thread_x_in_3_1_0_t_ce1() {
    x_in_3_1_0_t_ce1 = inference_conv2d_1_U0_x_3_1_0_ce1.read();
}

void inference::thread_x_in_3_1_0_t_d0() {
    x_in_3_1_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_3_1_0_t_d1() {
    x_in_3_1_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_3_1_0_t_read() {
    x_in_3_1_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_3_1_0_t_we0() {
    x_in_3_1_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_3_1_0_t_we1() {
    x_in_3_1_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_3_2_0_U_ap_dummy_ce() {
    x_in_3_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_3_2_0_i_address0() {
    x_in_3_2_0_i_address0 = inference_Loop_1_proc_U0_x_in_3_2_0_address0.read();
}

void inference::thread_x_in_3_2_0_i_address1() {
    x_in_3_2_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_3_2_0_i_ce0() {
    x_in_3_2_0_i_ce0 = inference_Loop_1_proc_U0_x_in_3_2_0_ce0.read();
}

void inference::thread_x_in_3_2_0_i_ce1() {
    x_in_3_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_3_2_0_i_d0() {
    x_in_3_2_0_i_d0 = inference_Loop_1_proc_U0_x_in_3_2_0_d0.read();
}

void inference::thread_x_in_3_2_0_i_we0() {
    x_in_3_2_0_i_we0 = inference_Loop_1_proc_U0_x_in_3_2_0_we0.read();
}

void inference::thread_x_in_3_2_0_i_write() {
    x_in_3_2_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_3_2_0.read();
}

void inference::thread_x_in_3_2_0_t_address0() {
    x_in_3_2_0_t_address0 = inference_conv2d_1_U0_x_3_2_0_address0.read();
}

void inference::thread_x_in_3_2_0_t_address1() {
    x_in_3_2_0_t_address1 = inference_conv2d_1_U0_x_3_2_0_address1.read();
}

void inference::thread_x_in_3_2_0_t_ce0() {
    x_in_3_2_0_t_ce0 = inference_conv2d_1_U0_x_3_2_0_ce0.read();
}

void inference::thread_x_in_3_2_0_t_ce1() {
    x_in_3_2_0_t_ce1 = inference_conv2d_1_U0_x_3_2_0_ce1.read();
}

void inference::thread_x_in_3_2_0_t_d0() {
    x_in_3_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_3_2_0_t_d1() {
    x_in_3_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_3_2_0_t_read() {
    x_in_3_2_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_3_2_0_t_we0() {
    x_in_3_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_3_2_0_t_we1() {
    x_in_3_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_3_3_0_U_ap_dummy_ce() {
    x_in_3_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_3_3_0_i_address0() {
    x_in_3_3_0_i_address0 = inference_Loop_1_proc_U0_x_in_3_3_0_address0.read();
}

void inference::thread_x_in_3_3_0_i_address1() {
    x_in_3_3_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_3_3_0_i_ce0() {
    x_in_3_3_0_i_ce0 = inference_Loop_1_proc_U0_x_in_3_3_0_ce0.read();
}

void inference::thread_x_in_3_3_0_i_ce1() {
    x_in_3_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_3_3_0_i_d0() {
    x_in_3_3_0_i_d0 = inference_Loop_1_proc_U0_x_in_3_3_0_d0.read();
}

void inference::thread_x_in_3_3_0_i_we0() {
    x_in_3_3_0_i_we0 = inference_Loop_1_proc_U0_x_in_3_3_0_we0.read();
}

void inference::thread_x_in_3_3_0_i_write() {
    x_in_3_3_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_3_3_0.read();
}

void inference::thread_x_in_3_3_0_t_address0() {
    x_in_3_3_0_t_address0 = inference_conv2d_1_U0_x_3_3_0_address0.read();
}

void inference::thread_x_in_3_3_0_t_address1() {
    x_in_3_3_0_t_address1 = inference_conv2d_1_U0_x_3_3_0_address1.read();
}

void inference::thread_x_in_3_3_0_t_ce0() {
    x_in_3_3_0_t_ce0 = inference_conv2d_1_U0_x_3_3_0_ce0.read();
}

void inference::thread_x_in_3_3_0_t_ce1() {
    x_in_3_3_0_t_ce1 = inference_conv2d_1_U0_x_3_3_0_ce1.read();
}

void inference::thread_x_in_3_3_0_t_d0() {
    x_in_3_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_3_3_0_t_d1() {
    x_in_3_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_3_3_0_t_read() {
    x_in_3_3_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_3_3_0_t_we0() {
    x_in_3_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_3_3_0_t_we1() {
    x_in_3_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_3_4_0_U_ap_dummy_ce() {
    x_in_3_4_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_3_4_0_i_address0() {
    x_in_3_4_0_i_address0 = inference_Loop_1_proc_U0_x_in_3_4_0_address0.read();
}

void inference::thread_x_in_3_4_0_i_address1() {
    x_in_3_4_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_3_4_0_i_ce0() {
    x_in_3_4_0_i_ce0 = inference_Loop_1_proc_U0_x_in_3_4_0_ce0.read();
}

void inference::thread_x_in_3_4_0_i_ce1() {
    x_in_3_4_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_3_4_0_i_d0() {
    x_in_3_4_0_i_d0 = inference_Loop_1_proc_U0_x_in_3_4_0_d0.read();
}

void inference::thread_x_in_3_4_0_i_we0() {
    x_in_3_4_0_i_we0 = inference_Loop_1_proc_U0_x_in_3_4_0_we0.read();
}

void inference::thread_x_in_3_4_0_i_write() {
    x_in_3_4_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_3_4_0.read();
}

void inference::thread_x_in_3_4_0_t_address0() {
    x_in_3_4_0_t_address0 = inference_conv2d_1_U0_x_3_4_0_address0.read();
}

void inference::thread_x_in_3_4_0_t_address1() {
    x_in_3_4_0_t_address1 = inference_conv2d_1_U0_x_3_4_0_address1.read();
}

void inference::thread_x_in_3_4_0_t_ce0() {
    x_in_3_4_0_t_ce0 = inference_conv2d_1_U0_x_3_4_0_ce0.read();
}

void inference::thread_x_in_3_4_0_t_ce1() {
    x_in_3_4_0_t_ce1 = inference_conv2d_1_U0_x_3_4_0_ce1.read();
}

void inference::thread_x_in_3_4_0_t_d0() {
    x_in_3_4_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_3_4_0_t_d1() {
    x_in_3_4_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_3_4_0_t_read() {
    x_in_3_4_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_3_4_0_t_we0() {
    x_in_3_4_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_3_4_0_t_we1() {
    x_in_3_4_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_4_0_0_U_ap_dummy_ce() {
    x_in_4_0_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_4_0_0_i_address0() {
    x_in_4_0_0_i_address0 = inference_Loop_1_proc_U0_x_in_4_0_0_address0.read();
}

void inference::thread_x_in_4_0_0_i_address1() {
    x_in_4_0_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_4_0_0_i_ce0() {
    x_in_4_0_0_i_ce0 = inference_Loop_1_proc_U0_x_in_4_0_0_ce0.read();
}

void inference::thread_x_in_4_0_0_i_ce1() {
    x_in_4_0_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_4_0_0_i_d0() {
    x_in_4_0_0_i_d0 = inference_Loop_1_proc_U0_x_in_4_0_0_d0.read();
}

void inference::thread_x_in_4_0_0_i_we0() {
    x_in_4_0_0_i_we0 = inference_Loop_1_proc_U0_x_in_4_0_0_we0.read();
}

void inference::thread_x_in_4_0_0_i_write() {
    x_in_4_0_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_4_0_0.read();
}

void inference::thread_x_in_4_0_0_t_address0() {
    x_in_4_0_0_t_address0 = inference_conv2d_1_U0_x_4_0_0_address0.read();
}

void inference::thread_x_in_4_0_0_t_address1() {
    x_in_4_0_0_t_address1 = inference_conv2d_1_U0_x_4_0_0_address1.read();
}

void inference::thread_x_in_4_0_0_t_ce0() {
    x_in_4_0_0_t_ce0 = inference_conv2d_1_U0_x_4_0_0_ce0.read();
}

void inference::thread_x_in_4_0_0_t_ce1() {
    x_in_4_0_0_t_ce1 = inference_conv2d_1_U0_x_4_0_0_ce1.read();
}

void inference::thread_x_in_4_0_0_t_d0() {
    x_in_4_0_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_4_0_0_t_d1() {
    x_in_4_0_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_4_0_0_t_read() {
    x_in_4_0_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_4_0_0_t_we0() {
    x_in_4_0_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_4_0_0_t_we1() {
    x_in_4_0_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_4_1_0_U_ap_dummy_ce() {
    x_in_4_1_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_4_1_0_i_address0() {
    x_in_4_1_0_i_address0 = inference_Loop_1_proc_U0_x_in_4_1_0_address0.read();
}

void inference::thread_x_in_4_1_0_i_address1() {
    x_in_4_1_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_4_1_0_i_ce0() {
    x_in_4_1_0_i_ce0 = inference_Loop_1_proc_U0_x_in_4_1_0_ce0.read();
}

void inference::thread_x_in_4_1_0_i_ce1() {
    x_in_4_1_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_4_1_0_i_d0() {
    x_in_4_1_0_i_d0 = inference_Loop_1_proc_U0_x_in_4_1_0_d0.read();
}

void inference::thread_x_in_4_1_0_i_we0() {
    x_in_4_1_0_i_we0 = inference_Loop_1_proc_U0_x_in_4_1_0_we0.read();
}

void inference::thread_x_in_4_1_0_i_write() {
    x_in_4_1_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_4_1_0.read();
}

void inference::thread_x_in_4_1_0_t_address0() {
    x_in_4_1_0_t_address0 = inference_conv2d_1_U0_x_4_1_0_address0.read();
}

void inference::thread_x_in_4_1_0_t_address1() {
    x_in_4_1_0_t_address1 = inference_conv2d_1_U0_x_4_1_0_address1.read();
}

void inference::thread_x_in_4_1_0_t_ce0() {
    x_in_4_1_0_t_ce0 = inference_conv2d_1_U0_x_4_1_0_ce0.read();
}

void inference::thread_x_in_4_1_0_t_ce1() {
    x_in_4_1_0_t_ce1 = inference_conv2d_1_U0_x_4_1_0_ce1.read();
}

void inference::thread_x_in_4_1_0_t_d0() {
    x_in_4_1_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_4_1_0_t_d1() {
    x_in_4_1_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_4_1_0_t_read() {
    x_in_4_1_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_4_1_0_t_we0() {
    x_in_4_1_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_4_1_0_t_we1() {
    x_in_4_1_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_4_2_0_U_ap_dummy_ce() {
    x_in_4_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_4_2_0_i_address0() {
    x_in_4_2_0_i_address0 = inference_Loop_1_proc_U0_x_in_4_2_0_address0.read();
}

void inference::thread_x_in_4_2_0_i_address1() {
    x_in_4_2_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_4_2_0_i_ce0() {
    x_in_4_2_0_i_ce0 = inference_Loop_1_proc_U0_x_in_4_2_0_ce0.read();
}

void inference::thread_x_in_4_2_0_i_ce1() {
    x_in_4_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_4_2_0_i_d0() {
    x_in_4_2_0_i_d0 = inference_Loop_1_proc_U0_x_in_4_2_0_d0.read();
}

void inference::thread_x_in_4_2_0_i_we0() {
    x_in_4_2_0_i_we0 = inference_Loop_1_proc_U0_x_in_4_2_0_we0.read();
}

void inference::thread_x_in_4_2_0_i_write() {
    x_in_4_2_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_4_2_0.read();
}

void inference::thread_x_in_4_2_0_t_address0() {
    x_in_4_2_0_t_address0 = inference_conv2d_1_U0_x_4_2_0_address0.read();
}

void inference::thread_x_in_4_2_0_t_address1() {
    x_in_4_2_0_t_address1 = inference_conv2d_1_U0_x_4_2_0_address1.read();
}

void inference::thread_x_in_4_2_0_t_ce0() {
    x_in_4_2_0_t_ce0 = inference_conv2d_1_U0_x_4_2_0_ce0.read();
}

void inference::thread_x_in_4_2_0_t_ce1() {
    x_in_4_2_0_t_ce1 = inference_conv2d_1_U0_x_4_2_0_ce1.read();
}

void inference::thread_x_in_4_2_0_t_d0() {
    x_in_4_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_4_2_0_t_d1() {
    x_in_4_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_4_2_0_t_read() {
    x_in_4_2_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_4_2_0_t_we0() {
    x_in_4_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_4_2_0_t_we1() {
    x_in_4_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_4_3_0_U_ap_dummy_ce() {
    x_in_4_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_4_3_0_i_address0() {
    x_in_4_3_0_i_address0 = inference_Loop_1_proc_U0_x_in_4_3_0_address0.read();
}

void inference::thread_x_in_4_3_0_i_address1() {
    x_in_4_3_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_4_3_0_i_ce0() {
    x_in_4_3_0_i_ce0 = inference_Loop_1_proc_U0_x_in_4_3_0_ce0.read();
}

void inference::thread_x_in_4_3_0_i_ce1() {
    x_in_4_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_4_3_0_i_d0() {
    x_in_4_3_0_i_d0 = inference_Loop_1_proc_U0_x_in_4_3_0_d0.read();
}

void inference::thread_x_in_4_3_0_i_we0() {
    x_in_4_3_0_i_we0 = inference_Loop_1_proc_U0_x_in_4_3_0_we0.read();
}

void inference::thread_x_in_4_3_0_i_write() {
    x_in_4_3_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_4_3_0.read();
}

void inference::thread_x_in_4_3_0_t_address0() {
    x_in_4_3_0_t_address0 = inference_conv2d_1_U0_x_4_3_0_address0.read();
}

void inference::thread_x_in_4_3_0_t_address1() {
    x_in_4_3_0_t_address1 = inference_conv2d_1_U0_x_4_3_0_address1.read();
}

void inference::thread_x_in_4_3_0_t_ce0() {
    x_in_4_3_0_t_ce0 = inference_conv2d_1_U0_x_4_3_0_ce0.read();
}

void inference::thread_x_in_4_3_0_t_ce1() {
    x_in_4_3_0_t_ce1 = inference_conv2d_1_U0_x_4_3_0_ce1.read();
}

void inference::thread_x_in_4_3_0_t_d0() {
    x_in_4_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_4_3_0_t_d1() {
    x_in_4_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_4_3_0_t_read() {
    x_in_4_3_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_x_in_4_3_0_t_we0() {
    x_in_4_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_4_3_0_t_we1() {
    x_in_4_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_x_in_4_4_0_U_ap_dummy_ce() {
    x_in_4_4_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_x_in_4_4_0_i_address0() {
    x_in_4_4_0_i_address0 = inference_Loop_1_proc_U0_x_in_4_4_0_address0.read();
}

void inference::thread_x_in_4_4_0_i_address1() {
    x_in_4_4_0_i_address1 = ap_const_lv5_0;
}

void inference::thread_x_in_4_4_0_i_ce0() {
    x_in_4_4_0_i_ce0 = inference_Loop_1_proc_U0_x_in_4_4_0_ce0.read();
}

}

