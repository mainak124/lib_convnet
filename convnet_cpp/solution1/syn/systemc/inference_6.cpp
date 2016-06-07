#include "inference.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference::thread_poolOut1_1_5_t_d0() {
    poolOut1_1_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_1_5_t_d1() {
    poolOut1_1_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_1_5_t_read() {
    poolOut1_1_5_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_1_5_t_we0() {
    poolOut1_1_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_1_5_t_we1() {
    poolOut1_1_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_0_U_ap_dummy_ce() {
    poolOut1_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_2_0_i_address0() {
    poolOut1_2_0_i_address0 = inference_maxPoolNxN_1_U0_out_feature_2_0_address0.read();
}

void inference::thread_poolOut1_2_0_i_address1() {
    poolOut1_2_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_2_0_i_ce0() {
    poolOut1_2_0_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_2_0_ce0.read();
}

void inference::thread_poolOut1_2_0_i_ce1() {
    poolOut1_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_0_i_d0() {
    poolOut1_2_0_i_d0 = inference_maxPoolNxN_1_U0_out_feature_2_0_d0.read();
}

void inference::thread_poolOut1_2_0_i_we0() {
    poolOut1_2_0_i_we0 = inference_maxPoolNxN_1_U0_out_feature_2_0_we0.read();
}

void inference::thread_poolOut1_2_0_i_write() {
    poolOut1_2_0_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_2_0.read();
}

void inference::thread_poolOut1_2_0_t_address0() {
    poolOut1_2_0_t_address0 = inference_conv2d_1_U0_x_2_0_address0.read();
}

void inference::thread_poolOut1_2_0_t_address1() {
    poolOut1_2_0_t_address1 = inference_conv2d_1_U0_x_2_0_address1.read();
}

void inference::thread_poolOut1_2_0_t_ce0() {
    poolOut1_2_0_t_ce0 = inference_conv2d_1_U0_x_2_0_ce0.read();
}

void inference::thread_poolOut1_2_0_t_ce1() {
    poolOut1_2_0_t_ce1 = inference_conv2d_1_U0_x_2_0_ce1.read();
}

void inference::thread_poolOut1_2_0_t_d0() {
    poolOut1_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_0_t_d1() {
    poolOut1_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_0_t_read() {
    poolOut1_2_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_2_0_t_we0() {
    poolOut1_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_0_t_we1() {
    poolOut1_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_1_U_ap_dummy_ce() {
    poolOut1_2_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_2_1_i_address0() {
    poolOut1_2_1_i_address0 = inference_maxPoolNxN_1_U0_out_feature_2_1_address0.read();
}

void inference::thread_poolOut1_2_1_i_address1() {
    poolOut1_2_1_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_2_1_i_ce0() {
    poolOut1_2_1_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_2_1_ce0.read();
}

void inference::thread_poolOut1_2_1_i_ce1() {
    poolOut1_2_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_1_i_d0() {
    poolOut1_2_1_i_d0 = inference_maxPoolNxN_1_U0_out_feature_2_1_d0.read();
}

void inference::thread_poolOut1_2_1_i_we0() {
    poolOut1_2_1_i_we0 = inference_maxPoolNxN_1_U0_out_feature_2_1_we0.read();
}

void inference::thread_poolOut1_2_1_i_write() {
    poolOut1_2_1_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_2_1.read();
}

void inference::thread_poolOut1_2_1_t_address0() {
    poolOut1_2_1_t_address0 = inference_conv2d_1_U0_x_2_1_address0.read();
}

void inference::thread_poolOut1_2_1_t_address1() {
    poolOut1_2_1_t_address1 = inference_conv2d_1_U0_x_2_1_address1.read();
}

void inference::thread_poolOut1_2_1_t_ce0() {
    poolOut1_2_1_t_ce0 = inference_conv2d_1_U0_x_2_1_ce0.read();
}

void inference::thread_poolOut1_2_1_t_ce1() {
    poolOut1_2_1_t_ce1 = inference_conv2d_1_U0_x_2_1_ce1.read();
}

void inference::thread_poolOut1_2_1_t_d0() {
    poolOut1_2_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_1_t_d1() {
    poolOut1_2_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_1_t_read() {
    poolOut1_2_1_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_2_1_t_we0() {
    poolOut1_2_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_1_t_we1() {
    poolOut1_2_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_2_U_ap_dummy_ce() {
    poolOut1_2_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_2_2_i_address0() {
    poolOut1_2_2_i_address0 = inference_maxPoolNxN_1_U0_out_feature_2_2_address0.read();
}

void inference::thread_poolOut1_2_2_i_address1() {
    poolOut1_2_2_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_2_2_i_ce0() {
    poolOut1_2_2_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_2_2_ce0.read();
}

void inference::thread_poolOut1_2_2_i_ce1() {
    poolOut1_2_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_2_i_d0() {
    poolOut1_2_2_i_d0 = inference_maxPoolNxN_1_U0_out_feature_2_2_d0.read();
}

void inference::thread_poolOut1_2_2_i_we0() {
    poolOut1_2_2_i_we0 = inference_maxPoolNxN_1_U0_out_feature_2_2_we0.read();
}

void inference::thread_poolOut1_2_2_i_write() {
    poolOut1_2_2_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_2_2.read();
}

void inference::thread_poolOut1_2_2_t_address0() {
    poolOut1_2_2_t_address0 = inference_conv2d_1_U0_x_2_2_address0.read();
}

void inference::thread_poolOut1_2_2_t_address1() {
    poolOut1_2_2_t_address1 = inference_conv2d_1_U0_x_2_2_address1.read();
}

void inference::thread_poolOut1_2_2_t_ce0() {
    poolOut1_2_2_t_ce0 = inference_conv2d_1_U0_x_2_2_ce0.read();
}

void inference::thread_poolOut1_2_2_t_ce1() {
    poolOut1_2_2_t_ce1 = inference_conv2d_1_U0_x_2_2_ce1.read();
}

void inference::thread_poolOut1_2_2_t_d0() {
    poolOut1_2_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_2_t_d1() {
    poolOut1_2_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_2_t_read() {
    poolOut1_2_2_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_2_2_t_we0() {
    poolOut1_2_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_2_t_we1() {
    poolOut1_2_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_3_U_ap_dummy_ce() {
    poolOut1_2_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_2_3_i_address0() {
    poolOut1_2_3_i_address0 = inference_maxPoolNxN_1_U0_out_feature_2_3_address0.read();
}

void inference::thread_poolOut1_2_3_i_address1() {
    poolOut1_2_3_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_2_3_i_ce0() {
    poolOut1_2_3_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_2_3_ce0.read();
}

void inference::thread_poolOut1_2_3_i_ce1() {
    poolOut1_2_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_3_i_d0() {
    poolOut1_2_3_i_d0 = inference_maxPoolNxN_1_U0_out_feature_2_3_d0.read();
}

void inference::thread_poolOut1_2_3_i_we0() {
    poolOut1_2_3_i_we0 = inference_maxPoolNxN_1_U0_out_feature_2_3_we0.read();
}

void inference::thread_poolOut1_2_3_i_write() {
    poolOut1_2_3_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_2_3.read();
}

void inference::thread_poolOut1_2_3_t_address0() {
    poolOut1_2_3_t_address0 = inference_conv2d_1_U0_x_2_3_address0.read();
}

void inference::thread_poolOut1_2_3_t_address1() {
    poolOut1_2_3_t_address1 = inference_conv2d_1_U0_x_2_3_address1.read();
}

void inference::thread_poolOut1_2_3_t_ce0() {
    poolOut1_2_3_t_ce0 = inference_conv2d_1_U0_x_2_3_ce0.read();
}

void inference::thread_poolOut1_2_3_t_ce1() {
    poolOut1_2_3_t_ce1 = inference_conv2d_1_U0_x_2_3_ce1.read();
}

void inference::thread_poolOut1_2_3_t_d0() {
    poolOut1_2_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_3_t_d1() {
    poolOut1_2_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_3_t_read() {
    poolOut1_2_3_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_2_3_t_we0() {
    poolOut1_2_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_3_t_we1() {
    poolOut1_2_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_4_U_ap_dummy_ce() {
    poolOut1_2_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_2_4_i_address0() {
    poolOut1_2_4_i_address0 = inference_maxPoolNxN_1_U0_out_feature_2_4_address0.read();
}

void inference::thread_poolOut1_2_4_i_address1() {
    poolOut1_2_4_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_2_4_i_ce0() {
    poolOut1_2_4_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_2_4_ce0.read();
}

void inference::thread_poolOut1_2_4_i_ce1() {
    poolOut1_2_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_4_i_d0() {
    poolOut1_2_4_i_d0 = inference_maxPoolNxN_1_U0_out_feature_2_4_d0.read();
}

void inference::thread_poolOut1_2_4_i_we0() {
    poolOut1_2_4_i_we0 = inference_maxPoolNxN_1_U0_out_feature_2_4_we0.read();
}

void inference::thread_poolOut1_2_4_i_write() {
    poolOut1_2_4_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_2_4.read();
}

void inference::thread_poolOut1_2_4_t_address0() {
    poolOut1_2_4_t_address0 = inference_conv2d_1_U0_x_2_4_address0.read();
}

void inference::thread_poolOut1_2_4_t_address1() {
    poolOut1_2_4_t_address1 = inference_conv2d_1_U0_x_2_4_address1.read();
}

void inference::thread_poolOut1_2_4_t_ce0() {
    poolOut1_2_4_t_ce0 = inference_conv2d_1_U0_x_2_4_ce0.read();
}

void inference::thread_poolOut1_2_4_t_ce1() {
    poolOut1_2_4_t_ce1 = inference_conv2d_1_U0_x_2_4_ce1.read();
}

void inference::thread_poolOut1_2_4_t_d0() {
    poolOut1_2_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_4_t_d1() {
    poolOut1_2_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_4_t_read() {
    poolOut1_2_4_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_2_4_t_we0() {
    poolOut1_2_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_4_t_we1() {
    poolOut1_2_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_5_U_ap_dummy_ce() {
    poolOut1_2_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_2_5_i_address0() {
    poolOut1_2_5_i_address0 = inference_maxPoolNxN_1_U0_out_feature_2_5_address0.read();
}

void inference::thread_poolOut1_2_5_i_address1() {
    poolOut1_2_5_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_2_5_i_ce0() {
    poolOut1_2_5_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_2_5_ce0.read();
}

void inference::thread_poolOut1_2_5_i_ce1() {
    poolOut1_2_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_5_i_d0() {
    poolOut1_2_5_i_d0 = inference_maxPoolNxN_1_U0_out_feature_2_5_d0.read();
}

void inference::thread_poolOut1_2_5_i_we0() {
    poolOut1_2_5_i_we0 = inference_maxPoolNxN_1_U0_out_feature_2_5_we0.read();
}

void inference::thread_poolOut1_2_5_i_write() {
    poolOut1_2_5_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_2_5.read();
}

void inference::thread_poolOut1_2_5_t_address0() {
    poolOut1_2_5_t_address0 = inference_conv2d_1_U0_x_2_5_address0.read();
}

void inference::thread_poolOut1_2_5_t_address1() {
    poolOut1_2_5_t_address1 = inference_conv2d_1_U0_x_2_5_address1.read();
}

void inference::thread_poolOut1_2_5_t_ce0() {
    poolOut1_2_5_t_ce0 = inference_conv2d_1_U0_x_2_5_ce0.read();
}

void inference::thread_poolOut1_2_5_t_ce1() {
    poolOut1_2_5_t_ce1 = inference_conv2d_1_U0_x_2_5_ce1.read();
}

void inference::thread_poolOut1_2_5_t_d0() {
    poolOut1_2_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_5_t_d1() {
    poolOut1_2_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_2_5_t_read() {
    poolOut1_2_5_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_2_5_t_we0() {
    poolOut1_2_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_2_5_t_we1() {
    poolOut1_2_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_0_U_ap_dummy_ce() {
    poolOut1_3_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_3_0_i_address0() {
    poolOut1_3_0_i_address0 = inference_maxPoolNxN_1_U0_out_feature_3_0_address0.read();
}

void inference::thread_poolOut1_3_0_i_address1() {
    poolOut1_3_0_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_3_0_i_ce0() {
    poolOut1_3_0_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_3_0_ce0.read();
}

void inference::thread_poolOut1_3_0_i_ce1() {
    poolOut1_3_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_0_i_d0() {
    poolOut1_3_0_i_d0 = inference_maxPoolNxN_1_U0_out_feature_3_0_d0.read();
}

void inference::thread_poolOut1_3_0_i_we0() {
    poolOut1_3_0_i_we0 = inference_maxPoolNxN_1_U0_out_feature_3_0_we0.read();
}

void inference::thread_poolOut1_3_0_i_write() {
    poolOut1_3_0_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_3_0.read();
}

void inference::thread_poolOut1_3_0_t_address0() {
    poolOut1_3_0_t_address0 = inference_conv2d_1_U0_x_3_0_address0.read();
}

void inference::thread_poolOut1_3_0_t_address1() {
    poolOut1_3_0_t_address1 = inference_conv2d_1_U0_x_3_0_address1.read();
}

void inference::thread_poolOut1_3_0_t_ce0() {
    poolOut1_3_0_t_ce0 = inference_conv2d_1_U0_x_3_0_ce0.read();
}

void inference::thread_poolOut1_3_0_t_ce1() {
    poolOut1_3_0_t_ce1 = inference_conv2d_1_U0_x_3_0_ce1.read();
}

void inference::thread_poolOut1_3_0_t_d0() {
    poolOut1_3_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_0_t_d1() {
    poolOut1_3_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_0_t_read() {
    poolOut1_3_0_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_3_0_t_we0() {
    poolOut1_3_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_0_t_we1() {
    poolOut1_3_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_1_U_ap_dummy_ce() {
    poolOut1_3_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_3_1_i_address0() {
    poolOut1_3_1_i_address0 = inference_maxPoolNxN_1_U0_out_feature_3_1_address0.read();
}

void inference::thread_poolOut1_3_1_i_address1() {
    poolOut1_3_1_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_3_1_i_ce0() {
    poolOut1_3_1_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_3_1_ce0.read();
}

void inference::thread_poolOut1_3_1_i_ce1() {
    poolOut1_3_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_1_i_d0() {
    poolOut1_3_1_i_d0 = inference_maxPoolNxN_1_U0_out_feature_3_1_d0.read();
}

void inference::thread_poolOut1_3_1_i_we0() {
    poolOut1_3_1_i_we0 = inference_maxPoolNxN_1_U0_out_feature_3_1_we0.read();
}

void inference::thread_poolOut1_3_1_i_write() {
    poolOut1_3_1_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_3_1.read();
}

void inference::thread_poolOut1_3_1_t_address0() {
    poolOut1_3_1_t_address0 = inference_conv2d_1_U0_x_3_1_address0.read();
}

void inference::thread_poolOut1_3_1_t_address1() {
    poolOut1_3_1_t_address1 = inference_conv2d_1_U0_x_3_1_address1.read();
}

void inference::thread_poolOut1_3_1_t_ce0() {
    poolOut1_3_1_t_ce0 = inference_conv2d_1_U0_x_3_1_ce0.read();
}

void inference::thread_poolOut1_3_1_t_ce1() {
    poolOut1_3_1_t_ce1 = inference_conv2d_1_U0_x_3_1_ce1.read();
}

void inference::thread_poolOut1_3_1_t_d0() {
    poolOut1_3_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_1_t_d1() {
    poolOut1_3_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_1_t_read() {
    poolOut1_3_1_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_3_1_t_we0() {
    poolOut1_3_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_1_t_we1() {
    poolOut1_3_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_2_U_ap_dummy_ce() {
    poolOut1_3_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_3_2_i_address0() {
    poolOut1_3_2_i_address0 = inference_maxPoolNxN_1_U0_out_feature_3_2_address0.read();
}

void inference::thread_poolOut1_3_2_i_address1() {
    poolOut1_3_2_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_3_2_i_ce0() {
    poolOut1_3_2_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_3_2_ce0.read();
}

void inference::thread_poolOut1_3_2_i_ce1() {
    poolOut1_3_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_2_i_d0() {
    poolOut1_3_2_i_d0 = inference_maxPoolNxN_1_U0_out_feature_3_2_d0.read();
}

void inference::thread_poolOut1_3_2_i_we0() {
    poolOut1_3_2_i_we0 = inference_maxPoolNxN_1_U0_out_feature_3_2_we0.read();
}

void inference::thread_poolOut1_3_2_i_write() {
    poolOut1_3_2_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_3_2.read();
}

void inference::thread_poolOut1_3_2_t_address0() {
    poolOut1_3_2_t_address0 = inference_conv2d_1_U0_x_3_2_address0.read();
}

void inference::thread_poolOut1_3_2_t_address1() {
    poolOut1_3_2_t_address1 = inference_conv2d_1_U0_x_3_2_address1.read();
}

void inference::thread_poolOut1_3_2_t_ce0() {
    poolOut1_3_2_t_ce0 = inference_conv2d_1_U0_x_3_2_ce0.read();
}

void inference::thread_poolOut1_3_2_t_ce1() {
    poolOut1_3_2_t_ce1 = inference_conv2d_1_U0_x_3_2_ce1.read();
}

void inference::thread_poolOut1_3_2_t_d0() {
    poolOut1_3_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_2_t_d1() {
    poolOut1_3_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_2_t_read() {
    poolOut1_3_2_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_3_2_t_we0() {
    poolOut1_3_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_2_t_we1() {
    poolOut1_3_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_3_U_ap_dummy_ce() {
    poolOut1_3_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_3_3_i_address0() {
    poolOut1_3_3_i_address0 = inference_maxPoolNxN_1_U0_out_feature_3_3_address0.read();
}

void inference::thread_poolOut1_3_3_i_address1() {
    poolOut1_3_3_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_3_3_i_ce0() {
    poolOut1_3_3_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_3_3_ce0.read();
}

void inference::thread_poolOut1_3_3_i_ce1() {
    poolOut1_3_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_3_i_d0() {
    poolOut1_3_3_i_d0 = inference_maxPoolNxN_1_U0_out_feature_3_3_d0.read();
}

void inference::thread_poolOut1_3_3_i_we0() {
    poolOut1_3_3_i_we0 = inference_maxPoolNxN_1_U0_out_feature_3_3_we0.read();
}

void inference::thread_poolOut1_3_3_i_write() {
    poolOut1_3_3_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_3_3.read();
}

void inference::thread_poolOut1_3_3_t_address0() {
    poolOut1_3_3_t_address0 = inference_conv2d_1_U0_x_3_3_address0.read();
}

void inference::thread_poolOut1_3_3_t_address1() {
    poolOut1_3_3_t_address1 = inference_conv2d_1_U0_x_3_3_address1.read();
}

void inference::thread_poolOut1_3_3_t_ce0() {
    poolOut1_3_3_t_ce0 = inference_conv2d_1_U0_x_3_3_ce0.read();
}

void inference::thread_poolOut1_3_3_t_ce1() {
    poolOut1_3_3_t_ce1 = inference_conv2d_1_U0_x_3_3_ce1.read();
}

void inference::thread_poolOut1_3_3_t_d0() {
    poolOut1_3_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_3_t_d1() {
    poolOut1_3_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_3_t_read() {
    poolOut1_3_3_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_3_3_t_we0() {
    poolOut1_3_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_3_t_we1() {
    poolOut1_3_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_4_U_ap_dummy_ce() {
    poolOut1_3_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_3_4_i_address0() {
    poolOut1_3_4_i_address0 = inference_maxPoolNxN_1_U0_out_feature_3_4_address0.read();
}

void inference::thread_poolOut1_3_4_i_address1() {
    poolOut1_3_4_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_3_4_i_ce0() {
    poolOut1_3_4_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_3_4_ce0.read();
}

void inference::thread_poolOut1_3_4_i_ce1() {
    poolOut1_3_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_4_i_d0() {
    poolOut1_3_4_i_d0 = inference_maxPoolNxN_1_U0_out_feature_3_4_d0.read();
}

void inference::thread_poolOut1_3_4_i_we0() {
    poolOut1_3_4_i_we0 = inference_maxPoolNxN_1_U0_out_feature_3_4_we0.read();
}

void inference::thread_poolOut1_3_4_i_write() {
    poolOut1_3_4_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_3_4.read();
}

void inference::thread_poolOut1_3_4_t_address0() {
    poolOut1_3_4_t_address0 = inference_conv2d_1_U0_x_3_4_address0.read();
}

void inference::thread_poolOut1_3_4_t_address1() {
    poolOut1_3_4_t_address1 = inference_conv2d_1_U0_x_3_4_address1.read();
}

void inference::thread_poolOut1_3_4_t_ce0() {
    poolOut1_3_4_t_ce0 = inference_conv2d_1_U0_x_3_4_ce0.read();
}

void inference::thread_poolOut1_3_4_t_ce1() {
    poolOut1_3_4_t_ce1 = inference_conv2d_1_U0_x_3_4_ce1.read();
}

void inference::thread_poolOut1_3_4_t_d0() {
    poolOut1_3_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_4_t_d1() {
    poolOut1_3_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_4_t_read() {
    poolOut1_3_4_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_3_4_t_we0() {
    poolOut1_3_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_4_t_we1() {
    poolOut1_3_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_5_U_ap_dummy_ce() {
    poolOut1_3_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_3_5_i_address0() {
    poolOut1_3_5_i_address0 = inference_maxPoolNxN_1_U0_out_feature_3_5_address0.read();
}

void inference::thread_poolOut1_3_5_i_address1() {
    poolOut1_3_5_i_address1 = ap_const_lv6_0;
}

void inference::thread_poolOut1_3_5_i_ce0() {
    poolOut1_3_5_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_3_5_ce0.read();
}

void inference::thread_poolOut1_3_5_i_ce1() {
    poolOut1_3_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_5_i_d0() {
    poolOut1_3_5_i_d0 = inference_maxPoolNxN_1_U0_out_feature_3_5_d0.read();
}

void inference::thread_poolOut1_3_5_i_we0() {
    poolOut1_3_5_i_we0 = inference_maxPoolNxN_1_U0_out_feature_3_5_we0.read();
}

void inference::thread_poolOut1_3_5_i_write() {
    poolOut1_3_5_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_3_5.read();
}

void inference::thread_poolOut1_3_5_t_address0() {
    poolOut1_3_5_t_address0 = inference_conv2d_1_U0_x_3_5_address0.read();
}

void inference::thread_poolOut1_3_5_t_address1() {
    poolOut1_3_5_t_address1 = inference_conv2d_1_U0_x_3_5_address1.read();
}

void inference::thread_poolOut1_3_5_t_ce0() {
    poolOut1_3_5_t_ce0 = inference_conv2d_1_U0_x_3_5_ce0.read();
}

void inference::thread_poolOut1_3_5_t_ce1() {
    poolOut1_3_5_t_ce1 = inference_conv2d_1_U0_x_3_5_ce1.read();
}

void inference::thread_poolOut1_3_5_t_d0() {
    poolOut1_3_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_5_t_d1() {
    poolOut1_3_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_3_5_t_read() {
    poolOut1_3_5_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_3_5_t_we0() {
    poolOut1_3_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_3_5_t_we1() {
    poolOut1_3_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut1_4_U_ap_dummy_ce() {
    poolOut1_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut1_4_i_address0() {
    poolOut1_4_i_address0 = inference_maxPoolNxN_1_U0_out_feature_4_address0.read();
}

void inference::thread_poolOut1_4_i_address1() {
    poolOut1_4_i_address1 = inference_maxPoolNxN_1_U0_out_feature_4_address1.read();
}

void inference::thread_poolOut1_4_i_ce0() {
    poolOut1_4_i_ce0 = inference_maxPoolNxN_1_U0_out_feature_4_ce0.read();
}

void inference::thread_poolOut1_4_i_ce1() {
    poolOut1_4_i_ce1 = inference_maxPoolNxN_1_U0_out_feature_4_ce1.read();
}

void inference::thread_poolOut1_4_i_d0() {
    poolOut1_4_i_d0 = inference_maxPoolNxN_1_U0_out_feature_4_d0.read();
}

void inference::thread_poolOut1_4_i_d1() {
    poolOut1_4_i_d1 = inference_maxPoolNxN_1_U0_out_feature_4_d1.read();
}

void inference::thread_poolOut1_4_i_we0() {
    poolOut1_4_i_we0 = inference_maxPoolNxN_1_U0_out_feature_4_we0.read();
}

void inference::thread_poolOut1_4_i_we1() {
    poolOut1_4_i_we1 = inference_maxPoolNxN_1_U0_out_feature_4_we1.read();
}

void inference::thread_poolOut1_4_i_write() {
    poolOut1_4_i_write = ap_chn_write_inference_maxPoolNxN_1_U0_poolOut1_4.read();
}

void inference::thread_poolOut1_4_t_address0() {
    poolOut1_4_t_address0 = inference_conv2d_1_U0_x_4_address0.read();
}

void inference::thread_poolOut1_4_t_address1() {
    poolOut1_4_t_address1 = inference_conv2d_1_U0_x_4_address1.read();
}

void inference::thread_poolOut1_4_t_ce0() {
    poolOut1_4_t_ce0 = inference_conv2d_1_U0_x_4_ce0.read();
}

void inference::thread_poolOut1_4_t_ce1() {
    poolOut1_4_t_ce1 = inference_conv2d_1_U0_x_4_ce1.read();
}

void inference::thread_poolOut1_4_t_d0() {
    poolOut1_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut1_4_t_d1() {
    poolOut1_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut1_4_t_read() {
    poolOut1_4_t_read = inference_conv2d_1_U0_ap_ready.read();
}

void inference::thread_poolOut1_4_t_we0() {
    poolOut1_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut1_4_t_we1() {
    poolOut1_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_0_U_ap_dummy_ce() {
    poolOut2_0_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_0_i_address0() {
    poolOut2_0_0_i_address0 = inference_maxPoolNxN_U0_out_feature_0_0_address0.read();
}

void inference::thread_poolOut2_0_0_i_address1() {
    poolOut2_0_0_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_0_i_ce0() {
    poolOut2_0_0_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_0_ce0.read();
}

void inference::thread_poolOut2_0_0_i_ce1() {
    poolOut2_0_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_0_i_d0() {
    poolOut2_0_0_i_d0 = inference_maxPoolNxN_U0_out_feature_0_0_d0.read();
}

void inference::thread_poolOut2_0_0_i_we0() {
    poolOut2_0_0_i_we0 = inference_maxPoolNxN_U0_out_feature_0_0_we0.read();
}

void inference::thread_poolOut2_0_0_i_write() {
    poolOut2_0_0_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_0.read();
}

void inference::thread_poolOut2_0_0_t_address0() {
    poolOut2_0_0_t_address0 = inference_conv2d_U0_x_0_0_address0.read();
}

void inference::thread_poolOut2_0_0_t_address1() {
    poolOut2_0_0_t_address1 = inference_conv2d_U0_x_0_0_address1.read();
}

void inference::thread_poolOut2_0_0_t_ce0() {
    poolOut2_0_0_t_ce0 = inference_conv2d_U0_x_0_0_ce0.read();
}

void inference::thread_poolOut2_0_0_t_ce1() {
    poolOut2_0_0_t_ce1 = inference_conv2d_U0_x_0_0_ce1.read();
}

void inference::thread_poolOut2_0_0_t_d0() {
    poolOut2_0_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_0_t_d1() {
    poolOut2_0_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_0_t_read() {
    poolOut2_0_0_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_0_t_we0() {
    poolOut2_0_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_0_t_we1() {
    poolOut2_0_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_10_U_ap_dummy_ce() {
    poolOut2_0_10_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_10_i_address0() {
    poolOut2_0_10_i_address0 = inference_maxPoolNxN_U0_out_feature_0_10_address0.read();
}

void inference::thread_poolOut2_0_10_i_address1() {
    poolOut2_0_10_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_10_i_ce0() {
    poolOut2_0_10_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_10_ce0.read();
}

void inference::thread_poolOut2_0_10_i_ce1() {
    poolOut2_0_10_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_10_i_d0() {
    poolOut2_0_10_i_d0 = inference_maxPoolNxN_U0_out_feature_0_10_d0.read();
}

void inference::thread_poolOut2_0_10_i_we0() {
    poolOut2_0_10_i_we0 = inference_maxPoolNxN_U0_out_feature_0_10_we0.read();
}

void inference::thread_poolOut2_0_10_i_write() {
    poolOut2_0_10_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_10.read();
}

void inference::thread_poolOut2_0_10_t_address0() {
    poolOut2_0_10_t_address0 = inference_conv2d_U0_x_0_10_address0.read();
}

void inference::thread_poolOut2_0_10_t_address1() {
    poolOut2_0_10_t_address1 = inference_conv2d_U0_x_0_10_address1.read();
}

void inference::thread_poolOut2_0_10_t_ce0() {
    poolOut2_0_10_t_ce0 = inference_conv2d_U0_x_0_10_ce0.read();
}

void inference::thread_poolOut2_0_10_t_ce1() {
    poolOut2_0_10_t_ce1 = inference_conv2d_U0_x_0_10_ce1.read();
}

void inference::thread_poolOut2_0_10_t_d0() {
    poolOut2_0_10_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_10_t_d1() {
    poolOut2_0_10_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_10_t_read() {
    poolOut2_0_10_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_10_t_we0() {
    poolOut2_0_10_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_10_t_we1() {
    poolOut2_0_10_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_11_U_ap_dummy_ce() {
    poolOut2_0_11_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_11_i_address0() {
    poolOut2_0_11_i_address0 = inference_maxPoolNxN_U0_out_feature_0_11_address0.read();
}

void inference::thread_poolOut2_0_11_i_address1() {
    poolOut2_0_11_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_11_i_ce0() {
    poolOut2_0_11_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_11_ce0.read();
}

void inference::thread_poolOut2_0_11_i_ce1() {
    poolOut2_0_11_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_11_i_d0() {
    poolOut2_0_11_i_d0 = inference_maxPoolNxN_U0_out_feature_0_11_d0.read();
}

void inference::thread_poolOut2_0_11_i_we0() {
    poolOut2_0_11_i_we0 = inference_maxPoolNxN_U0_out_feature_0_11_we0.read();
}

void inference::thread_poolOut2_0_11_i_write() {
    poolOut2_0_11_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_11.read();
}

void inference::thread_poolOut2_0_11_t_address0() {
    poolOut2_0_11_t_address0 = inference_conv2d_U0_x_0_11_address0.read();
}

void inference::thread_poolOut2_0_11_t_address1() {
    poolOut2_0_11_t_address1 = inference_conv2d_U0_x_0_11_address1.read();
}

void inference::thread_poolOut2_0_11_t_ce0() {
    poolOut2_0_11_t_ce0 = inference_conv2d_U0_x_0_11_ce0.read();
}

void inference::thread_poolOut2_0_11_t_ce1() {
    poolOut2_0_11_t_ce1 = inference_conv2d_U0_x_0_11_ce1.read();
}

void inference::thread_poolOut2_0_11_t_d0() {
    poolOut2_0_11_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_11_t_d1() {
    poolOut2_0_11_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_11_t_read() {
    poolOut2_0_11_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_11_t_we0() {
    poolOut2_0_11_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_11_t_we1() {
    poolOut2_0_11_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_12_U_ap_dummy_ce() {
    poolOut2_0_12_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_12_i_address0() {
    poolOut2_0_12_i_address0 = inference_maxPoolNxN_U0_out_feature_0_12_address0.read();
}

void inference::thread_poolOut2_0_12_i_address1() {
    poolOut2_0_12_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_12_i_ce0() {
    poolOut2_0_12_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_12_ce0.read();
}

void inference::thread_poolOut2_0_12_i_ce1() {
    poolOut2_0_12_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_12_i_d0() {
    poolOut2_0_12_i_d0 = inference_maxPoolNxN_U0_out_feature_0_12_d0.read();
}

void inference::thread_poolOut2_0_12_i_we0() {
    poolOut2_0_12_i_we0 = inference_maxPoolNxN_U0_out_feature_0_12_we0.read();
}

void inference::thread_poolOut2_0_12_i_write() {
    poolOut2_0_12_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_12.read();
}

void inference::thread_poolOut2_0_12_t_address0() {
    poolOut2_0_12_t_address0 = inference_conv2d_U0_x_0_12_address0.read();
}

void inference::thread_poolOut2_0_12_t_address1() {
    poolOut2_0_12_t_address1 = inference_conv2d_U0_x_0_12_address1.read();
}

void inference::thread_poolOut2_0_12_t_ce0() {
    poolOut2_0_12_t_ce0 = inference_conv2d_U0_x_0_12_ce0.read();
}

void inference::thread_poolOut2_0_12_t_ce1() {
    poolOut2_0_12_t_ce1 = inference_conv2d_U0_x_0_12_ce1.read();
}

void inference::thread_poolOut2_0_12_t_d0() {
    poolOut2_0_12_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_12_t_d1() {
    poolOut2_0_12_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_12_t_read() {
    poolOut2_0_12_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_12_t_we0() {
    poolOut2_0_12_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_12_t_we1() {
    poolOut2_0_12_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_13_U_ap_dummy_ce() {
    poolOut2_0_13_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_13_i_address0() {
    poolOut2_0_13_i_address0 = inference_maxPoolNxN_U0_out_feature_0_13_address0.read();
}

void inference::thread_poolOut2_0_13_i_address1() {
    poolOut2_0_13_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_13_i_ce0() {
    poolOut2_0_13_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_13_ce0.read();
}

void inference::thread_poolOut2_0_13_i_ce1() {
    poolOut2_0_13_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_13_i_d0() {
    poolOut2_0_13_i_d0 = inference_maxPoolNxN_U0_out_feature_0_13_d0.read();
}

void inference::thread_poolOut2_0_13_i_we0() {
    poolOut2_0_13_i_we0 = inference_maxPoolNxN_U0_out_feature_0_13_we0.read();
}

void inference::thread_poolOut2_0_13_i_write() {
    poolOut2_0_13_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_13.read();
}

void inference::thread_poolOut2_0_13_t_address0() {
    poolOut2_0_13_t_address0 = inference_conv2d_U0_x_0_13_address0.read();
}

void inference::thread_poolOut2_0_13_t_address1() {
    poolOut2_0_13_t_address1 = inference_conv2d_U0_x_0_13_address1.read();
}

void inference::thread_poolOut2_0_13_t_ce0() {
    poolOut2_0_13_t_ce0 = inference_conv2d_U0_x_0_13_ce0.read();
}

void inference::thread_poolOut2_0_13_t_ce1() {
    poolOut2_0_13_t_ce1 = inference_conv2d_U0_x_0_13_ce1.read();
}

void inference::thread_poolOut2_0_13_t_d0() {
    poolOut2_0_13_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_13_t_d1() {
    poolOut2_0_13_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_13_t_read() {
    poolOut2_0_13_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_13_t_we0() {
    poolOut2_0_13_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_13_t_we1() {
    poolOut2_0_13_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_14_U_ap_dummy_ce() {
    poolOut2_0_14_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_14_i_address0() {
    poolOut2_0_14_i_address0 = inference_maxPoolNxN_U0_out_feature_0_14_address0.read();
}

void inference::thread_poolOut2_0_14_i_address1() {
    poolOut2_0_14_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_14_i_ce0() {
    poolOut2_0_14_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_14_ce0.read();
}

void inference::thread_poolOut2_0_14_i_ce1() {
    poolOut2_0_14_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_14_i_d0() {
    poolOut2_0_14_i_d0 = inference_maxPoolNxN_U0_out_feature_0_14_d0.read();
}

void inference::thread_poolOut2_0_14_i_we0() {
    poolOut2_0_14_i_we0 = inference_maxPoolNxN_U0_out_feature_0_14_we0.read();
}

void inference::thread_poolOut2_0_14_i_write() {
    poolOut2_0_14_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_14.read();
}

void inference::thread_poolOut2_0_14_t_address0() {
    poolOut2_0_14_t_address0 = inference_conv2d_U0_x_0_14_address0.read();
}

void inference::thread_poolOut2_0_14_t_address1() {
    poolOut2_0_14_t_address1 = inference_conv2d_U0_x_0_14_address1.read();
}

void inference::thread_poolOut2_0_14_t_ce0() {
    poolOut2_0_14_t_ce0 = inference_conv2d_U0_x_0_14_ce0.read();
}

void inference::thread_poolOut2_0_14_t_ce1() {
    poolOut2_0_14_t_ce1 = inference_conv2d_U0_x_0_14_ce1.read();
}

void inference::thread_poolOut2_0_14_t_d0() {
    poolOut2_0_14_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_14_t_d1() {
    poolOut2_0_14_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_14_t_read() {
    poolOut2_0_14_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_14_t_we0() {
    poolOut2_0_14_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_14_t_we1() {
    poolOut2_0_14_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_15_U_ap_dummy_ce() {
    poolOut2_0_15_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_15_i_address0() {
    poolOut2_0_15_i_address0 = inference_maxPoolNxN_U0_out_feature_0_15_address0.read();
}

void inference::thread_poolOut2_0_15_i_address1() {
    poolOut2_0_15_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_15_i_ce0() {
    poolOut2_0_15_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_15_ce0.read();
}

void inference::thread_poolOut2_0_15_i_ce1() {
    poolOut2_0_15_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_15_i_d0() {
    poolOut2_0_15_i_d0 = inference_maxPoolNxN_U0_out_feature_0_15_d0.read();
}

void inference::thread_poolOut2_0_15_i_we0() {
    poolOut2_0_15_i_we0 = inference_maxPoolNxN_U0_out_feature_0_15_we0.read();
}

void inference::thread_poolOut2_0_15_i_write() {
    poolOut2_0_15_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_15.read();
}

void inference::thread_poolOut2_0_15_t_address0() {
    poolOut2_0_15_t_address0 = inference_conv2d_U0_x_0_15_address0.read();
}

void inference::thread_poolOut2_0_15_t_address1() {
    poolOut2_0_15_t_address1 = inference_conv2d_U0_x_0_15_address1.read();
}

void inference::thread_poolOut2_0_15_t_ce0() {
    poolOut2_0_15_t_ce0 = inference_conv2d_U0_x_0_15_ce0.read();
}

void inference::thread_poolOut2_0_15_t_ce1() {
    poolOut2_0_15_t_ce1 = inference_conv2d_U0_x_0_15_ce1.read();
}

void inference::thread_poolOut2_0_15_t_d0() {
    poolOut2_0_15_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_15_t_d1() {
    poolOut2_0_15_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_15_t_read() {
    poolOut2_0_15_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_15_t_we0() {
    poolOut2_0_15_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_15_t_we1() {
    poolOut2_0_15_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_1_U_ap_dummy_ce() {
    poolOut2_0_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_1_i_address0() {
    poolOut2_0_1_i_address0 = inference_maxPoolNxN_U0_out_feature_0_1_address0.read();
}

void inference::thread_poolOut2_0_1_i_address1() {
    poolOut2_0_1_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_1_i_ce0() {
    poolOut2_0_1_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_1_ce0.read();
}

void inference::thread_poolOut2_0_1_i_ce1() {
    poolOut2_0_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_1_i_d0() {
    poolOut2_0_1_i_d0 = inference_maxPoolNxN_U0_out_feature_0_1_d0.read();
}

void inference::thread_poolOut2_0_1_i_we0() {
    poolOut2_0_1_i_we0 = inference_maxPoolNxN_U0_out_feature_0_1_we0.read();
}

void inference::thread_poolOut2_0_1_i_write() {
    poolOut2_0_1_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_1.read();
}

void inference::thread_poolOut2_0_1_t_address0() {
    poolOut2_0_1_t_address0 = inference_conv2d_U0_x_0_1_address0.read();
}

void inference::thread_poolOut2_0_1_t_address1() {
    poolOut2_0_1_t_address1 = inference_conv2d_U0_x_0_1_address1.read();
}

void inference::thread_poolOut2_0_1_t_ce0() {
    poolOut2_0_1_t_ce0 = inference_conv2d_U0_x_0_1_ce0.read();
}

void inference::thread_poolOut2_0_1_t_ce1() {
    poolOut2_0_1_t_ce1 = inference_conv2d_U0_x_0_1_ce1.read();
}

void inference::thread_poolOut2_0_1_t_d0() {
    poolOut2_0_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_1_t_d1() {
    poolOut2_0_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_1_t_read() {
    poolOut2_0_1_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_1_t_we0() {
    poolOut2_0_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_1_t_we1() {
    poolOut2_0_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_2_U_ap_dummy_ce() {
    poolOut2_0_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_2_i_address0() {
    poolOut2_0_2_i_address0 = inference_maxPoolNxN_U0_out_feature_0_2_address0.read();
}

void inference::thread_poolOut2_0_2_i_address1() {
    poolOut2_0_2_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_2_i_ce0() {
    poolOut2_0_2_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_2_ce0.read();
}

void inference::thread_poolOut2_0_2_i_ce1() {
    poolOut2_0_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_2_i_d0() {
    poolOut2_0_2_i_d0 = inference_maxPoolNxN_U0_out_feature_0_2_d0.read();
}

void inference::thread_poolOut2_0_2_i_we0() {
    poolOut2_0_2_i_we0 = inference_maxPoolNxN_U0_out_feature_0_2_we0.read();
}

void inference::thread_poolOut2_0_2_i_write() {
    poolOut2_0_2_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_2.read();
}

void inference::thread_poolOut2_0_2_t_address0() {
    poolOut2_0_2_t_address0 = inference_conv2d_U0_x_0_2_address0.read();
}

void inference::thread_poolOut2_0_2_t_address1() {
    poolOut2_0_2_t_address1 = inference_conv2d_U0_x_0_2_address1.read();
}

void inference::thread_poolOut2_0_2_t_ce0() {
    poolOut2_0_2_t_ce0 = inference_conv2d_U0_x_0_2_ce0.read();
}

void inference::thread_poolOut2_0_2_t_ce1() {
    poolOut2_0_2_t_ce1 = inference_conv2d_U0_x_0_2_ce1.read();
}

void inference::thread_poolOut2_0_2_t_d0() {
    poolOut2_0_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_2_t_d1() {
    poolOut2_0_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_2_t_read() {
    poolOut2_0_2_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_2_t_we0() {
    poolOut2_0_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_2_t_we1() {
    poolOut2_0_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_3_U_ap_dummy_ce() {
    poolOut2_0_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_3_i_address0() {
    poolOut2_0_3_i_address0 = inference_maxPoolNxN_U0_out_feature_0_3_address0.read();
}

void inference::thread_poolOut2_0_3_i_address1() {
    poolOut2_0_3_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_3_i_ce0() {
    poolOut2_0_3_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_3_ce0.read();
}

void inference::thread_poolOut2_0_3_i_ce1() {
    poolOut2_0_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_3_i_d0() {
    poolOut2_0_3_i_d0 = inference_maxPoolNxN_U0_out_feature_0_3_d0.read();
}

void inference::thread_poolOut2_0_3_i_we0() {
    poolOut2_0_3_i_we0 = inference_maxPoolNxN_U0_out_feature_0_3_we0.read();
}

void inference::thread_poolOut2_0_3_i_write() {
    poolOut2_0_3_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_3.read();
}

void inference::thread_poolOut2_0_3_t_address0() {
    poolOut2_0_3_t_address0 = inference_conv2d_U0_x_0_3_address0.read();
}

void inference::thread_poolOut2_0_3_t_address1() {
    poolOut2_0_3_t_address1 = inference_conv2d_U0_x_0_3_address1.read();
}

void inference::thread_poolOut2_0_3_t_ce0() {
    poolOut2_0_3_t_ce0 = inference_conv2d_U0_x_0_3_ce0.read();
}

void inference::thread_poolOut2_0_3_t_ce1() {
    poolOut2_0_3_t_ce1 = inference_conv2d_U0_x_0_3_ce1.read();
}

void inference::thread_poolOut2_0_3_t_d0() {
    poolOut2_0_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_3_t_d1() {
    poolOut2_0_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_3_t_read() {
    poolOut2_0_3_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_3_t_we0() {
    poolOut2_0_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_3_t_we1() {
    poolOut2_0_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_4_U_ap_dummy_ce() {
    poolOut2_0_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_4_i_address0() {
    poolOut2_0_4_i_address0 = inference_maxPoolNxN_U0_out_feature_0_4_address0.read();
}

void inference::thread_poolOut2_0_4_i_address1() {
    poolOut2_0_4_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_4_i_ce0() {
    poolOut2_0_4_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_4_ce0.read();
}

void inference::thread_poolOut2_0_4_i_ce1() {
    poolOut2_0_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_4_i_d0() {
    poolOut2_0_4_i_d0 = inference_maxPoolNxN_U0_out_feature_0_4_d0.read();
}

void inference::thread_poolOut2_0_4_i_we0() {
    poolOut2_0_4_i_we0 = inference_maxPoolNxN_U0_out_feature_0_4_we0.read();
}

void inference::thread_poolOut2_0_4_i_write() {
    poolOut2_0_4_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_4.read();
}

void inference::thread_poolOut2_0_4_t_address0() {
    poolOut2_0_4_t_address0 = inference_conv2d_U0_x_0_4_address0.read();
}

void inference::thread_poolOut2_0_4_t_address1() {
    poolOut2_0_4_t_address1 = inference_conv2d_U0_x_0_4_address1.read();
}

void inference::thread_poolOut2_0_4_t_ce0() {
    poolOut2_0_4_t_ce0 = inference_conv2d_U0_x_0_4_ce0.read();
}

void inference::thread_poolOut2_0_4_t_ce1() {
    poolOut2_0_4_t_ce1 = inference_conv2d_U0_x_0_4_ce1.read();
}

void inference::thread_poolOut2_0_4_t_d0() {
    poolOut2_0_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_4_t_d1() {
    poolOut2_0_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_4_t_read() {
    poolOut2_0_4_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_4_t_we0() {
    poolOut2_0_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_4_t_we1() {
    poolOut2_0_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_5_U_ap_dummy_ce() {
    poolOut2_0_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_5_i_address0() {
    poolOut2_0_5_i_address0 = inference_maxPoolNxN_U0_out_feature_0_5_address0.read();
}

void inference::thread_poolOut2_0_5_i_address1() {
    poolOut2_0_5_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_5_i_ce0() {
    poolOut2_0_5_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_5_ce0.read();
}

void inference::thread_poolOut2_0_5_i_ce1() {
    poolOut2_0_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_5_i_d0() {
    poolOut2_0_5_i_d0 = inference_maxPoolNxN_U0_out_feature_0_5_d0.read();
}

void inference::thread_poolOut2_0_5_i_we0() {
    poolOut2_0_5_i_we0 = inference_maxPoolNxN_U0_out_feature_0_5_we0.read();
}

void inference::thread_poolOut2_0_5_i_write() {
    poolOut2_0_5_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_5.read();
}

void inference::thread_poolOut2_0_5_t_address0() {
    poolOut2_0_5_t_address0 = inference_conv2d_U0_x_0_5_address0.read();
}

void inference::thread_poolOut2_0_5_t_address1() {
    poolOut2_0_5_t_address1 = inference_conv2d_U0_x_0_5_address1.read();
}

void inference::thread_poolOut2_0_5_t_ce0() {
    poolOut2_0_5_t_ce0 = inference_conv2d_U0_x_0_5_ce0.read();
}

void inference::thread_poolOut2_0_5_t_ce1() {
    poolOut2_0_5_t_ce1 = inference_conv2d_U0_x_0_5_ce1.read();
}

void inference::thread_poolOut2_0_5_t_d0() {
    poolOut2_0_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_5_t_d1() {
    poolOut2_0_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_5_t_read() {
    poolOut2_0_5_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_5_t_we0() {
    poolOut2_0_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_5_t_we1() {
    poolOut2_0_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_6_U_ap_dummy_ce() {
    poolOut2_0_6_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_6_i_address0() {
    poolOut2_0_6_i_address0 = inference_maxPoolNxN_U0_out_feature_0_6_address0.read();
}

void inference::thread_poolOut2_0_6_i_address1() {
    poolOut2_0_6_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_6_i_ce0() {
    poolOut2_0_6_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_6_ce0.read();
}

void inference::thread_poolOut2_0_6_i_ce1() {
    poolOut2_0_6_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_6_i_d0() {
    poolOut2_0_6_i_d0 = inference_maxPoolNxN_U0_out_feature_0_6_d0.read();
}

void inference::thread_poolOut2_0_6_i_we0() {
    poolOut2_0_6_i_we0 = inference_maxPoolNxN_U0_out_feature_0_6_we0.read();
}

void inference::thread_poolOut2_0_6_i_write() {
    poolOut2_0_6_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_6.read();
}

void inference::thread_poolOut2_0_6_t_address0() {
    poolOut2_0_6_t_address0 = inference_conv2d_U0_x_0_6_address0.read();
}

void inference::thread_poolOut2_0_6_t_address1() {
    poolOut2_0_6_t_address1 = inference_conv2d_U0_x_0_6_address1.read();
}

void inference::thread_poolOut2_0_6_t_ce0() {
    poolOut2_0_6_t_ce0 = inference_conv2d_U0_x_0_6_ce0.read();
}

void inference::thread_poolOut2_0_6_t_ce1() {
    poolOut2_0_6_t_ce1 = inference_conv2d_U0_x_0_6_ce1.read();
}

void inference::thread_poolOut2_0_6_t_d0() {
    poolOut2_0_6_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_6_t_d1() {
    poolOut2_0_6_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_6_t_read() {
    poolOut2_0_6_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_6_t_we0() {
    poolOut2_0_6_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_6_t_we1() {
    poolOut2_0_6_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_7_U_ap_dummy_ce() {
    poolOut2_0_7_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_7_i_address0() {
    poolOut2_0_7_i_address0 = inference_maxPoolNxN_U0_out_feature_0_7_address0.read();
}

void inference::thread_poolOut2_0_7_i_address1() {
    poolOut2_0_7_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_7_i_ce0() {
    poolOut2_0_7_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_7_ce0.read();
}

void inference::thread_poolOut2_0_7_i_ce1() {
    poolOut2_0_7_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_7_i_d0() {
    poolOut2_0_7_i_d0 = inference_maxPoolNxN_U0_out_feature_0_7_d0.read();
}

void inference::thread_poolOut2_0_7_i_we0() {
    poolOut2_0_7_i_we0 = inference_maxPoolNxN_U0_out_feature_0_7_we0.read();
}

void inference::thread_poolOut2_0_7_i_write() {
    poolOut2_0_7_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_7.read();
}

void inference::thread_poolOut2_0_7_t_address0() {
    poolOut2_0_7_t_address0 = inference_conv2d_U0_x_0_7_address0.read();
}

void inference::thread_poolOut2_0_7_t_address1() {
    poolOut2_0_7_t_address1 = inference_conv2d_U0_x_0_7_address1.read();
}

void inference::thread_poolOut2_0_7_t_ce0() {
    poolOut2_0_7_t_ce0 = inference_conv2d_U0_x_0_7_ce0.read();
}

void inference::thread_poolOut2_0_7_t_ce1() {
    poolOut2_0_7_t_ce1 = inference_conv2d_U0_x_0_7_ce1.read();
}

void inference::thread_poolOut2_0_7_t_d0() {
    poolOut2_0_7_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_7_t_d1() {
    poolOut2_0_7_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_7_t_read() {
    poolOut2_0_7_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_7_t_we0() {
    poolOut2_0_7_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_7_t_we1() {
    poolOut2_0_7_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_8_U_ap_dummy_ce() {
    poolOut2_0_8_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_8_i_address0() {
    poolOut2_0_8_i_address0 = inference_maxPoolNxN_U0_out_feature_0_8_address0.read();
}

void inference::thread_poolOut2_0_8_i_address1() {
    poolOut2_0_8_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_8_i_ce0() {
    poolOut2_0_8_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_8_ce0.read();
}

void inference::thread_poolOut2_0_8_i_ce1() {
    poolOut2_0_8_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_8_i_d0() {
    poolOut2_0_8_i_d0 = inference_maxPoolNxN_U0_out_feature_0_8_d0.read();
}

void inference::thread_poolOut2_0_8_i_we0() {
    poolOut2_0_8_i_we0 = inference_maxPoolNxN_U0_out_feature_0_8_we0.read();
}

void inference::thread_poolOut2_0_8_i_write() {
    poolOut2_0_8_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_8.read();
}

void inference::thread_poolOut2_0_8_t_address0() {
    poolOut2_0_8_t_address0 = inference_conv2d_U0_x_0_8_address0.read();
}

void inference::thread_poolOut2_0_8_t_address1() {
    poolOut2_0_8_t_address1 = inference_conv2d_U0_x_0_8_address1.read();
}

void inference::thread_poolOut2_0_8_t_ce0() {
    poolOut2_0_8_t_ce0 = inference_conv2d_U0_x_0_8_ce0.read();
}

void inference::thread_poolOut2_0_8_t_ce1() {
    poolOut2_0_8_t_ce1 = inference_conv2d_U0_x_0_8_ce1.read();
}

void inference::thread_poolOut2_0_8_t_d0() {
    poolOut2_0_8_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_8_t_d1() {
    poolOut2_0_8_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_8_t_read() {
    poolOut2_0_8_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_8_t_we0() {
    poolOut2_0_8_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_8_t_we1() {
    poolOut2_0_8_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_9_U_ap_dummy_ce() {
    poolOut2_0_9_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_0_9_i_address0() {
    poolOut2_0_9_i_address0 = inference_maxPoolNxN_U0_out_feature_0_9_address0.read();
}

void inference::thread_poolOut2_0_9_i_address1() {
    poolOut2_0_9_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_0_9_i_ce0() {
    poolOut2_0_9_i_ce0 = inference_maxPoolNxN_U0_out_feature_0_9_ce0.read();
}

void inference::thread_poolOut2_0_9_i_ce1() {
    poolOut2_0_9_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_9_i_d0() {
    poolOut2_0_9_i_d0 = inference_maxPoolNxN_U0_out_feature_0_9_d0.read();
}

void inference::thread_poolOut2_0_9_i_we0() {
    poolOut2_0_9_i_we0 = inference_maxPoolNxN_U0_out_feature_0_9_we0.read();
}

void inference::thread_poolOut2_0_9_i_write() {
    poolOut2_0_9_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_0_9.read();
}

void inference::thread_poolOut2_0_9_t_address0() {
    poolOut2_0_9_t_address0 = inference_conv2d_U0_x_0_9_address0.read();
}

void inference::thread_poolOut2_0_9_t_address1() {
    poolOut2_0_9_t_address1 = inference_conv2d_U0_x_0_9_address1.read();
}

void inference::thread_poolOut2_0_9_t_ce0() {
    poolOut2_0_9_t_ce0 = inference_conv2d_U0_x_0_9_ce0.read();
}

void inference::thread_poolOut2_0_9_t_ce1() {
    poolOut2_0_9_t_ce1 = inference_conv2d_U0_x_0_9_ce1.read();
}

void inference::thread_poolOut2_0_9_t_d0() {
    poolOut2_0_9_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_9_t_d1() {
    poolOut2_0_9_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_0_9_t_read() {
    poolOut2_0_9_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_0_9_t_we0() {
    poolOut2_0_9_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_0_9_t_we1() {
    poolOut2_0_9_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_0_U_ap_dummy_ce() {
    poolOut2_1_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_0_i_address0() {
    poolOut2_1_0_i_address0 = inference_maxPoolNxN_U0_out_feature_1_0_address0.read();
}

void inference::thread_poolOut2_1_0_i_address1() {
    poolOut2_1_0_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_0_i_ce0() {
    poolOut2_1_0_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_0_ce0.read();
}

void inference::thread_poolOut2_1_0_i_ce1() {
    poolOut2_1_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_0_i_d0() {
    poolOut2_1_0_i_d0 = inference_maxPoolNxN_U0_out_feature_1_0_d0.read();
}

void inference::thread_poolOut2_1_0_i_we0() {
    poolOut2_1_0_i_we0 = inference_maxPoolNxN_U0_out_feature_1_0_we0.read();
}

void inference::thread_poolOut2_1_0_i_write() {
    poolOut2_1_0_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_0.read();
}

void inference::thread_poolOut2_1_0_t_address0() {
    poolOut2_1_0_t_address0 = inference_conv2d_U0_x_1_0_address0.read();
}

void inference::thread_poolOut2_1_0_t_address1() {
    poolOut2_1_0_t_address1 = inference_conv2d_U0_x_1_0_address1.read();
}

void inference::thread_poolOut2_1_0_t_ce0() {
    poolOut2_1_0_t_ce0 = inference_conv2d_U0_x_1_0_ce0.read();
}

void inference::thread_poolOut2_1_0_t_ce1() {
    poolOut2_1_0_t_ce1 = inference_conv2d_U0_x_1_0_ce1.read();
}

void inference::thread_poolOut2_1_0_t_d0() {
    poolOut2_1_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_0_t_d1() {
    poolOut2_1_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_0_t_read() {
    poolOut2_1_0_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_0_t_we0() {
    poolOut2_1_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_0_t_we1() {
    poolOut2_1_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_10_U_ap_dummy_ce() {
    poolOut2_1_10_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_10_i_address0() {
    poolOut2_1_10_i_address0 = inference_maxPoolNxN_U0_out_feature_1_10_address0.read();
}

void inference::thread_poolOut2_1_10_i_address1() {
    poolOut2_1_10_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_10_i_ce0() {
    poolOut2_1_10_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_10_ce0.read();
}

void inference::thread_poolOut2_1_10_i_ce1() {
    poolOut2_1_10_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_10_i_d0() {
    poolOut2_1_10_i_d0 = inference_maxPoolNxN_U0_out_feature_1_10_d0.read();
}

void inference::thread_poolOut2_1_10_i_we0() {
    poolOut2_1_10_i_we0 = inference_maxPoolNxN_U0_out_feature_1_10_we0.read();
}

void inference::thread_poolOut2_1_10_i_write() {
    poolOut2_1_10_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_10.read();
}

void inference::thread_poolOut2_1_10_t_address0() {
    poolOut2_1_10_t_address0 = inference_conv2d_U0_x_1_10_address0.read();
}

void inference::thread_poolOut2_1_10_t_address1() {
    poolOut2_1_10_t_address1 = inference_conv2d_U0_x_1_10_address1.read();
}

void inference::thread_poolOut2_1_10_t_ce0() {
    poolOut2_1_10_t_ce0 = inference_conv2d_U0_x_1_10_ce0.read();
}

void inference::thread_poolOut2_1_10_t_ce1() {
    poolOut2_1_10_t_ce1 = inference_conv2d_U0_x_1_10_ce1.read();
}

void inference::thread_poolOut2_1_10_t_d0() {
    poolOut2_1_10_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_10_t_d1() {
    poolOut2_1_10_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_10_t_read() {
    poolOut2_1_10_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_10_t_we0() {
    poolOut2_1_10_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_10_t_we1() {
    poolOut2_1_10_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_11_U_ap_dummy_ce() {
    poolOut2_1_11_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_11_i_address0() {
    poolOut2_1_11_i_address0 = inference_maxPoolNxN_U0_out_feature_1_11_address0.read();
}

void inference::thread_poolOut2_1_11_i_address1() {
    poolOut2_1_11_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_11_i_ce0() {
    poolOut2_1_11_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_11_ce0.read();
}

void inference::thread_poolOut2_1_11_i_ce1() {
    poolOut2_1_11_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_11_i_d0() {
    poolOut2_1_11_i_d0 = inference_maxPoolNxN_U0_out_feature_1_11_d0.read();
}

void inference::thread_poolOut2_1_11_i_we0() {
    poolOut2_1_11_i_we0 = inference_maxPoolNxN_U0_out_feature_1_11_we0.read();
}

void inference::thread_poolOut2_1_11_i_write() {
    poolOut2_1_11_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_11.read();
}

void inference::thread_poolOut2_1_11_t_address0() {
    poolOut2_1_11_t_address0 = inference_conv2d_U0_x_1_11_address0.read();
}

void inference::thread_poolOut2_1_11_t_address1() {
    poolOut2_1_11_t_address1 = inference_conv2d_U0_x_1_11_address1.read();
}

void inference::thread_poolOut2_1_11_t_ce0() {
    poolOut2_1_11_t_ce0 = inference_conv2d_U0_x_1_11_ce0.read();
}

void inference::thread_poolOut2_1_11_t_ce1() {
    poolOut2_1_11_t_ce1 = inference_conv2d_U0_x_1_11_ce1.read();
}

void inference::thread_poolOut2_1_11_t_d0() {
    poolOut2_1_11_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_11_t_d1() {
    poolOut2_1_11_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_11_t_read() {
    poolOut2_1_11_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_11_t_we0() {
    poolOut2_1_11_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_11_t_we1() {
    poolOut2_1_11_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_12_U_ap_dummy_ce() {
    poolOut2_1_12_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_12_i_address0() {
    poolOut2_1_12_i_address0 = inference_maxPoolNxN_U0_out_feature_1_12_address0.read();
}

void inference::thread_poolOut2_1_12_i_address1() {
    poolOut2_1_12_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_12_i_ce0() {
    poolOut2_1_12_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_12_ce0.read();
}

void inference::thread_poolOut2_1_12_i_ce1() {
    poolOut2_1_12_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_12_i_d0() {
    poolOut2_1_12_i_d0 = inference_maxPoolNxN_U0_out_feature_1_12_d0.read();
}

void inference::thread_poolOut2_1_12_i_we0() {
    poolOut2_1_12_i_we0 = inference_maxPoolNxN_U0_out_feature_1_12_we0.read();
}

void inference::thread_poolOut2_1_12_i_write() {
    poolOut2_1_12_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_12.read();
}

void inference::thread_poolOut2_1_12_t_address0() {
    poolOut2_1_12_t_address0 = inference_conv2d_U0_x_1_12_address0.read();
}

void inference::thread_poolOut2_1_12_t_address1() {
    poolOut2_1_12_t_address1 = inference_conv2d_U0_x_1_12_address1.read();
}

void inference::thread_poolOut2_1_12_t_ce0() {
    poolOut2_1_12_t_ce0 = inference_conv2d_U0_x_1_12_ce0.read();
}

void inference::thread_poolOut2_1_12_t_ce1() {
    poolOut2_1_12_t_ce1 = inference_conv2d_U0_x_1_12_ce1.read();
}

void inference::thread_poolOut2_1_12_t_d0() {
    poolOut2_1_12_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_12_t_d1() {
    poolOut2_1_12_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_12_t_read() {
    poolOut2_1_12_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_12_t_we0() {
    poolOut2_1_12_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_12_t_we1() {
    poolOut2_1_12_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_13_U_ap_dummy_ce() {
    poolOut2_1_13_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_13_i_address0() {
    poolOut2_1_13_i_address0 = inference_maxPoolNxN_U0_out_feature_1_13_address0.read();
}

void inference::thread_poolOut2_1_13_i_address1() {
    poolOut2_1_13_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_13_i_ce0() {
    poolOut2_1_13_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_13_ce0.read();
}

void inference::thread_poolOut2_1_13_i_ce1() {
    poolOut2_1_13_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_13_i_d0() {
    poolOut2_1_13_i_d0 = inference_maxPoolNxN_U0_out_feature_1_13_d0.read();
}

void inference::thread_poolOut2_1_13_i_we0() {
    poolOut2_1_13_i_we0 = inference_maxPoolNxN_U0_out_feature_1_13_we0.read();
}

void inference::thread_poolOut2_1_13_i_write() {
    poolOut2_1_13_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_13.read();
}

void inference::thread_poolOut2_1_13_t_address0() {
    poolOut2_1_13_t_address0 = inference_conv2d_U0_x_1_13_address0.read();
}

void inference::thread_poolOut2_1_13_t_address1() {
    poolOut2_1_13_t_address1 = inference_conv2d_U0_x_1_13_address1.read();
}

void inference::thread_poolOut2_1_13_t_ce0() {
    poolOut2_1_13_t_ce0 = inference_conv2d_U0_x_1_13_ce0.read();
}

void inference::thread_poolOut2_1_13_t_ce1() {
    poolOut2_1_13_t_ce1 = inference_conv2d_U0_x_1_13_ce1.read();
}

void inference::thread_poolOut2_1_13_t_d0() {
    poolOut2_1_13_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_13_t_d1() {
    poolOut2_1_13_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_13_t_read() {
    poolOut2_1_13_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_13_t_we0() {
    poolOut2_1_13_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_13_t_we1() {
    poolOut2_1_13_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_14_U_ap_dummy_ce() {
    poolOut2_1_14_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_14_i_address0() {
    poolOut2_1_14_i_address0 = inference_maxPoolNxN_U0_out_feature_1_14_address0.read();
}

void inference::thread_poolOut2_1_14_i_address1() {
    poolOut2_1_14_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_14_i_ce0() {
    poolOut2_1_14_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_14_ce0.read();
}

void inference::thread_poolOut2_1_14_i_ce1() {
    poolOut2_1_14_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_14_i_d0() {
    poolOut2_1_14_i_d0 = inference_maxPoolNxN_U0_out_feature_1_14_d0.read();
}

void inference::thread_poolOut2_1_14_i_we0() {
    poolOut2_1_14_i_we0 = inference_maxPoolNxN_U0_out_feature_1_14_we0.read();
}

void inference::thread_poolOut2_1_14_i_write() {
    poolOut2_1_14_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_14.read();
}

void inference::thread_poolOut2_1_14_t_address0() {
    poolOut2_1_14_t_address0 = inference_conv2d_U0_x_1_14_address0.read();
}

void inference::thread_poolOut2_1_14_t_address1() {
    poolOut2_1_14_t_address1 = inference_conv2d_U0_x_1_14_address1.read();
}

void inference::thread_poolOut2_1_14_t_ce0() {
    poolOut2_1_14_t_ce0 = inference_conv2d_U0_x_1_14_ce0.read();
}

void inference::thread_poolOut2_1_14_t_ce1() {
    poolOut2_1_14_t_ce1 = inference_conv2d_U0_x_1_14_ce1.read();
}

void inference::thread_poolOut2_1_14_t_d0() {
    poolOut2_1_14_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_14_t_d1() {
    poolOut2_1_14_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_14_t_read() {
    poolOut2_1_14_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_14_t_we0() {
    poolOut2_1_14_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_14_t_we1() {
    poolOut2_1_14_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_15_U_ap_dummy_ce() {
    poolOut2_1_15_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_15_i_address0() {
    poolOut2_1_15_i_address0 = inference_maxPoolNxN_U0_out_feature_1_15_address0.read();
}

void inference::thread_poolOut2_1_15_i_address1() {
    poolOut2_1_15_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_15_i_ce0() {
    poolOut2_1_15_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_15_ce0.read();
}

void inference::thread_poolOut2_1_15_i_ce1() {
    poolOut2_1_15_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_15_i_d0() {
    poolOut2_1_15_i_d0 = inference_maxPoolNxN_U0_out_feature_1_15_d0.read();
}

void inference::thread_poolOut2_1_15_i_we0() {
    poolOut2_1_15_i_we0 = inference_maxPoolNxN_U0_out_feature_1_15_we0.read();
}

void inference::thread_poolOut2_1_15_i_write() {
    poolOut2_1_15_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_15.read();
}

void inference::thread_poolOut2_1_15_t_address0() {
    poolOut2_1_15_t_address0 = inference_conv2d_U0_x_1_15_address0.read();
}

void inference::thread_poolOut2_1_15_t_address1() {
    poolOut2_1_15_t_address1 = inference_conv2d_U0_x_1_15_address1.read();
}

void inference::thread_poolOut2_1_15_t_ce0() {
    poolOut2_1_15_t_ce0 = inference_conv2d_U0_x_1_15_ce0.read();
}

void inference::thread_poolOut2_1_15_t_ce1() {
    poolOut2_1_15_t_ce1 = inference_conv2d_U0_x_1_15_ce1.read();
}

void inference::thread_poolOut2_1_15_t_d0() {
    poolOut2_1_15_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_15_t_d1() {
    poolOut2_1_15_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_15_t_read() {
    poolOut2_1_15_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_15_t_we0() {
    poolOut2_1_15_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_15_t_we1() {
    poolOut2_1_15_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_1_U_ap_dummy_ce() {
    poolOut2_1_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_1_i_address0() {
    poolOut2_1_1_i_address0 = inference_maxPoolNxN_U0_out_feature_1_1_address0.read();
}

void inference::thread_poolOut2_1_1_i_address1() {
    poolOut2_1_1_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_1_i_ce0() {
    poolOut2_1_1_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_1_ce0.read();
}

void inference::thread_poolOut2_1_1_i_ce1() {
    poolOut2_1_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_1_i_d0() {
    poolOut2_1_1_i_d0 = inference_maxPoolNxN_U0_out_feature_1_1_d0.read();
}

void inference::thread_poolOut2_1_1_i_we0() {
    poolOut2_1_1_i_we0 = inference_maxPoolNxN_U0_out_feature_1_1_we0.read();
}

void inference::thread_poolOut2_1_1_i_write() {
    poolOut2_1_1_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_1.read();
}

void inference::thread_poolOut2_1_1_t_address0() {
    poolOut2_1_1_t_address0 = inference_conv2d_U0_x_1_1_address0.read();
}

void inference::thread_poolOut2_1_1_t_address1() {
    poolOut2_1_1_t_address1 = inference_conv2d_U0_x_1_1_address1.read();
}

void inference::thread_poolOut2_1_1_t_ce0() {
    poolOut2_1_1_t_ce0 = inference_conv2d_U0_x_1_1_ce0.read();
}

void inference::thread_poolOut2_1_1_t_ce1() {
    poolOut2_1_1_t_ce1 = inference_conv2d_U0_x_1_1_ce1.read();
}

void inference::thread_poolOut2_1_1_t_d0() {
    poolOut2_1_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_1_t_d1() {
    poolOut2_1_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_1_t_read() {
    poolOut2_1_1_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_1_t_we0() {
    poolOut2_1_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_1_t_we1() {
    poolOut2_1_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_2_U_ap_dummy_ce() {
    poolOut2_1_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_2_i_address0() {
    poolOut2_1_2_i_address0 = inference_maxPoolNxN_U0_out_feature_1_2_address0.read();
}

void inference::thread_poolOut2_1_2_i_address1() {
    poolOut2_1_2_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_2_i_ce0() {
    poolOut2_1_2_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_2_ce0.read();
}

void inference::thread_poolOut2_1_2_i_ce1() {
    poolOut2_1_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_2_i_d0() {
    poolOut2_1_2_i_d0 = inference_maxPoolNxN_U0_out_feature_1_2_d0.read();
}

void inference::thread_poolOut2_1_2_i_we0() {
    poolOut2_1_2_i_we0 = inference_maxPoolNxN_U0_out_feature_1_2_we0.read();
}

void inference::thread_poolOut2_1_2_i_write() {
    poolOut2_1_2_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_2.read();
}

void inference::thread_poolOut2_1_2_t_address0() {
    poolOut2_1_2_t_address0 = inference_conv2d_U0_x_1_2_address0.read();
}

void inference::thread_poolOut2_1_2_t_address1() {
    poolOut2_1_2_t_address1 = inference_conv2d_U0_x_1_2_address1.read();
}

void inference::thread_poolOut2_1_2_t_ce0() {
    poolOut2_1_2_t_ce0 = inference_conv2d_U0_x_1_2_ce0.read();
}

void inference::thread_poolOut2_1_2_t_ce1() {
    poolOut2_1_2_t_ce1 = inference_conv2d_U0_x_1_2_ce1.read();
}

void inference::thread_poolOut2_1_2_t_d0() {
    poolOut2_1_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_2_t_d1() {
    poolOut2_1_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_2_t_read() {
    poolOut2_1_2_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_2_t_we0() {
    poolOut2_1_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_2_t_we1() {
    poolOut2_1_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_3_U_ap_dummy_ce() {
    poolOut2_1_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_3_i_address0() {
    poolOut2_1_3_i_address0 = inference_maxPoolNxN_U0_out_feature_1_3_address0.read();
}

void inference::thread_poolOut2_1_3_i_address1() {
    poolOut2_1_3_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_3_i_ce0() {
    poolOut2_1_3_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_3_ce0.read();
}

void inference::thread_poolOut2_1_3_i_ce1() {
    poolOut2_1_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_3_i_d0() {
    poolOut2_1_3_i_d0 = inference_maxPoolNxN_U0_out_feature_1_3_d0.read();
}

void inference::thread_poolOut2_1_3_i_we0() {
    poolOut2_1_3_i_we0 = inference_maxPoolNxN_U0_out_feature_1_3_we0.read();
}

void inference::thread_poolOut2_1_3_i_write() {
    poolOut2_1_3_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_3.read();
}

void inference::thread_poolOut2_1_3_t_address0() {
    poolOut2_1_3_t_address0 = inference_conv2d_U0_x_1_3_address0.read();
}

void inference::thread_poolOut2_1_3_t_address1() {
    poolOut2_1_3_t_address1 = inference_conv2d_U0_x_1_3_address1.read();
}

void inference::thread_poolOut2_1_3_t_ce0() {
    poolOut2_1_3_t_ce0 = inference_conv2d_U0_x_1_3_ce0.read();
}

void inference::thread_poolOut2_1_3_t_ce1() {
    poolOut2_1_3_t_ce1 = inference_conv2d_U0_x_1_3_ce1.read();
}

void inference::thread_poolOut2_1_3_t_d0() {
    poolOut2_1_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_3_t_d1() {
    poolOut2_1_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_3_t_read() {
    poolOut2_1_3_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_3_t_we0() {
    poolOut2_1_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_3_t_we1() {
    poolOut2_1_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_4_U_ap_dummy_ce() {
    poolOut2_1_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_4_i_address0() {
    poolOut2_1_4_i_address0 = inference_maxPoolNxN_U0_out_feature_1_4_address0.read();
}

void inference::thread_poolOut2_1_4_i_address1() {
    poolOut2_1_4_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_4_i_ce0() {
    poolOut2_1_4_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_4_ce0.read();
}

void inference::thread_poolOut2_1_4_i_ce1() {
    poolOut2_1_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_4_i_d0() {
    poolOut2_1_4_i_d0 = inference_maxPoolNxN_U0_out_feature_1_4_d0.read();
}

void inference::thread_poolOut2_1_4_i_we0() {
    poolOut2_1_4_i_we0 = inference_maxPoolNxN_U0_out_feature_1_4_we0.read();
}

void inference::thread_poolOut2_1_4_i_write() {
    poolOut2_1_4_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_4.read();
}

void inference::thread_poolOut2_1_4_t_address0() {
    poolOut2_1_4_t_address0 = inference_conv2d_U0_x_1_4_address0.read();
}

void inference::thread_poolOut2_1_4_t_address1() {
    poolOut2_1_4_t_address1 = inference_conv2d_U0_x_1_4_address1.read();
}

void inference::thread_poolOut2_1_4_t_ce0() {
    poolOut2_1_4_t_ce0 = inference_conv2d_U0_x_1_4_ce0.read();
}

void inference::thread_poolOut2_1_4_t_ce1() {
    poolOut2_1_4_t_ce1 = inference_conv2d_U0_x_1_4_ce1.read();
}

void inference::thread_poolOut2_1_4_t_d0() {
    poolOut2_1_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_4_t_d1() {
    poolOut2_1_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_4_t_read() {
    poolOut2_1_4_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_4_t_we0() {
    poolOut2_1_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_4_t_we1() {
    poolOut2_1_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_5_U_ap_dummy_ce() {
    poolOut2_1_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_5_i_address0() {
    poolOut2_1_5_i_address0 = inference_maxPoolNxN_U0_out_feature_1_5_address0.read();
}

void inference::thread_poolOut2_1_5_i_address1() {
    poolOut2_1_5_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_5_i_ce0() {
    poolOut2_1_5_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_5_ce0.read();
}

void inference::thread_poolOut2_1_5_i_ce1() {
    poolOut2_1_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_5_i_d0() {
    poolOut2_1_5_i_d0 = inference_maxPoolNxN_U0_out_feature_1_5_d0.read();
}

void inference::thread_poolOut2_1_5_i_we0() {
    poolOut2_1_5_i_we0 = inference_maxPoolNxN_U0_out_feature_1_5_we0.read();
}

void inference::thread_poolOut2_1_5_i_write() {
    poolOut2_1_5_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_5.read();
}

void inference::thread_poolOut2_1_5_t_address0() {
    poolOut2_1_5_t_address0 = inference_conv2d_U0_x_1_5_address0.read();
}

void inference::thread_poolOut2_1_5_t_address1() {
    poolOut2_1_5_t_address1 = inference_conv2d_U0_x_1_5_address1.read();
}

void inference::thread_poolOut2_1_5_t_ce0() {
    poolOut2_1_5_t_ce0 = inference_conv2d_U0_x_1_5_ce0.read();
}

void inference::thread_poolOut2_1_5_t_ce1() {
    poolOut2_1_5_t_ce1 = inference_conv2d_U0_x_1_5_ce1.read();
}

void inference::thread_poolOut2_1_5_t_d0() {
    poolOut2_1_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_5_t_d1() {
    poolOut2_1_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_5_t_read() {
    poolOut2_1_5_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_5_t_we0() {
    poolOut2_1_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_5_t_we1() {
    poolOut2_1_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_6_U_ap_dummy_ce() {
    poolOut2_1_6_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_6_i_address0() {
    poolOut2_1_6_i_address0 = inference_maxPoolNxN_U0_out_feature_1_6_address0.read();
}

void inference::thread_poolOut2_1_6_i_address1() {
    poolOut2_1_6_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_6_i_ce0() {
    poolOut2_1_6_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_6_ce0.read();
}

void inference::thread_poolOut2_1_6_i_ce1() {
    poolOut2_1_6_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_6_i_d0() {
    poolOut2_1_6_i_d0 = inference_maxPoolNxN_U0_out_feature_1_6_d0.read();
}

void inference::thread_poolOut2_1_6_i_we0() {
    poolOut2_1_6_i_we0 = inference_maxPoolNxN_U0_out_feature_1_6_we0.read();
}

void inference::thread_poolOut2_1_6_i_write() {
    poolOut2_1_6_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_6.read();
}

void inference::thread_poolOut2_1_6_t_address0() {
    poolOut2_1_6_t_address0 = inference_conv2d_U0_x_1_6_address0.read();
}

void inference::thread_poolOut2_1_6_t_address1() {
    poolOut2_1_6_t_address1 = inference_conv2d_U0_x_1_6_address1.read();
}

void inference::thread_poolOut2_1_6_t_ce0() {
    poolOut2_1_6_t_ce0 = inference_conv2d_U0_x_1_6_ce0.read();
}

void inference::thread_poolOut2_1_6_t_ce1() {
    poolOut2_1_6_t_ce1 = inference_conv2d_U0_x_1_6_ce1.read();
}

void inference::thread_poolOut2_1_6_t_d0() {
    poolOut2_1_6_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_6_t_d1() {
    poolOut2_1_6_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_6_t_read() {
    poolOut2_1_6_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_6_t_we0() {
    poolOut2_1_6_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_6_t_we1() {
    poolOut2_1_6_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_7_U_ap_dummy_ce() {
    poolOut2_1_7_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_7_i_address0() {
    poolOut2_1_7_i_address0 = inference_maxPoolNxN_U0_out_feature_1_7_address0.read();
}

void inference::thread_poolOut2_1_7_i_address1() {
    poolOut2_1_7_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_7_i_ce0() {
    poolOut2_1_7_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_7_ce0.read();
}

void inference::thread_poolOut2_1_7_i_ce1() {
    poolOut2_1_7_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_7_i_d0() {
    poolOut2_1_7_i_d0 = inference_maxPoolNxN_U0_out_feature_1_7_d0.read();
}

void inference::thread_poolOut2_1_7_i_we0() {
    poolOut2_1_7_i_we0 = inference_maxPoolNxN_U0_out_feature_1_7_we0.read();
}

void inference::thread_poolOut2_1_7_i_write() {
    poolOut2_1_7_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_7.read();
}

void inference::thread_poolOut2_1_7_t_address0() {
    poolOut2_1_7_t_address0 = inference_conv2d_U0_x_1_7_address0.read();
}

void inference::thread_poolOut2_1_7_t_address1() {
    poolOut2_1_7_t_address1 = inference_conv2d_U0_x_1_7_address1.read();
}

void inference::thread_poolOut2_1_7_t_ce0() {
    poolOut2_1_7_t_ce0 = inference_conv2d_U0_x_1_7_ce0.read();
}

void inference::thread_poolOut2_1_7_t_ce1() {
    poolOut2_1_7_t_ce1 = inference_conv2d_U0_x_1_7_ce1.read();
}

void inference::thread_poolOut2_1_7_t_d0() {
    poolOut2_1_7_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_7_t_d1() {
    poolOut2_1_7_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_7_t_read() {
    poolOut2_1_7_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_7_t_we0() {
    poolOut2_1_7_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_7_t_we1() {
    poolOut2_1_7_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_8_U_ap_dummy_ce() {
    poolOut2_1_8_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_8_i_address0() {
    poolOut2_1_8_i_address0 = inference_maxPoolNxN_U0_out_feature_1_8_address0.read();
}

void inference::thread_poolOut2_1_8_i_address1() {
    poolOut2_1_8_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_8_i_ce0() {
    poolOut2_1_8_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_8_ce0.read();
}

void inference::thread_poolOut2_1_8_i_ce1() {
    poolOut2_1_8_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_8_i_d0() {
    poolOut2_1_8_i_d0 = inference_maxPoolNxN_U0_out_feature_1_8_d0.read();
}

void inference::thread_poolOut2_1_8_i_we0() {
    poolOut2_1_8_i_we0 = inference_maxPoolNxN_U0_out_feature_1_8_we0.read();
}

void inference::thread_poolOut2_1_8_i_write() {
    poolOut2_1_8_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_8.read();
}

void inference::thread_poolOut2_1_8_t_address0() {
    poolOut2_1_8_t_address0 = inference_conv2d_U0_x_1_8_address0.read();
}

void inference::thread_poolOut2_1_8_t_address1() {
    poolOut2_1_8_t_address1 = inference_conv2d_U0_x_1_8_address1.read();
}

void inference::thread_poolOut2_1_8_t_ce0() {
    poolOut2_1_8_t_ce0 = inference_conv2d_U0_x_1_8_ce0.read();
}

void inference::thread_poolOut2_1_8_t_ce1() {
    poolOut2_1_8_t_ce1 = inference_conv2d_U0_x_1_8_ce1.read();
}

void inference::thread_poolOut2_1_8_t_d0() {
    poolOut2_1_8_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_8_t_d1() {
    poolOut2_1_8_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_8_t_read() {
    poolOut2_1_8_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_8_t_we0() {
    poolOut2_1_8_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_8_t_we1() {
    poolOut2_1_8_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_9_U_ap_dummy_ce() {
    poolOut2_1_9_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_1_9_i_address0() {
    poolOut2_1_9_i_address0 = inference_maxPoolNxN_U0_out_feature_1_9_address0.read();
}

void inference::thread_poolOut2_1_9_i_address1() {
    poolOut2_1_9_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_1_9_i_ce0() {
    poolOut2_1_9_i_ce0 = inference_maxPoolNxN_U0_out_feature_1_9_ce0.read();
}

void inference::thread_poolOut2_1_9_i_ce1() {
    poolOut2_1_9_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_9_i_d0() {
    poolOut2_1_9_i_d0 = inference_maxPoolNxN_U0_out_feature_1_9_d0.read();
}

void inference::thread_poolOut2_1_9_i_we0() {
    poolOut2_1_9_i_we0 = inference_maxPoolNxN_U0_out_feature_1_9_we0.read();
}

void inference::thread_poolOut2_1_9_i_write() {
    poolOut2_1_9_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_1_9.read();
}

void inference::thread_poolOut2_1_9_t_address0() {
    poolOut2_1_9_t_address0 = inference_conv2d_U0_x_1_9_address0.read();
}

void inference::thread_poolOut2_1_9_t_address1() {
    poolOut2_1_9_t_address1 = inference_conv2d_U0_x_1_9_address1.read();
}

void inference::thread_poolOut2_1_9_t_ce0() {
    poolOut2_1_9_t_ce0 = inference_conv2d_U0_x_1_9_ce0.read();
}

void inference::thread_poolOut2_1_9_t_ce1() {
    poolOut2_1_9_t_ce1 = inference_conv2d_U0_x_1_9_ce1.read();
}

void inference::thread_poolOut2_1_9_t_d0() {
    poolOut2_1_9_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_9_t_d1() {
    poolOut2_1_9_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_1_9_t_read() {
    poolOut2_1_9_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_1_9_t_we0() {
    poolOut2_1_9_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_1_9_t_we1() {
    poolOut2_1_9_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_0_U_ap_dummy_ce() {
    poolOut2_2_0_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_0_i_address0() {
    poolOut2_2_0_i_address0 = inference_maxPoolNxN_U0_out_feature_2_0_address0.read();
}

void inference::thread_poolOut2_2_0_i_address1() {
    poolOut2_2_0_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_0_i_ce0() {
    poolOut2_2_0_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_0_ce0.read();
}

void inference::thread_poolOut2_2_0_i_ce1() {
    poolOut2_2_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_0_i_d0() {
    poolOut2_2_0_i_d0 = inference_maxPoolNxN_U0_out_feature_2_0_d0.read();
}

void inference::thread_poolOut2_2_0_i_we0() {
    poolOut2_2_0_i_we0 = inference_maxPoolNxN_U0_out_feature_2_0_we0.read();
}

void inference::thread_poolOut2_2_0_i_write() {
    poolOut2_2_0_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_0.read();
}

void inference::thread_poolOut2_2_0_t_address0() {
    poolOut2_2_0_t_address0 = inference_conv2d_U0_x_2_0_address0.read();
}

void inference::thread_poolOut2_2_0_t_address1() {
    poolOut2_2_0_t_address1 = inference_conv2d_U0_x_2_0_address1.read();
}

void inference::thread_poolOut2_2_0_t_ce0() {
    poolOut2_2_0_t_ce0 = inference_conv2d_U0_x_2_0_ce0.read();
}

void inference::thread_poolOut2_2_0_t_ce1() {
    poolOut2_2_0_t_ce1 = inference_conv2d_U0_x_2_0_ce1.read();
}

void inference::thread_poolOut2_2_0_t_d0() {
    poolOut2_2_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_0_t_d1() {
    poolOut2_2_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_0_t_read() {
    poolOut2_2_0_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_0_t_we0() {
    poolOut2_2_0_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_0_t_we1() {
    poolOut2_2_0_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_10_U_ap_dummy_ce() {
    poolOut2_2_10_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_10_i_address0() {
    poolOut2_2_10_i_address0 = inference_maxPoolNxN_U0_out_feature_2_10_address0.read();
}

void inference::thread_poolOut2_2_10_i_address1() {
    poolOut2_2_10_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_10_i_ce0() {
    poolOut2_2_10_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_10_ce0.read();
}

void inference::thread_poolOut2_2_10_i_ce1() {
    poolOut2_2_10_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_10_i_d0() {
    poolOut2_2_10_i_d0 = inference_maxPoolNxN_U0_out_feature_2_10_d0.read();
}

void inference::thread_poolOut2_2_10_i_we0() {
    poolOut2_2_10_i_we0 = inference_maxPoolNxN_U0_out_feature_2_10_we0.read();
}

void inference::thread_poolOut2_2_10_i_write() {
    poolOut2_2_10_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_10.read();
}

void inference::thread_poolOut2_2_10_t_address0() {
    poolOut2_2_10_t_address0 = inference_conv2d_U0_x_2_10_address0.read();
}

void inference::thread_poolOut2_2_10_t_address1() {
    poolOut2_2_10_t_address1 = inference_conv2d_U0_x_2_10_address1.read();
}

void inference::thread_poolOut2_2_10_t_ce0() {
    poolOut2_2_10_t_ce0 = inference_conv2d_U0_x_2_10_ce0.read();
}

void inference::thread_poolOut2_2_10_t_ce1() {
    poolOut2_2_10_t_ce1 = inference_conv2d_U0_x_2_10_ce1.read();
}

void inference::thread_poolOut2_2_10_t_d0() {
    poolOut2_2_10_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_10_t_d1() {
    poolOut2_2_10_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_10_t_read() {
    poolOut2_2_10_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_10_t_we0() {
    poolOut2_2_10_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_10_t_we1() {
    poolOut2_2_10_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_11_U_ap_dummy_ce() {
    poolOut2_2_11_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_11_i_address0() {
    poolOut2_2_11_i_address0 = inference_maxPoolNxN_U0_out_feature_2_11_address0.read();
}

void inference::thread_poolOut2_2_11_i_address1() {
    poolOut2_2_11_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_11_i_ce0() {
    poolOut2_2_11_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_11_ce0.read();
}

void inference::thread_poolOut2_2_11_i_ce1() {
    poolOut2_2_11_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_11_i_d0() {
    poolOut2_2_11_i_d0 = inference_maxPoolNxN_U0_out_feature_2_11_d0.read();
}

void inference::thread_poolOut2_2_11_i_we0() {
    poolOut2_2_11_i_we0 = inference_maxPoolNxN_U0_out_feature_2_11_we0.read();
}

void inference::thread_poolOut2_2_11_i_write() {
    poolOut2_2_11_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_11.read();
}

void inference::thread_poolOut2_2_11_t_address0() {
    poolOut2_2_11_t_address0 = inference_conv2d_U0_x_2_11_address0.read();
}

void inference::thread_poolOut2_2_11_t_address1() {
    poolOut2_2_11_t_address1 = inference_conv2d_U0_x_2_11_address1.read();
}

void inference::thread_poolOut2_2_11_t_ce0() {
    poolOut2_2_11_t_ce0 = inference_conv2d_U0_x_2_11_ce0.read();
}

void inference::thread_poolOut2_2_11_t_ce1() {
    poolOut2_2_11_t_ce1 = inference_conv2d_U0_x_2_11_ce1.read();
}

void inference::thread_poolOut2_2_11_t_d0() {
    poolOut2_2_11_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_11_t_d1() {
    poolOut2_2_11_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_11_t_read() {
    poolOut2_2_11_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_11_t_we0() {
    poolOut2_2_11_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_11_t_we1() {
    poolOut2_2_11_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_12_U_ap_dummy_ce() {
    poolOut2_2_12_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_12_i_address0() {
    poolOut2_2_12_i_address0 = inference_maxPoolNxN_U0_out_feature_2_12_address0.read();
}

void inference::thread_poolOut2_2_12_i_address1() {
    poolOut2_2_12_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_12_i_ce0() {
    poolOut2_2_12_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_12_ce0.read();
}

void inference::thread_poolOut2_2_12_i_ce1() {
    poolOut2_2_12_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_12_i_d0() {
    poolOut2_2_12_i_d0 = inference_maxPoolNxN_U0_out_feature_2_12_d0.read();
}

void inference::thread_poolOut2_2_12_i_we0() {
    poolOut2_2_12_i_we0 = inference_maxPoolNxN_U0_out_feature_2_12_we0.read();
}

void inference::thread_poolOut2_2_12_i_write() {
    poolOut2_2_12_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_12.read();
}

void inference::thread_poolOut2_2_12_t_address0() {
    poolOut2_2_12_t_address0 = inference_conv2d_U0_x_2_12_address0.read();
}

void inference::thread_poolOut2_2_12_t_address1() {
    poolOut2_2_12_t_address1 = inference_conv2d_U0_x_2_12_address1.read();
}

void inference::thread_poolOut2_2_12_t_ce0() {
    poolOut2_2_12_t_ce0 = inference_conv2d_U0_x_2_12_ce0.read();
}

void inference::thread_poolOut2_2_12_t_ce1() {
    poolOut2_2_12_t_ce1 = inference_conv2d_U0_x_2_12_ce1.read();
}

void inference::thread_poolOut2_2_12_t_d0() {
    poolOut2_2_12_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_12_t_d1() {
    poolOut2_2_12_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_12_t_read() {
    poolOut2_2_12_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_12_t_we0() {
    poolOut2_2_12_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_12_t_we1() {
    poolOut2_2_12_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_13_U_ap_dummy_ce() {
    poolOut2_2_13_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_13_i_address0() {
    poolOut2_2_13_i_address0 = inference_maxPoolNxN_U0_out_feature_2_13_address0.read();
}

void inference::thread_poolOut2_2_13_i_address1() {
    poolOut2_2_13_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_13_i_ce0() {
    poolOut2_2_13_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_13_ce0.read();
}

void inference::thread_poolOut2_2_13_i_ce1() {
    poolOut2_2_13_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_13_i_d0() {
    poolOut2_2_13_i_d0 = inference_maxPoolNxN_U0_out_feature_2_13_d0.read();
}

void inference::thread_poolOut2_2_13_i_we0() {
    poolOut2_2_13_i_we0 = inference_maxPoolNxN_U0_out_feature_2_13_we0.read();
}

void inference::thread_poolOut2_2_13_i_write() {
    poolOut2_2_13_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_13.read();
}

void inference::thread_poolOut2_2_13_t_address0() {
    poolOut2_2_13_t_address0 = inference_conv2d_U0_x_2_13_address0.read();
}

void inference::thread_poolOut2_2_13_t_address1() {
    poolOut2_2_13_t_address1 = inference_conv2d_U0_x_2_13_address1.read();
}

void inference::thread_poolOut2_2_13_t_ce0() {
    poolOut2_2_13_t_ce0 = inference_conv2d_U0_x_2_13_ce0.read();
}

void inference::thread_poolOut2_2_13_t_ce1() {
    poolOut2_2_13_t_ce1 = inference_conv2d_U0_x_2_13_ce1.read();
}

void inference::thread_poolOut2_2_13_t_d0() {
    poolOut2_2_13_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_13_t_d1() {
    poolOut2_2_13_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_13_t_read() {
    poolOut2_2_13_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_13_t_we0() {
    poolOut2_2_13_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_13_t_we1() {
    poolOut2_2_13_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_14_U_ap_dummy_ce() {
    poolOut2_2_14_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_14_i_address0() {
    poolOut2_2_14_i_address0 = inference_maxPoolNxN_U0_out_feature_2_14_address0.read();
}

void inference::thread_poolOut2_2_14_i_address1() {
    poolOut2_2_14_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_14_i_ce0() {
    poolOut2_2_14_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_14_ce0.read();
}

void inference::thread_poolOut2_2_14_i_ce1() {
    poolOut2_2_14_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_14_i_d0() {
    poolOut2_2_14_i_d0 = inference_maxPoolNxN_U0_out_feature_2_14_d0.read();
}

void inference::thread_poolOut2_2_14_i_we0() {
    poolOut2_2_14_i_we0 = inference_maxPoolNxN_U0_out_feature_2_14_we0.read();
}

void inference::thread_poolOut2_2_14_i_write() {
    poolOut2_2_14_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_14.read();
}

void inference::thread_poolOut2_2_14_t_address0() {
    poolOut2_2_14_t_address0 = inference_conv2d_U0_x_2_14_address0.read();
}

void inference::thread_poolOut2_2_14_t_address1() {
    poolOut2_2_14_t_address1 = inference_conv2d_U0_x_2_14_address1.read();
}

void inference::thread_poolOut2_2_14_t_ce0() {
    poolOut2_2_14_t_ce0 = inference_conv2d_U0_x_2_14_ce0.read();
}

void inference::thread_poolOut2_2_14_t_ce1() {
    poolOut2_2_14_t_ce1 = inference_conv2d_U0_x_2_14_ce1.read();
}

void inference::thread_poolOut2_2_14_t_d0() {
    poolOut2_2_14_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_14_t_d1() {
    poolOut2_2_14_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_14_t_read() {
    poolOut2_2_14_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_14_t_we0() {
    poolOut2_2_14_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_14_t_we1() {
    poolOut2_2_14_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_15_U_ap_dummy_ce() {
    poolOut2_2_15_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_15_i_address0() {
    poolOut2_2_15_i_address0 = inference_maxPoolNxN_U0_out_feature_2_15_address0.read();
}

void inference::thread_poolOut2_2_15_i_address1() {
    poolOut2_2_15_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_15_i_ce0() {
    poolOut2_2_15_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_15_ce0.read();
}

void inference::thread_poolOut2_2_15_i_ce1() {
    poolOut2_2_15_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_15_i_d0() {
    poolOut2_2_15_i_d0 = inference_maxPoolNxN_U0_out_feature_2_15_d0.read();
}

void inference::thread_poolOut2_2_15_i_we0() {
    poolOut2_2_15_i_we0 = inference_maxPoolNxN_U0_out_feature_2_15_we0.read();
}

void inference::thread_poolOut2_2_15_i_write() {
    poolOut2_2_15_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_15.read();
}

void inference::thread_poolOut2_2_15_t_address0() {
    poolOut2_2_15_t_address0 = inference_conv2d_U0_x_2_15_address0.read();
}

void inference::thread_poolOut2_2_15_t_address1() {
    poolOut2_2_15_t_address1 = inference_conv2d_U0_x_2_15_address1.read();
}

void inference::thread_poolOut2_2_15_t_ce0() {
    poolOut2_2_15_t_ce0 = inference_conv2d_U0_x_2_15_ce0.read();
}

void inference::thread_poolOut2_2_15_t_ce1() {
    poolOut2_2_15_t_ce1 = inference_conv2d_U0_x_2_15_ce1.read();
}

void inference::thread_poolOut2_2_15_t_d0() {
    poolOut2_2_15_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_15_t_d1() {
    poolOut2_2_15_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_15_t_read() {
    poolOut2_2_15_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_15_t_we0() {
    poolOut2_2_15_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_15_t_we1() {
    poolOut2_2_15_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_1_U_ap_dummy_ce() {
    poolOut2_2_1_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_1_i_address0() {
    poolOut2_2_1_i_address0 = inference_maxPoolNxN_U0_out_feature_2_1_address0.read();
}

void inference::thread_poolOut2_2_1_i_address1() {
    poolOut2_2_1_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_1_i_ce0() {
    poolOut2_2_1_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_1_ce0.read();
}

void inference::thread_poolOut2_2_1_i_ce1() {
    poolOut2_2_1_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_1_i_d0() {
    poolOut2_2_1_i_d0 = inference_maxPoolNxN_U0_out_feature_2_1_d0.read();
}

void inference::thread_poolOut2_2_1_i_we0() {
    poolOut2_2_1_i_we0 = inference_maxPoolNxN_U0_out_feature_2_1_we0.read();
}

void inference::thread_poolOut2_2_1_i_write() {
    poolOut2_2_1_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_1.read();
}

void inference::thread_poolOut2_2_1_t_address0() {
    poolOut2_2_1_t_address0 = inference_conv2d_U0_x_2_1_address0.read();
}

void inference::thread_poolOut2_2_1_t_address1() {
    poolOut2_2_1_t_address1 = inference_conv2d_U0_x_2_1_address1.read();
}

void inference::thread_poolOut2_2_1_t_ce0() {
    poolOut2_2_1_t_ce0 = inference_conv2d_U0_x_2_1_ce0.read();
}

void inference::thread_poolOut2_2_1_t_ce1() {
    poolOut2_2_1_t_ce1 = inference_conv2d_U0_x_2_1_ce1.read();
}

void inference::thread_poolOut2_2_1_t_d0() {
    poolOut2_2_1_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_1_t_d1() {
    poolOut2_2_1_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_1_t_read() {
    poolOut2_2_1_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_1_t_we0() {
    poolOut2_2_1_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_1_t_we1() {
    poolOut2_2_1_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_2_U_ap_dummy_ce() {
    poolOut2_2_2_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_2_i_address0() {
    poolOut2_2_2_i_address0 = inference_maxPoolNxN_U0_out_feature_2_2_address0.read();
}

void inference::thread_poolOut2_2_2_i_address1() {
    poolOut2_2_2_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_2_i_ce0() {
    poolOut2_2_2_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_2_ce0.read();
}

void inference::thread_poolOut2_2_2_i_ce1() {
    poolOut2_2_2_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_2_i_d0() {
    poolOut2_2_2_i_d0 = inference_maxPoolNxN_U0_out_feature_2_2_d0.read();
}

void inference::thread_poolOut2_2_2_i_we0() {
    poolOut2_2_2_i_we0 = inference_maxPoolNxN_U0_out_feature_2_2_we0.read();
}

void inference::thread_poolOut2_2_2_i_write() {
    poolOut2_2_2_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_2.read();
}

void inference::thread_poolOut2_2_2_t_address0() {
    poolOut2_2_2_t_address0 = inference_conv2d_U0_x_2_2_address0.read();
}

void inference::thread_poolOut2_2_2_t_address1() {
    poolOut2_2_2_t_address1 = inference_conv2d_U0_x_2_2_address1.read();
}

void inference::thread_poolOut2_2_2_t_ce0() {
    poolOut2_2_2_t_ce0 = inference_conv2d_U0_x_2_2_ce0.read();
}

void inference::thread_poolOut2_2_2_t_ce1() {
    poolOut2_2_2_t_ce1 = inference_conv2d_U0_x_2_2_ce1.read();
}

void inference::thread_poolOut2_2_2_t_d0() {
    poolOut2_2_2_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_2_t_d1() {
    poolOut2_2_2_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_2_t_read() {
    poolOut2_2_2_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_2_t_we0() {
    poolOut2_2_2_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_2_t_we1() {
    poolOut2_2_2_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_3_U_ap_dummy_ce() {
    poolOut2_2_3_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_3_i_address0() {
    poolOut2_2_3_i_address0 = inference_maxPoolNxN_U0_out_feature_2_3_address0.read();
}

void inference::thread_poolOut2_2_3_i_address1() {
    poolOut2_2_3_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_3_i_ce0() {
    poolOut2_2_3_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_3_ce0.read();
}

void inference::thread_poolOut2_2_3_i_ce1() {
    poolOut2_2_3_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_3_i_d0() {
    poolOut2_2_3_i_d0 = inference_maxPoolNxN_U0_out_feature_2_3_d0.read();
}

void inference::thread_poolOut2_2_3_i_we0() {
    poolOut2_2_3_i_we0 = inference_maxPoolNxN_U0_out_feature_2_3_we0.read();
}

void inference::thread_poolOut2_2_3_i_write() {
    poolOut2_2_3_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_3.read();
}

void inference::thread_poolOut2_2_3_t_address0() {
    poolOut2_2_3_t_address0 = inference_conv2d_U0_x_2_3_address0.read();
}

void inference::thread_poolOut2_2_3_t_address1() {
    poolOut2_2_3_t_address1 = inference_conv2d_U0_x_2_3_address1.read();
}

void inference::thread_poolOut2_2_3_t_ce0() {
    poolOut2_2_3_t_ce0 = inference_conv2d_U0_x_2_3_ce0.read();
}

void inference::thread_poolOut2_2_3_t_ce1() {
    poolOut2_2_3_t_ce1 = inference_conv2d_U0_x_2_3_ce1.read();
}

void inference::thread_poolOut2_2_3_t_d0() {
    poolOut2_2_3_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_3_t_d1() {
    poolOut2_2_3_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_3_t_read() {
    poolOut2_2_3_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_3_t_we0() {
    poolOut2_2_3_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_3_t_we1() {
    poolOut2_2_3_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_4_U_ap_dummy_ce() {
    poolOut2_2_4_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_4_i_address0() {
    poolOut2_2_4_i_address0 = inference_maxPoolNxN_U0_out_feature_2_4_address0.read();
}

void inference::thread_poolOut2_2_4_i_address1() {
    poolOut2_2_4_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_4_i_ce0() {
    poolOut2_2_4_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_4_ce0.read();
}

void inference::thread_poolOut2_2_4_i_ce1() {
    poolOut2_2_4_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_4_i_d0() {
    poolOut2_2_4_i_d0 = inference_maxPoolNxN_U0_out_feature_2_4_d0.read();
}

void inference::thread_poolOut2_2_4_i_we0() {
    poolOut2_2_4_i_we0 = inference_maxPoolNxN_U0_out_feature_2_4_we0.read();
}

void inference::thread_poolOut2_2_4_i_write() {
    poolOut2_2_4_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_4.read();
}

void inference::thread_poolOut2_2_4_t_address0() {
    poolOut2_2_4_t_address0 = inference_conv2d_U0_x_2_4_address0.read();
}

void inference::thread_poolOut2_2_4_t_address1() {
    poolOut2_2_4_t_address1 = inference_conv2d_U0_x_2_4_address1.read();
}

void inference::thread_poolOut2_2_4_t_ce0() {
    poolOut2_2_4_t_ce0 = inference_conv2d_U0_x_2_4_ce0.read();
}

void inference::thread_poolOut2_2_4_t_ce1() {
    poolOut2_2_4_t_ce1 = inference_conv2d_U0_x_2_4_ce1.read();
}

void inference::thread_poolOut2_2_4_t_d0() {
    poolOut2_2_4_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_4_t_d1() {
    poolOut2_2_4_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_4_t_read() {
    poolOut2_2_4_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_4_t_we0() {
    poolOut2_2_4_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_4_t_we1() {
    poolOut2_2_4_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_5_U_ap_dummy_ce() {
    poolOut2_2_5_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_5_i_address0() {
    poolOut2_2_5_i_address0 = inference_maxPoolNxN_U0_out_feature_2_5_address0.read();
}

void inference::thread_poolOut2_2_5_i_address1() {
    poolOut2_2_5_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_5_i_ce0() {
    poolOut2_2_5_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_5_ce0.read();
}

void inference::thread_poolOut2_2_5_i_ce1() {
    poolOut2_2_5_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_5_i_d0() {
    poolOut2_2_5_i_d0 = inference_maxPoolNxN_U0_out_feature_2_5_d0.read();
}

void inference::thread_poolOut2_2_5_i_we0() {
    poolOut2_2_5_i_we0 = inference_maxPoolNxN_U0_out_feature_2_5_we0.read();
}

void inference::thread_poolOut2_2_5_i_write() {
    poolOut2_2_5_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_5.read();
}

void inference::thread_poolOut2_2_5_t_address0() {
    poolOut2_2_5_t_address0 = inference_conv2d_U0_x_2_5_address0.read();
}

void inference::thread_poolOut2_2_5_t_address1() {
    poolOut2_2_5_t_address1 = inference_conv2d_U0_x_2_5_address1.read();
}

void inference::thread_poolOut2_2_5_t_ce0() {
    poolOut2_2_5_t_ce0 = inference_conv2d_U0_x_2_5_ce0.read();
}

void inference::thread_poolOut2_2_5_t_ce1() {
    poolOut2_2_5_t_ce1 = inference_conv2d_U0_x_2_5_ce1.read();
}

void inference::thread_poolOut2_2_5_t_d0() {
    poolOut2_2_5_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_5_t_d1() {
    poolOut2_2_5_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_5_t_read() {
    poolOut2_2_5_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_5_t_we0() {
    poolOut2_2_5_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_5_t_we1() {
    poolOut2_2_5_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_6_U_ap_dummy_ce() {
    poolOut2_2_6_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_6_i_address0() {
    poolOut2_2_6_i_address0 = inference_maxPoolNxN_U0_out_feature_2_6_address0.read();
}

void inference::thread_poolOut2_2_6_i_address1() {
    poolOut2_2_6_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_6_i_ce0() {
    poolOut2_2_6_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_6_ce0.read();
}

void inference::thread_poolOut2_2_6_i_ce1() {
    poolOut2_2_6_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_6_i_d0() {
    poolOut2_2_6_i_d0 = inference_maxPoolNxN_U0_out_feature_2_6_d0.read();
}

void inference::thread_poolOut2_2_6_i_we0() {
    poolOut2_2_6_i_we0 = inference_maxPoolNxN_U0_out_feature_2_6_we0.read();
}

void inference::thread_poolOut2_2_6_i_write() {
    poolOut2_2_6_i_write = ap_chn_write_inference_maxPoolNxN_U0_poolOut2_2_6.read();
}

void inference::thread_poolOut2_2_6_t_address0() {
    poolOut2_2_6_t_address0 = inference_conv2d_U0_x_2_6_address0.read();
}

void inference::thread_poolOut2_2_6_t_address1() {
    poolOut2_2_6_t_address1 = inference_conv2d_U0_x_2_6_address1.read();
}

void inference::thread_poolOut2_2_6_t_ce0() {
    poolOut2_2_6_t_ce0 = inference_conv2d_U0_x_2_6_ce0.read();
}

void inference::thread_poolOut2_2_6_t_ce1() {
    poolOut2_2_6_t_ce1 = inference_conv2d_U0_x_2_6_ce1.read();
}

void inference::thread_poolOut2_2_6_t_d0() {
    poolOut2_2_6_t_d0 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_6_t_d1() {
    poolOut2_2_6_t_d1 = ap_const_lv32_0;
}

void inference::thread_poolOut2_2_6_t_read() {
    poolOut2_2_6_t_read = inference_conv2d_U0_ap_ready.read();
}

void inference::thread_poolOut2_2_6_t_we0() {
    poolOut2_2_6_t_we0 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_6_t_we1() {
    poolOut2_2_6_t_we1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_7_U_ap_dummy_ce() {
    poolOut2_2_7_U_ap_dummy_ce = ap_const_logic_1;
}

void inference::thread_poolOut2_2_7_i_address0() {
    poolOut2_2_7_i_address0 = inference_maxPoolNxN_U0_out_feature_2_7_address0.read();
}

void inference::thread_poolOut2_2_7_i_address1() {
    poolOut2_2_7_i_address1 = ap_const_lv3_0;
}

void inference::thread_poolOut2_2_7_i_ce0() {
    poolOut2_2_7_i_ce0 = inference_maxPoolNxN_U0_out_feature_2_7_ce0.read();
}

void inference::thread_poolOut2_2_7_i_ce1() {
    poolOut2_2_7_i_ce1 = ap_const_logic_0;
}

void inference::thread_poolOut2_2_7_i_d0() {
    poolOut2_2_7_i_d0 = inference_maxPoolNxN_U0_out_feature_2_7_d0.read();
}

void inference::thread_poolOut2_2_7_i_we0() {
    poolOut2_2_7_i_we0 = inference_maxPoolNxN_U0_out_feature_2_7_we0.read();
}

}

