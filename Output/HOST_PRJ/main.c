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
    int inputImage_d0;
    float inputImage_q0;
    char inputImage_we0;
    float outDigit;
    char outDigit_ap_vld;

    //Malloc user buffers

    //TODO: Initial the input variables and arrays
    ap_rst = 0;  //Only for example

    inputImage_q0 = 0;  //Only for example

    fpga = fpga_open(id);

    if (fpga == NULL) {
        printf("Could not get FPGA %d\n", id);
        return -1;
    }

    fpga_reset(fpga);

    Sleep(200);

    //Call the user function 
    GET_TIME_VAL(0);
    run_time_ms = inference(fpga, ap_rst, &inputImage_address0, &inputImage_ce0, &inputImage_d0, inputImage_q0, &inputImage_we0, &outDigit, &outDigit_ap_vld, DEBUG_LEVEL);

    GET_TIME_VAL(1);
    printf("The FPGA module running costed %f ms\n", run_time_ms);
    printf("Total function calling costed %f ms\n", TIME_VAL_TO_MS(1) - TIME_VAL_TO_MS(0));

    //Done with device 
    fpga_close(fpga);

    //TODO: Process the output data

    printf("inputImage_address0 = %d (0x%x)\n",inputImage_address0, inputImage_address0);
    printf("inputImage_ce0 = %d (0x%x)\n",inputImage_ce0, inputImage_ce0);
    printf("inputImage_d0 = %d (0x%x)\n",inputImage_d0, inputImage_d0);
    printf("inputImage_we0 = %d (0x%x)\n",inputImage_we0, inputImage_we0);
    printf("outDigit = %f (0x%x)\n",outDigit, outDigit);
    printf("outDigit_ap_vld = %d (0x%x)\n",outDigit_ap_vld, outDigit_ap_vld);
    return 0;
}
