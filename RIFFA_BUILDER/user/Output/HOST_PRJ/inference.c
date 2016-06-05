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

#define FPGA_PORT_NUM 16
#define PCIE_USERCLK_FREQ_MHZ 250
#define MAINCLK_DIV 2
#define PFM_TICK_DIV 1

double inference(fpga_t* fpga, int* inputImage, int* outDigit, int debug_level) {
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
    sprintf(ptr->port_name, "%s", "m0_outDigit");
    ptr->style = PORT_AXIS;
    ptr->bit_pos = 96;
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

    ptr = &ports[2];
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

    ptr = &ports[3];
    sprintf(ptr->port_name, "%s", "m0_ap_rst_n");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 224;
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

    ptr = &ports[4];
    sprintf(ptr->port_name, "%s", "m0_ap_done");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 225;
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

    ptr = &ports[5];
    sprintf(ptr->port_name, "%s", "m0_ap_start");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 226;
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

    ptr = &ports[6];
    sprintf(ptr->port_name, "%s", "m0_ap_idle");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 227;
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

    ptr = &ports[7];
    sprintf(ptr->port_name, "%s", "m0_ap_ready");
    ptr->style = PORT_SCALAR;
    ptr->bit_pos = 228;
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

    ptr = &ports[8];
    sprintf(ptr->port_name, "%s", "Module m0_inference start");
    ptr->bit_pos = 229;
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

    ptr = &ports[9];
    sprintf(ptr->port_name, "%s", "Module m0_inference done");
    ptr->bit_pos = 261;
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

    ptr = &ports[10];
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

    ptr = &ports[11];
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

    ptr = &ports[12];
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
    ptr = &ports[13];
    sprintf(ptr->port_name, "%s", "AXIS m0_outDigit start at");
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

    ptr = &ports[14];
    sprintf(ptr->port_name, "%s", "AXIS m0_outDigit end at");
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

    ptr = &ports[15];
    sprintf(ptr->port_name, "%s", "AXIS m0_outDigit transferred bytes");
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

    ptr->style = PORT_DATA_COUNTER;
    ptr = &ports[0];
    ptr->buffer = (void *)(inputImage);
    ptr->dma_running = 0;

    ptr = &ports[1];
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

