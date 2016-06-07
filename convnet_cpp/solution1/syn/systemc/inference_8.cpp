#include "inference.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void inference::thread_x_in_4_4_0_i_ce1() {
    x_in_4_4_0_i_ce1 = ap_const_logic_0;
}

void inference::thread_x_in_4_4_0_i_d0() {
    x_in_4_4_0_i_d0 = inference_Loop_1_proc_U0_x_in_4_4_0_d0.read();
}

void inference::thread_x_in_4_4_0_i_we0() {
    x_in_4_4_0_i_we0 = inference_Loop_1_proc_U0_x_in_4_4_0_we0.read();
}

void inference::thread_x_in_4_4_0_i_write() {
    x_in_4_4_0_i_write = ap_chn_write_inference_Loop_1_proc_U0_x_in_4_4_0.read();
}

void inference::thread_x_in_4_4_0_t_address0() {
    x_in_4_4_0_t_address0 = inference_conv2d_2_U0_x_4_4_0_address0.read();
}

void inference::thread_x_in_4_4_0_t_address1() {
    x_in_4_4_0_t_address1 = inference_conv2d_2_U0_x_4_4_0_address1.read();
}

void inference::thread_x_in_4_4_0_t_ce0() {
    x_in_4_4_0_t_ce0 = inference_conv2d_2_U0_x_4_4_0_ce0.read();
}

void inference::thread_x_in_4_4_0_t_ce1() {
    x_in_4_4_0_t_ce1 = inference_conv2d_2_U0_x_4_4_0_ce1.read();
}

void inference::thread_x_in_4_4_0_t_d0() {
    x_in_4_4_0_t_d0 = ap_const_lv32_0;
}

void inference::thread_x_in_4_4_0_t_d1() {
    x_in_4_4_0_t_d1 = ap_const_lv32_0;
}

void inference::thread_x_in_4_4_0_t_read() {
    x_in_4_4_0_t_read = inference_conv2d_2_U0_ap_ready.read();
}

void inference::thread_x_in_4_4_0_t_we0() {
    x_in_4_4_0_t_we0 = ap_const_logic_0;
}

void inference::thread_x_in_4_4_0_t_we1() {
    x_in_4_4_0_t_we1 = ap_const_logic_0;
}

}

