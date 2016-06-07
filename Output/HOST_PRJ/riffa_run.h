/*******************************************************************************
/*
 * Filename: riffa_builder.h
 * Version: 0.1
 * Description: RIFFA Builder Host Mid-Level
 * Author: Qiongzhi Wu
 * History: 
 */

#include <stdlib.h>
#include <stdio.h>
#include <windows.h> 
#include "riffa.h"


#ifndef RIFFA_RUN_H
#define RIFFA_RUN_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    char port_name[256];
    int style;              //0=System, 1=Scalar, 2=AXIS, 3=BRAM
    int direction;          //0=RX, 1=TX, 2=inout
    int channel;            //channel number (0-11)
    int width;              //width in bits
    int c_width;            //C data width in 8 16 32...
    int bit_pos;            //bit postion in GPIO, for scalar values
    int length;             //data selements numbers
    int addr_width;         //mem address bits
    int addr;
    int bram_index;         //bram's number on the channel
    long long data;         //Scalar data
    void* buffer;           //data buffer
	fpga_t* fpga;
	int words;
	int last;
	int off;
	long long timeout;
	int result;
	int dma_running;
	HANDLE thread;
} FPGA_PORT;

#define DMA_WAIT_STEP 100
#define DMA_WAIT_DONE 0
#define DMA_WAIT_TIMEOUT 1
#define DMA_WAIT_FAIL 2

#define CHNL_SYS 0
#define PORT_SYS 0
#define PORT_SCALAR 1
#define PORT_AXIS 2
#define PORT_BRAM 3
#define PORT_PFM_COUNTER 16
#define PORT_DATA_COUNTER 17
#define DIR_IN 0x1
#define DIR_OUT 0x2
#define DIR_AP_START 0x10
#define DIR_AP_READY 0x20
#define DIR_AP_DONE 0x30
#define DIR_AP_RST 0x40
#define DIR_AP_IDLE 0x50
#define DIR_AP_UNKNOW 0x80

#define AXIS_LEN_WIDTH 32

double riffa_run(FPGA_PORT *ports, int port_number, int debug_level);

void riffa_performance(FPGA_PORT *ports, int port_number, int debug_level);

#ifdef __cplusplus
}
#endif

#endif