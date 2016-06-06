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
    int* inputImage;
    int* Filter1;
    int* bias1;
    int* Filter2;
    int* bias2;
    int* Filter3;
    int* bias3;
    int* fcWeight;
    int* fcBias;
    int* smWeight;
    int* smBias;
    int* outDigit;

    //Malloc user buffers

    inputImage = (int *)malloc(784*4);
    if (inputImage == NULL) {
        printf("Can not alloc memory for the variable 'inputImage' for 3136 bytes");
        return -1;
    }

    Filter1 = (int *)malloc(150*4);
    if (Filter1 == NULL) {
        printf("Can not alloc memory for the variable 'Filter1' for 600 bytes");
        return -1;
    }

    bias1 = (int *)malloc(6*4);
    if (bias1 == NULL) {
        printf("Can not alloc memory for the variable 'bias1' for 24 bytes");
        return -1;
    }

    Filter2 = (int *)malloc(2400*4);
    if (Filter2 == NULL) {
        printf("Can not alloc memory for the variable 'Filter2' for 9600 bytes");
        return -1;
    }

    bias2 = (int *)malloc(16*4);
    if (bias2 == NULL) {
        printf("Can not alloc memory for the variable 'bias2' for 64 bytes");
        return -1;
    }

    Filter3 = (int *)malloc(48000*4);
    if (Filter3 == NULL) {
        printf("Can not alloc memory for the variable 'Filter3' for 192000 bytes");
        return -1;
    }

    bias3 = (int *)malloc(120*4);
    if (bias3 == NULL) {
        printf("Can not alloc memory for the variable 'bias3' for 480 bytes");
        return -1;
    }

    fcWeight = (int *)malloc(10080*4);
    if (fcWeight == NULL) {
        printf("Can not alloc memory for the variable 'fcWeight' for 40320 bytes");
        return -1;
    }

    fcBias = (int *)malloc(84*4);
    if (fcBias == NULL) {
        printf("Can not alloc memory for the variable 'fcBias' for 336 bytes");
        return -1;
    }

    smWeight = (int *)malloc(840*4);
    if (smWeight == NULL) {
        printf("Can not alloc memory for the variable 'smWeight' for 3360 bytes");
        return -1;
    }

    smBias = (int *)malloc(10*4);
    if (smBias == NULL) {
        printf("Can not alloc memory for the variable 'smBias' for 40 bytes");
        return -1;
    }

    outDigit = (int *)malloc(1*4);
    if (outDigit == NULL) {
        printf("Can not alloc memory for the variable 'outDigit' for 4 bytes");
        return -1;
    }

    //TODO: Initial the input variables and arrays
    for (i = 0; i < 784; i ++) {
        inputImage[i] = i;  //Only for example
    }

    for (i = 0; i < 150; i ++) {
        Filter1[i] = i;  //Only for example
    }

    for (i = 0; i < 6; i ++) {
        bias1[i] = i;  //Only for example
    }

    for (i = 0; i < 2400; i ++) {
        Filter2[i] = i;  //Only for example
    }

    for (i = 0; i < 16; i ++) {
        bias2[i] = i;  //Only for example
    }

    for (i = 0; i < 48000; i ++) {
        Filter3[i] = i;  //Only for example
    }

    for (i = 0; i < 120; i ++) {
        bias3[i] = i;  //Only for example
    }

    for (i = 0; i < 10080; i ++) {
        fcWeight[i] = i;  //Only for example
    }

    for (i = 0; i < 84; i ++) {
        fcBias[i] = i;  //Only for example
    }

    for (i = 0; i < 840; i ++) {
        smWeight[i] = i;  //Only for example
    }

    for (i = 0; i < 10; i ++) {
        smBias[i] = i;  //Only for example
    }

    fpga = fpga_open(id);

    if (fpga == NULL) {
        printf("Could not get FPGA %d\n", id);
        return -1;
    }

    fpga_reset(fpga);

    Sleep(200);

    //Call the user function 
    GET_TIME_VAL(0);
    run_time_ms = inference(fpga, inputImage, Filter1, bias1, Filter2, bias2, Filter3, bias3, fcWeight, fcBias, smWeight, smBias, outDigit, DEBUG_LEVEL);

    GET_TIME_VAL(1);
    printf("The FPGA module running costed %f ms\n", run_time_ms);
    printf("Total function calling costed %f ms\n", TIME_VAL_TO_MS(1) - TIME_VAL_TO_MS(0));

    //Done with device 
    fpga_close(fpga);

    //TODO: Process the output data

    for (i = 0; i < 1; i ++) {
        printf("outDigit[%d] = %d (0x%x)\n",i, outDigit[i], outDigit[i]);
    }

    return 0;
}
