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

double inference(fpga_t* fpga, char ap_rst, short* inputImage_address0, char* inputImage_ce0, int* inputImage_d0, float inputImage_q0, char* inputImage_we0, float* outDigit, char* outDigit_ap_vld, int debug_level);

#ifdef __cplusplus
}
#endif

#endif
