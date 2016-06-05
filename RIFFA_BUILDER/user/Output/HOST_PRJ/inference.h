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

double inference(fpga_t* fpga, int* inputImage, int* outDigit, int debug_level);

#ifdef __cplusplus
}
#endif

#endif
