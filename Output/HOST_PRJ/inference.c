/*******************************************************************************
 *
 * Filename: inference.c
 * Version: 0.1 
 * Description: RIFFA Builder User function
 * Author: Auto Generated 
 * History:
 *
 */

#include "riffa_run.h"

#define FPGA_PORT_NUM 65
#define PCIE_USERCLK_FREQ_MHZ 250
#define MAINCLK_DIV 2
#define PFM_TICK_DIV 1

double inference(fpga_t* fpga, char ap_rst, short* inputImage_address0, char* inputImage_ce0, int* inputImage_d0, float inputImage_q0, char* inputImage_we0, char* Filter1_address0, char* Filter1_ce0, int* Filter1_d0, float Filter1_q0, char* Filter1_we0, char* bias1_address0, char* bias1_ce0, int* bias1_d0, float bias1_q0, char* bias1_we0, short* Filter2_address0, char* Filter2_ce0, int* Filter2_d0, float Filter2_q0, char* Filter2_we0, char* bias2_address0, char* bias2_ce0, int* bias2_d0, float bias2_q0, char* bias2_we0, short* Filter3_address0, char* Filter3_ce0, int* Filter3_d0, float Filter3_q0, char* Filter3_we0, char* bias3_address0, char* bias3_ce0, int* bias3_d0, float bias3_q0, char* bias3_we0, short* fcWeight_address0, char* fcWeight_ce0, int* fcWeight_d0, float fcWeight_q0, char* fcWeight_we0, char* fcBias_address0, char* fcBias_ce0, int* fcBias_d0, float fcBias_q0, char* fcBias_we0, short* smWeight_address0, char* smWeight_ce0, int* smWeight_d0, float smWeight_q0, char* smWeight_we0, char* smBias_address0, char* smBias_ce0, int* smBias_d0, float smBias_q0, char* smBias_we0, float* outDigit, char* outDigit_ap_vld, int debug_level) {
    int i;
    double run_time_ms;
    FPGA_PORT ports[FPGA_PORT_NUM];
    FPGA_PORT* ptr;

    ptr = &ports[0];
    sprintf(ptr->port_name, "%s", "m0_ap_clk");
    ptr->direction = DIR_AP_UNKNOW;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[1];
    sprintf(ptr->port_name, "%s", "m0_ap_rst");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[2];
    sprintf(ptr->port_name, "%s", "m0_inputImage_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 10;
    ptr->c_width = 16;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[3];
    sprintf(ptr->port_name, "%s", "m0_inputImage_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 11;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[4];
    sprintf(ptr->port_name, "%s", "m0_inputImage_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 12;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[5];
    sprintf(ptr->port_name, "%s", "m0_inputImage_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 44;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[6];
    sprintf(ptr->port_name, "%s", "m0_inputImage_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 76;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[7];
    sprintf(ptr->port_name, "%s", "m0_Filter1_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 77;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 8;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[8];
    sprintf(ptr->port_name, "%s", "m0_Filter1_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 85;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[9];
    sprintf(ptr->port_name, "%s", "m0_Filter1_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 86;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[10];
    sprintf(ptr->port_name, "%s", "m0_Filter1_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 118;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[11];
    sprintf(ptr->port_name, "%s", "m0_Filter1_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 150;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[12];
    sprintf(ptr->port_name, "%s", "m0_bias1_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 151;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 3;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[13];
    sprintf(ptr->port_name, "%s", "m0_bias1_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 154;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[14];
    sprintf(ptr->port_name, "%s", "m0_bias1_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 155;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[15];
    sprintf(ptr->port_name, "%s", "m0_bias1_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 187;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[16];
    sprintf(ptr->port_name, "%s", "m0_bias1_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 219;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[17];
    sprintf(ptr->port_name, "%s", "m0_Filter2_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 220;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 12;
    ptr->c_width = 16;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[18];
    sprintf(ptr->port_name, "%s", "m0_Filter2_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 232;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[19];
    sprintf(ptr->port_name, "%s", "m0_Filter2_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 233;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[20];
    sprintf(ptr->port_name, "%s", "m0_Filter2_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 265;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[21];
    sprintf(ptr->port_name, "%s", "m0_Filter2_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 297;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[22];
    sprintf(ptr->port_name, "%s", "m0_bias2_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 298;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 4;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[23];
    sprintf(ptr->port_name, "%s", "m0_bias2_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 302;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[24];
    sprintf(ptr->port_name, "%s", "m0_bias2_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 303;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[25];
    sprintf(ptr->port_name, "%s", "m0_bias2_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 335;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[26];
    sprintf(ptr->port_name, "%s", "m0_bias2_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 367;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[27];
    sprintf(ptr->port_name, "%s", "m0_Filter3_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 368;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 16;
    ptr->c_width = 16;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[28];
    sprintf(ptr->port_name, "%s", "m0_Filter3_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 384;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[29];
    sprintf(ptr->port_name, "%s", "m0_Filter3_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 385;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[30];
    sprintf(ptr->port_name, "%s", "m0_Filter3_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 417;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[31];
    sprintf(ptr->port_name, "%s", "m0_Filter3_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 449;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[32];
    sprintf(ptr->port_name, "%s", "m0_bias3_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 450;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 7;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[33];
    sprintf(ptr->port_name, "%s", "m0_bias3_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 457;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[34];
    sprintf(ptr->port_name, "%s", "m0_bias3_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 458;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[35];
    sprintf(ptr->port_name, "%s", "m0_bias3_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 490;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[36];
    sprintf(ptr->port_name, "%s", "m0_bias3_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 522;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[37];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 523;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 14;
    ptr->c_width = 16;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[38];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 537;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[39];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 538;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[40];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 570;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[41];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 602;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[42];
    sprintf(ptr->port_name, "%s", "m0_fcBias_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 603;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 7;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[43];
    sprintf(ptr->port_name, "%s", "m0_fcBias_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 610;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[44];
    sprintf(ptr->port_name, "%s", "m0_fcBias_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 611;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[45];
    sprintf(ptr->port_name, "%s", "m0_fcBias_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 643;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[46];
    sprintf(ptr->port_name, "%s", "m0_fcBias_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 675;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[47];
    sprintf(ptr->port_name, "%s", "m0_smWeight_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 676;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 10;
    ptr->c_width = 16;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[48];
    sprintf(ptr->port_name, "%s", "m0_smWeight_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 686;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[49];
    sprintf(ptr->port_name, "%s", "m0_smWeight_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 687;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[50];
    sprintf(ptr->port_name, "%s", "m0_smWeight_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 719;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[51];
    sprintf(ptr->port_name, "%s", "m0_smWeight_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 751;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[52];
    sprintf(ptr->port_name, "%s", "m0_smBias_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 752;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 4;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[53];
    sprintf(ptr->port_name, "%s", "m0_smBias_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 756;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[54];
    sprintf(ptr->port_name, "%s", "m0_smBias_d0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 757;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[55];
    sprintf(ptr->port_name, "%s", "m0_smBias_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 789;
    ptr->direction = DIR_IN;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[56];
    sprintf(ptr->port_name, "%s", "m0_smBias_we0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 821;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[57];
    sprintf(ptr->port_name, "%s", "m0_outDigit");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 822;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[58];
    sprintf(ptr->port_name, "%s", "m0_outDigit_ap_vld");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 854;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[59];
    sprintf(ptr->port_name, "%s", "m0_ap_done");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 855;
    ptr->direction = DIR_AP_DONE;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[60];
    sprintf(ptr->port_name, "%s", "m0_ap_start");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 856;
    ptr->direction = DIR_AP_START;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[61];
    sprintf(ptr->port_name, "%s", "m0_ap_idle");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 857;
    ptr->direction = DIR_AP_IDLE;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[62];
    sprintf(ptr->port_name, "%s", "m0_ap_ready");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 858;
    ptr->direction = DIR_AP_READY;
    ptr->channel = 0;
    ptr->width = 1;
    ptr->c_width = 8;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[63];
    sprintf(ptr->port_name, "%s", "Module m0_inference start");
    ptr->bit_pos = 859;
    ptr->style = PORT_PFM_COUNTER;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[64];
    sprintf(ptr->port_name, "%s", "Module m0_inference done");
    ptr->bit_pos = 891;
    ptr->style = PORT_PFM_COUNTER;
    ptr->direction = DIR_OUT;
    ptr->channel = 0;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[1];
    ptr->data = *(__int64*)(&ap_rst);
    ptr = &ports[5];
    ptr->data = *(__int64*)(&inputImage_q0);
    ptr = &ports[10];
    ptr->data = *(__int64*)(&Filter1_q0);
    ptr = &ports[15];
    ptr->data = *(__int64*)(&bias1_q0);
    ptr = &ports[20];
    ptr->data = *(__int64*)(&Filter2_q0);
    ptr = &ports[25];
    ptr->data = *(__int64*)(&bias2_q0);
    ptr = &ports[30];
    ptr->data = *(__int64*)(&Filter3_q0);
    ptr = &ports[35];
    ptr->data = *(__int64*)(&bias3_q0);
    ptr = &ports[40];
    ptr->data = *(__int64*)(&fcWeight_q0);
    ptr = &ports[45];
    ptr->data = *(__int64*)(&fcBias_q0);
    ptr = &ports[50];
    ptr->data = *(__int64*)(&smWeight_q0);
    ptr = &ports[55];
    ptr->data = *(__int64*)(&smBias_q0);
    run_time_ms = riffa_run(ports, FPGA_PORT_NUM, debug_level);

    ptr = &ports[2];
    *inputImage_address0 = ptr->data;

    ptr = &ports[3];
    *inputImage_ce0 = ptr->data;

    ptr = &ports[4];
    *inputImage_d0 = ptr->data;

    ptr = &ports[6];
    *inputImage_we0 = ptr->data;

    ptr = &ports[7];
    *Filter1_address0 = ptr->data;

    ptr = &ports[8];
    *Filter1_ce0 = ptr->data;

    ptr = &ports[9];
    *Filter1_d0 = ptr->data;

    ptr = &ports[11];
    *Filter1_we0 = ptr->data;

    ptr = &ports[12];
    *bias1_address0 = ptr->data;

    ptr = &ports[13];
    *bias1_ce0 = ptr->data;

    ptr = &ports[14];
    *bias1_d0 = ptr->data;

    ptr = &ports[16];
    *bias1_we0 = ptr->data;

    ptr = &ports[17];
    *Filter2_address0 = ptr->data;

    ptr = &ports[18];
    *Filter2_ce0 = ptr->data;

    ptr = &ports[19];
    *Filter2_d0 = ptr->data;

    ptr = &ports[21];
    *Filter2_we0 = ptr->data;

    ptr = &ports[22];
    *bias2_address0 = ptr->data;

    ptr = &ports[23];
    *bias2_ce0 = ptr->data;

    ptr = &ports[24];
    *bias2_d0 = ptr->data;

    ptr = &ports[26];
    *bias2_we0 = ptr->data;

    ptr = &ports[27];
    *Filter3_address0 = ptr->data;

    ptr = &ports[28];
    *Filter3_ce0 = ptr->data;

    ptr = &ports[29];
    *Filter3_d0 = ptr->data;

    ptr = &ports[31];
    *Filter3_we0 = ptr->data;

    ptr = &ports[32];
    *bias3_address0 = ptr->data;

    ptr = &ports[33];
    *bias3_ce0 = ptr->data;

    ptr = &ports[34];
    *bias3_d0 = ptr->data;

    ptr = &ports[36];
    *bias3_we0 = ptr->data;

    ptr = &ports[37];
    *fcWeight_address0 = ptr->data;

    ptr = &ports[38];
    *fcWeight_ce0 = ptr->data;

    ptr = &ports[39];
    *fcWeight_d0 = ptr->data;

    ptr = &ports[41];
    *fcWeight_we0 = ptr->data;

    ptr = &ports[42];
    *fcBias_address0 = ptr->data;

    ptr = &ports[43];
    *fcBias_ce0 = ptr->data;

    ptr = &ports[44];
    *fcBias_d0 = ptr->data;

    ptr = &ports[46];
    *fcBias_we0 = ptr->data;

    ptr = &ports[47];
    *smWeight_address0 = ptr->data;

    ptr = &ports[48];
    *smWeight_ce0 = ptr->data;

    ptr = &ports[49];
    *smWeight_d0 = ptr->data;

    ptr = &ports[51];
    *smWeight_we0 = ptr->data;

    ptr = &ports[52];
    *smBias_address0 = ptr->data;

    ptr = &ports[53];
    *smBias_ce0 = ptr->data;

    ptr = &ports[54];
    *smBias_d0 = ptr->data;

    ptr = &ports[56];
    *smBias_we0 = ptr->data;

    ptr = &ports[57];
    *outDigit = ptr->data;

    ptr = &ports[58];
    *outDigit_ap_vld = ptr->data;

    riffa_performance(ports, FPGA_PORT_NUM, debug_level);

    printf("Performance report. (time calculated by RIFFA user_clk = 250 MHz)\n");
    for (i = 0; i < FPGA_PORT_NUM; i ++) {
        ptr = &ports[i];
        if (ptr->style == PORT_PFM_COUNTER) {
            printf("  %s: %d (%f us)\n", ptr->port_name, ptr->data, ptr->data*MAINCLK_DIV*PFM_TICK_DIV*1.0/PCIE_USERCLK_FREQ_MHZ);
        }
        else if (ptr->style == PORT_DATA_COUNTER) {
            printf("  %s: %d\n", ptr->port_name, ptr->data);
        }
    }
    return run_time_ms;
}

