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

double inference(fpga_t* fpga, char ap_rst, short* inputImage_address0, char* inputImage_ce0, int* inputImage_d0, float inputImage_q0, char* inputImage_we0, char* Filter1_address0, char* Filter1_ce0, int* Filter1_d0, float Filter1_q0, char* Filter1_we0, char* bias1_address0, char* bias1_ce0, int* bias1_d0, float bias1_q0, char* bias1_we0, short* Filter2_address0, char* Filter2_ce0, int* Filter2_d0, float Filter2_q0, char* Filter2_we0, char* bias2_address0, char* bias2_ce0, int* bias2_d0, float bias2_q0, char* bias2_we0, short* Filter3_address0, char* Filter3_ce0, int* Filter3_d0, float Filter3_q0, char* Filter3_we0, char* bias3_address0, char* bias3_ce0, int* bias3_d0, float bias3_q0, char* bias3_we0, short* fcWeight_address0, char* fcWeight_ce0, int* fcWeight_d0, float fcWeight_q0, char* fcWeight_we0, char* fcBias_address0, char* fcBias_ce0, int* fcBias_d0, float fcBias_q0, char* fcBias_we0, short* smWeight_address0, char* smWeight_ce0, int* smWeight_d0, float smWeight_q0, char* smWeight_we0, char* smBias_address0, char* smBias_ce0, int* smBias_d0, float smBias_q0, char* smBias_we0, float* outDigit, char* outDigit_ap_vld, int debug_level);

#ifdef __cplusplus
}
#endif

#endif
