/*******************************************************************************
 *
 * Filename: main.c
 * Version: 0.1 
 * Description: RIFFA Builder Main Program
 * Author: Auto Generated 
 * History:
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "timer.h"
#include "inference.h"

#define DEBUG_LEVEL 3 //0 = no debug printing"

int main(int argc, char** argv) {
    int i = 0;
    int id = 0;
    double run_time_ms;
    fpga_t* fpga; 

    GET_TIME_INIT(5);
    //User variables 
    char ap_rst;
    short inputImage_address0;
    char inputImage_ce0;
    float inputImage_q0;
    char Filter1_address0;
    char Filter1_ce0;
    float Filter1_q0;
    char bias1_address0;
    char bias1_ce0;
    float bias1_q0;
    short Filter2_address0;
    char Filter2_ce0;
    float Filter2_q0;
    char bias2_address0;
    char bias2_ce0;
    float bias2_q0;
    short Filter3_address0;
    char Filter3_ce0;
    float Filter3_q0;
    char bias3_address0;
    char bias3_ce0;
    float bias3_q0;
    short fcWeight_address0;
    char fcWeight_ce0;
    float fcWeight_q0;
    char fcBias_address0;
    char fcBias_ce0;
    float fcBias_q0;
    short smWeight_address0;
    char smWeight_ce0;
    float smWeight_q0;
    char smBias_address0;
    char smBias_ce0;
    float smBias_q0;
    float outDigit;
    char outDigit_ap_vld;

    //Malloc user buffers

    //TODO: Initial the input variables and arrays
    ap_rst = 0;  //Only for example

    inputImage_q0 = 0;  //Only for example

    Filter1_q0 = 0;  //Only for example

    bias1_q0 = 0;  //Only for example

    Filter2_q0 = 0;  //Only for example

    bias2_q0 = 0;  //Only for example

    Filter3_q0 = 0;  //Only for example

    bias3_q0 = 0;  //Only for example

    fcWeight_q0 = 0;  //Only for example

    fcBias_q0 = 0;  //Only for example

    smWeight_q0 = 0;  //Only for example

    smBias_q0 = 0;  //Only for example

    fpga = fpga_open(id);

    if (fpga == NULL) {
        printf("Could not get FPGA %d\n", id);
        return -1;
    }

    fpga_reset(fpga);

    Sleep(200);

    //Call the user function 
    GET_TIME_VAL(0);
    run_time_ms = inference(fpga, ap_rst, &inputImage_address0, &inputImage_ce0, inputImage_q0, &Filter1_address0, &Filter1_ce0, Filter1_q0, &bias1_address0, &bias1_ce0, bias1_q0, &Filter2_address0, &Filter2_ce0, Filter2_q0, &bias2_address0, &bias2_ce0, bias2_q0, &Filter3_address0, &Filter3_ce0, Filter3_q0, &bias3_address0, &bias3_ce0, bias3_q0, &fcWeight_address0, &fcWeight_ce0, fcWeight_q0, &fcBias_address0, &fcBias_ce0, fcBias_q0, &smWeight_address0, &smWeight_ce0, smWeight_q0, &smBias_address0, &smBias_ce0, smBias_q0, &outDigit, &outDigit_ap_vld, DEBUG_LEVEL);

    GET_TIME_VAL(1);
    printf("The FPGA module running costed %f ms\n", run_time_ms);
    printf("Total function calling costed %f ms\n", TIME_VAL_TO_MS(1) - TIME_VAL_TO_MS(0));

    //Done with device 
    fpga_close(fpga);

    //TODO: Process the output data

    printf("inputImage_address0 = %d (0x%x)\n",inputImage_address0, inputImage_address0);
    printf("inputImage_ce0 = %d (0x%x)\n",inputImage_ce0, inputImage_ce0);
    printf("Filter1_address0 = %d (0x%x)\n",Filter1_address0, Filter1_address0);
    printf("Filter1_ce0 = %d (0x%x)\n",Filter1_ce0, Filter1_ce0);
    printf("bias1_address0 = %d (0x%x)\n",bias1_address0, bias1_address0);
    printf("bias1_ce0 = %d (0x%x)\n",bias1_ce0, bias1_ce0);
    printf("Filter2_address0 = %d (0x%x)\n",Filter2_address0, Filter2_address0);
    printf("Filter2_ce0 = %d (0x%x)\n",Filter2_ce0, Filter2_ce0);
    printf("bias2_address0 = %d (0x%x)\n",bias2_address0, bias2_address0);
    printf("bias2_ce0 = %d (0x%x)\n",bias2_ce0, bias2_ce0);
    printf("Filter3_address0 = %d (0x%x)\n",Filter3_address0, Filter3_address0);
    printf("Filter3_ce0 = %d (0x%x)\n",Filter3_ce0, Filter3_ce0);
    printf("bias3_address0 = %d (0x%x)\n",bias3_address0, bias3_address0);
    printf("bias3_ce0 = %d (0x%x)\n",bias3_ce0, bias3_ce0);
    printf("fcWeight_address0 = %d (0x%x)\n",fcWeight_address0, fcWeight_address0);
    printf("fcWeight_ce0 = %d (0x%x)\n",fcWeight_ce0, fcWeight_ce0);
    printf("fcBias_address0 = %d (0x%x)\n",fcBias_address0, fcBias_address0);
    printf("fcBias_ce0 = %d (0x%x)\n",fcBias_ce0, fcBias_ce0);
    printf("smWeight_address0 = %d (0x%x)\n",smWeight_address0, smWeight_address0);
    printf("smWeight_ce0 = %d (0x%x)\n",smWeight_ce0, smWeight_ce0);
    printf("smBias_address0 = %d (0x%x)\n",smBias_address0, smBias_address0);
    printf("smBias_ce0 = %d (0x%x)\n",smBias_ce0, smBias_ce0);
    printf("outDigit = %f (0x%x)\n",outDigit, outDigit);
    printf("outDigit_ap_vld = %d (0x%x)\n",outDigit_ap_vld, outDigit_ap_vld);
    return 0;
}
