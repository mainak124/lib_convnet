/*******************************************************************************
 *
 * Filename: inference.h
 * Version: 0.1 
 * Description: RIFFA Builder User function
 * Author: Auto Generated 
 * History:
 *
 */

#ifndef __INFERENCE_H__
#define __INFERENCE_H__

#include "riffa.h"
#include "riffa_alite.h"
#include "riffa_run.h"

#ifdef __cplusplus
extern "C" {
#endif

double inference(fpga_t* fpga, int* inputImage, int* Filter1, int* bias1, int* Filter2, int* bias2, int* Filter3, int* bias3, int* fcWeight, int* fcBias, int* smWeight, int* smBias, float* outDigit, short* outputImage_address0, char* outputImage_ce0, char* outputImage_we0, int* outputImage_d0, int debug_level);

#ifdef __cplusplus
}
#endif

#endif
