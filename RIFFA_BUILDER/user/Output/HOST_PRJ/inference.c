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

#define FPGA_PORT_NUM 56
#define PCIE_USERCLK_FREQ_MHZ 250
#define MAINCLK_DIV 2
#define PFM_TICK_DIV 1

double inference(fpga_t* fpga, int* inputImage, int* Filter1, int* bias1, int* Filter2, int* bias2, int* Filter3, int* bias3, int* fcWeight, int* fcBias, int* smWeight, int* smBias, int* outDigit, int debug_level) {
    int i;
    double run_time_ms;
    FPGA_PORT ports[FPGA_PORT_NUM];
    FPGA_PORT* ptr;

    ptr = &ports[0];
    sprintf(ptr->port_name, "%s", "m0_inputImage");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 2;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 784;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[1];
    sprintf(ptr->port_name, "%s", "m0_Filter1");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 3;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 150;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[2];
    sprintf(ptr->port_name, "%s", "m0_bias1");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 4;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 6;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[3];
    sprintf(ptr->port_name, "%s", "m0_Filter2");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 5;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 2400;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[4];
    sprintf(ptr->port_name, "%s", "m0_bias2");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 6;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 16;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[5];
    sprintf(ptr->port_name, "%s", "m0_Filter3");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 7;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 48000;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[6];
    sprintf(ptr->port_name, "%s", "m0_bias3");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 8;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 120;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[7];
    sprintf(ptr->port_name, "%s", "m0_fcWeight");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 9;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 10080;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[8];
    sprintf(ptr->port_name, "%s", "m0_fcBias");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 10;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 84;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[9];
    sprintf(ptr->port_name, "%s", "m0_smWeight");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 11;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 840;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[10];
    sprintf(ptr->port_name, "%s", "m0_smBias");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 0;
    ptr->direction = DIR_IN;
    ptr->channel = 12;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 10;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[11];
    sprintf(ptr->port_name, "%s", "m0_outDigit");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 1056;
    ptr->direction = DIR_OUT;
    ptr->channel = 2;
    ptr->width = 32;
    ptr->c_width = 32;
    ptr->words = 1;
    ptr->addr = 0;
    ptr->last = 1;
    ptr->off = 0;
    ptr->timeout = 10000;
    ptr->fpga = fpga;

    ptr = &ports[12];
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

    ptr = &ports[13];
    sprintf(ptr->port_name, "%s", "m0_ap_rst_n");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1184;
    ptr->direction = DIR_AP_RST;
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
    sprintf(ptr->port_name, "%s", "m0_ap_done");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1185;
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

    ptr = &ports[15];
    sprintf(ptr->port_name, "%s", "m0_ap_start");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1186;
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

    ptr = &ports[16];
    sprintf(ptr->port_name, "%s", "m0_ap_idle");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1187;
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

    ptr = &ports[17];
    sprintf(ptr->port_name, "%s", "m0_ap_ready");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1188;
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

    ptr = &ports[18];
    sprintf(ptr->port_name, "%s", "Module m0_inference start");
    ptr->bit_pos = 1189;
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

    ptr = &ports[19];
    sprintf(ptr->port_name, "%s", "Module m0_inference done");
    ptr->bit_pos = 1221;
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

    ptr = &ports[20];
    sprintf(ptr->port_name, "%s", "AXIS m0_inputImage start at");
    ptr->bit_pos = 0;
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

    ptr = &ports[21];
    sprintf(ptr->port_name, "%s", "AXIS m0_inputImage end at");
    ptr->bit_pos = 32;
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

    ptr = &ports[22];
    sprintf(ptr->port_name, "%s", "AXIS m0_inputImage transferred bytes");
    ptr->bit_pos = 64;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[23];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter1 start at");
    ptr->bit_pos = 96;
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

    ptr = &ports[24];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter1 end at");
    ptr->bit_pos = 128;
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

    ptr = &ports[25];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter1 transferred bytes");
    ptr->bit_pos = 160;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[26];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias1 start at");
    ptr->bit_pos = 192;
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

    ptr = &ports[27];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias1 end at");
    ptr->bit_pos = 224;
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

    ptr = &ports[28];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias1 transferred bytes");
    ptr->bit_pos = 256;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[29];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter2 start at");
    ptr->bit_pos = 288;
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

    ptr = &ports[30];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter2 end at");
    ptr->bit_pos = 320;
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

    ptr = &ports[31];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter2 transferred bytes");
    ptr->bit_pos = 352;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[32];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias2 start at");
    ptr->bit_pos = 384;
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

    ptr = &ports[33];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias2 end at");
    ptr->bit_pos = 416;
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

    ptr = &ports[34];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias2 transferred bytes");
    ptr->bit_pos = 448;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[35];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter3 start at");
    ptr->bit_pos = 480;
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

    ptr = &ports[36];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter3 end at");
    ptr->bit_pos = 512;
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

    ptr = &ports[37];
    sprintf(ptr->port_name, "%s", "AXIS m0_Filter3 transferred bytes");
    ptr->bit_pos = 544;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[38];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias3 start at");
    ptr->bit_pos = 576;
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

    ptr = &ports[39];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias3 end at");
    ptr->bit_pos = 608;
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

    ptr = &ports[40];
    sprintf(ptr->port_name, "%s", "AXIS m0_bias3 transferred bytes");
    ptr->bit_pos = 640;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[41];
    sprintf(ptr->port_name, "%s", "AXIS m0_fcWeight start at");
    ptr->bit_pos = 672;
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

    ptr = &ports[42];
    sprintf(ptr->port_name, "%s", "AXIS m0_fcWeight end at");
    ptr->bit_pos = 704;
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

    ptr = &ports[43];
    sprintf(ptr->port_name, "%s", "AXIS m0_fcWeight transferred bytes");
    ptr->bit_pos = 736;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[44];
    sprintf(ptr->port_name, "%s", "AXIS m0_fcBias start at");
    ptr->bit_pos = 768;
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

    ptr = &ports[45];
    sprintf(ptr->port_name, "%s", "AXIS m0_fcBias end at");
    ptr->bit_pos = 800;
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

    ptr = &ports[46];
    sprintf(ptr->port_name, "%s", "AXIS m0_fcBias transferred bytes");
    ptr->bit_pos = 832;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[47];
    sprintf(ptr->port_name, "%s", "AXIS m0_smWeight start at");
    ptr->bit_pos = 864;
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

    ptr = &ports[48];
    sprintf(ptr->port_name, "%s", "AXIS m0_smWeight end at");
    ptr->bit_pos = 896;
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

    ptr = &ports[49];
    sprintf(ptr->port_name, "%s", "AXIS m0_smWeight transferred bytes");
    ptr->bit_pos = 928;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[50];
    sprintf(ptr->port_name, "%s", "AXIS m0_smBias start at");
    ptr->bit_pos = 960;
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

    ptr = &ports[51];
    sprintf(ptr->port_name, "%s", "AXIS m0_smBias end at");
    ptr->bit_pos = 992;
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

    ptr = &ports[52];
    sprintf(ptr->port_name, "%s", "AXIS m0_smBias transferred bytes");
    ptr->bit_pos = 1024;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[53];
    sprintf(ptr->port_name, "%s", "AXIS m0_outDigit start at");
    ptr->bit_pos = 1088;
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

    ptr = &ports[54];
    sprintf(ptr->port_name, "%s", "AXIS m0_outDigit end at");
    ptr->bit_pos = 1120;
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

    ptr = &ports[55];
    sprintf(ptr->port_name, "%s", "AXIS m0_outDigit transferred bytes");
    ptr->bit_pos = 1152;
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[0];
    ptr->buffer = (void *)(inputImage);
    ptr->dma_running = 0;

    ptr = &ports[1];
    ptr->buffer = (void *)(Filter1);
    ptr->dma_running = 0;

    ptr = &ports[2];
    ptr->buffer = (void *)(bias1);
    ptr->dma_running = 0;

    ptr = &ports[3];
    ptr->buffer = (void *)(Filter2);
    ptr->dma_running = 0;

    ptr = &ports[4];
    ptr->buffer = (void *)(bias2);
    ptr->dma_running = 0;

    ptr = &ports[5];
    ptr->buffer = (void *)(Filter3);
    ptr->dma_running = 0;

    ptr = &ports[6];
    ptr->buffer = (void *)(bias3);
    ptr->dma_running = 0;

    ptr = &ports[7];
    ptr->buffer = (void *)(fcWeight);
    ptr->dma_running = 0;

    ptr = &ports[8];
    ptr->buffer = (void *)(fcBias);
    ptr->dma_running = 0;

    ptr = &ports[9];
    ptr->buffer = (void *)(smWeight);
    ptr->dma_running = 0;

    ptr = &ports[10];
    ptr->buffer = (void *)(smBias);
    ptr->dma_running = 0;

    ptr = &ports[11];
    ptr->buffer = (void *)(outDigit);
    ptr->dma_running = 0;

    run_time_ms = riffa_run(ports, FPGA_PORT_NUM, debug_level);

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

