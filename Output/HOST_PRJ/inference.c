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

#define FPGA_PORT_NUM 43
#define PCIE_USERCLK_FREQ_MHZ 250
#define MAINCLK_DIV 2
#define PFM_TICK_DIV 1

double inference(fpga_t* fpga, char ap_rst, short* inputImage_address0, char* inputImage_ce0, float inputImage_q0, char* Filter1_address0, char* Filter1_ce0, float Filter1_q0, char* bias1_address0, char* bias1_ce0, float bias1_q0, short* Filter2_address0, char* Filter2_ce0, float Filter2_q0, char* bias2_address0, char* bias2_ce0, float bias2_q0, short* Filter3_address0, char* Filter3_ce0, float Filter3_q0, char* bias3_address0, char* bias3_ce0, float bias3_q0, short* fcWeight_address0, char* fcWeight_ce0, float fcWeight_q0, char* fcBias_address0, char* fcBias_ce0, float fcBias_q0, short* smWeight_address0, char* smWeight_ce0, float smWeight_q0, char* smBias_address0, char* smBias_ce0, float smBias_q0, float* outDigit, char* outDigit_ap_vld, int debug_level) {
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
    sprintf(ptr->port_name, "%s", "m0_ap_start");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 1;
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

    ptr = &ports[3];
    sprintf(ptr->port_name, "%s", "m0_ap_done");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 2;
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

    ptr = &ports[4];
    sprintf(ptr->port_name, "%s", "m0_ap_idle");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 3;
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

    ptr = &ports[5];
    sprintf(ptr->port_name, "%s", "m0_ap_ready");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 4;
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

    ptr = &ports[6];
    sprintf(ptr->port_name, "%s", "m0_inputImage_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 5;
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

    ptr = &ports[7];
    sprintf(ptr->port_name, "%s", "m0_inputImage_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 15;
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

    ptr = &ports[8];
    sprintf(ptr->port_name, "%s", "m0_inputImage_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 16;
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

    ptr = &ports[9];
    sprintf(ptr->port_name, "%s", "m0_Filter1_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 48;
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

    ptr = &ports[10];
    sprintf(ptr->port_name, "%s", "m0_Filter1_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 56;
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

    ptr = &ports[11];
    sprintf(ptr->port_name, "%s", "m0_Filter1_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 57;
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

    ptr = &ports[12];
    sprintf(ptr->port_name, "%s", "m0_bias1_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 89;
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
    ptr->bit_pos = 92;
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
    sprintf(ptr->port_name, "%s", "m0_bias1_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 93;
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

    ptr = &ports[15];
    sprintf(ptr->port_name, "%s", "m0_Filter2_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 125;
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

    ptr = &ports[16];
    sprintf(ptr->port_name, "%s", "m0_Filter2_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 137;
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
    sprintf(ptr->port_name, "%s", "m0_Filter2_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 138;
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

    ptr = &ports[18];
    sprintf(ptr->port_name, "%s", "m0_bias2_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 170;
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

    ptr = &ports[19];
    sprintf(ptr->port_name, "%s", "m0_bias2_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 174;
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

    ptr = &ports[20];
    sprintf(ptr->port_name, "%s", "m0_bias2_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 175;
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
    sprintf(ptr->port_name, "%s", "m0_Filter3_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 207;
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

    ptr = &ports[22];
    sprintf(ptr->port_name, "%s", "m0_Filter3_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 223;
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

    ptr = &ports[23];
    sprintf(ptr->port_name, "%s", "m0_Filter3_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 224;
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

    ptr = &ports[24];
    sprintf(ptr->port_name, "%s", "m0_bias3_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 256;
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

    ptr = &ports[25];
    sprintf(ptr->port_name, "%s", "m0_bias3_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 263;
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

    ptr = &ports[26];
    sprintf(ptr->port_name, "%s", "m0_bias3_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 264;
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

    ptr = &ports[27];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 296;
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

    ptr = &ports[28];
    sprintf(ptr->port_name, "%s", "m0_fcWeight_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 310;
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
    sprintf(ptr->port_name, "%s", "m0_fcWeight_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 311;
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

    ptr = &ports[30];
    sprintf(ptr->port_name, "%s", "m0_fcBias_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 343;
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

    ptr = &ports[31];
    sprintf(ptr->port_name, "%s", "m0_fcBias_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 350;
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
    sprintf(ptr->port_name, "%s", "m0_fcBias_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 351;
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

    ptr = &ports[33];
    sprintf(ptr->port_name, "%s", "m0_smWeight_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 383;
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

    ptr = &ports[34];
    sprintf(ptr->port_name, "%s", "m0_smWeight_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 393;
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

    ptr = &ports[35];
    sprintf(ptr->port_name, "%s", "m0_smWeight_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 394;
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
    sprintf(ptr->port_name, "%s", "m0_smBias_address0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 426;
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

    ptr = &ports[37];
    sprintf(ptr->port_name, "%s", "m0_smBias_ce0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 430;
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

    ptr = &ports[38];
    sprintf(ptr->port_name, "%s", "m0_smBias_q0");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 431;
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

    ptr = &ports[39];
    sprintf(ptr->port_name, "%s", "m0_outDigit");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 463;
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
    sprintf(ptr->port_name, "%s", "m0_outDigit_ap_vld");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 495;
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

    ptr = &ports[41];
    sprintf(ptr->port_name, "%s", "Module m0_inference start");
    ptr->bit_pos = 496;
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
    sprintf(ptr->port_name, "%s", "Module m0_inference done");
    ptr->bit_pos = 528;
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
    ptr = &ports[8];
    ptr->data = *(__int64*)(&inputImage_q0);
    ptr = &ports[11];
    ptr->data = *(__int64*)(&Filter1_q0);
    ptr = &ports[14];
    ptr->data = *(__int64*)(&bias1_q0);
    ptr = &ports[17];
    ptr->data = *(__int64*)(&Filter2_q0);
    ptr = &ports[20];
    ptr->data = *(__int64*)(&bias2_q0);
    ptr = &ports[23];
    ptr->data = *(__int64*)(&Filter3_q0);
    ptr = &ports[26];
    ptr->data = *(__int64*)(&bias3_q0);
    ptr = &ports[29];
    ptr->data = *(__int64*)(&fcWeight_q0);
    ptr = &ports[32];
    ptr->data = *(__int64*)(&fcBias_q0);
    ptr = &ports[35];
    ptr->data = *(__int64*)(&smWeight_q0);
    ptr = &ports[38];
    ptr->data = *(__int64*)(&smBias_q0);
    run_time_ms = riffa_run(ports, FPGA_PORT_NUM, debug_level);

    ptr = &ports[6];
    *inputImage_address0 = ptr->data;

    ptr = &ports[7];
    *inputImage_ce0 = ptr->data;

    ptr = &ports[9];
    *Filter1_address0 = ptr->data;

    ptr = &ports[10];
    *Filter1_ce0 = ptr->data;

    ptr = &ports[12];
    *bias1_address0 = ptr->data;

    ptr = &ports[13];
    *bias1_ce0 = ptr->data;

    ptr = &ports[15];
    *Filter2_address0 = ptr->data;

    ptr = &ports[16];
    *Filter2_ce0 = ptr->data;

    ptr = &ports[18];
    *bias2_address0 = ptr->data;

    ptr = &ports[19];
    *bias2_ce0 = ptr->data;

    ptr = &ports[21];
    *Filter3_address0 = ptr->data;

    ptr = &ports[22];
    *Filter3_ce0 = ptr->data;

    ptr = &ports[24];
    *bias3_address0 = ptr->data;

    ptr = &ports[25];
    *bias3_ce0 = ptr->data;

    ptr = &ports[27];
    *fcWeight_address0 = ptr->data;

    ptr = &ports[28];
    *fcWeight_ce0 = ptr->data;

    ptr = &ports[30];
    *fcBias_address0 = ptr->data;

    ptr = &ports[31];
    *fcBias_ce0 = ptr->data;

    ptr = &ports[33];
    *smWeight_address0 = ptr->data;

    ptr = &ports[34];
    *smWeight_ce0 = ptr->data;

    ptr = &ports[36];
    *smBias_address0 = ptr->data;

    ptr = &ports[37];
    *smBias_ce0 = ptr->data;

    ptr = &ports[39];
    *outDigit = ptr->data;

    ptr = &ports[40];
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

