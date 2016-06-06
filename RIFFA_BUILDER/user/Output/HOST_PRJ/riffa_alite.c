/*******************************************************************************
/*
 * Filename: riffa_alite.c
 * Version: 0.1
 * Description: RIFFA to AXI-Lite API
 * Author: Qiongzhi Wu
 * History: 
 */

#include <windows.h>
#include <setupapi.h>
#include <stdio.h>
#include <stdlib.h>
#include "riffa_alite.h"

#define C_RX_DATA_WORD_NUM  8
#define C_RX_BIT_HEAD  0
#define C_RX_BIT_WRITE  16
#define C_RX_BIT_ADDR  32
#define C_RX_BIT_WSTRB  64
#define C_RX_BIT_WDATA  96
#define C_TX_DATA_WORD_NUM  8
#define C_TX_BIT_HEAD  0
#define C_TX_BIT_BRESP  16
#define C_TX_BIT_TIMEOUT  24  //useless
#define C_TX_BIT_DATA  32
#define C_RX_BIT_SEL 64
#define C_RX_BIT_LEN 96


#define C_TX_HEAD_ALITE 0x55aa
#define C_TX_HEAD_GPIO  0x33cc
#define C_RX_HEAD 0xff77

#define BIT2BYTE(x) ((x)>>3)

//#define DBG

int RIFFACALL fpga_alite_write(fpga_t * fpga, int chnl, int addr, int data, 
    int byte_strob, long long timeout) {
    
    char buffer[4*C_RX_DATA_WORD_NUM];
	int k;
    *((unsigned short *)(buffer + BIT2BYTE(C_RX_BIT_HEAD))) = C_TX_HEAD_ALITE;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_ADDR))) = addr;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WRITE))) = 1;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WSTRB))) = byte_strob;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_WDATA))) = data;
	
	#ifdef DBG
	printf("Write:%x %x %x %x\n", *((__int32 *)(buffer)), *((__int32 *)(buffer+4)), *((__int32 *)(buffer+8)), *((__int32 *)(buffer+12)) );
	#endif
    
    if (fpga_send(fpga, chnl, buffer, C_RX_DATA_WORD_NUM, 0, 1, timeout) 
        != C_RX_DATA_WORD_NUM) {
        return -1;   
    }
    
    if (fpga_recv(fpga, chnl, buffer, C_TX_DATA_WORD_NUM, timeout) 
        != C_TX_DATA_WORD_NUM) {
        return -2;   
    }

	#ifdef DBG
	printf("Read:%x %x %x %x\n", *((__int32 *)(buffer)), *((__int32 *)(buffer+4)), *((__int32 *)(buffer+8)), *((__int32 *)(buffer+12)));
	#endif	
	
    if (*((unsigned short *)(buffer + BIT2BYTE(C_TX_BIT_HEAD))) != C_RX_HEAD) {
        return -3;    
    }
    
    return *((char *)(buffer + BIT2BYTE(C_TX_BIT_BRESP)));
}

int RIFFACALL fpga_alite_read(fpga_t * fpga, int chnl, int addr, void* data, 
    long long timeout) {
        
    char buffer[4*C_RX_DATA_WORD_NUM];
    *((unsigned short *)(buffer + BIT2BYTE(C_RX_BIT_HEAD))) = C_TX_HEAD_ALITE;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_ADDR))) = addr;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WRITE))) = 0;
    
    if (fpga_send(fpga, chnl, buffer, C_RX_DATA_WORD_NUM, 0, 1, timeout) 
        != C_RX_DATA_WORD_NUM) {
        return -1;   
    }
    
    if (fpga_recv(fpga, chnl, buffer, C_TX_DATA_WORD_NUM, timeout) 
        != C_TX_DATA_WORD_NUM) {
        return -2;   
    }
    
    if (*((unsigned short *)(buffer + BIT2BYTE(C_TX_BIT_HEAD))) != C_RX_HEAD) {
        return -3;    
    }
    
    *(__int32 *)(data) = *((__int32 *)(buffer + BIT2BYTE(C_TX_BIT_DATA)));
    
    return (*((char *)(buffer + BIT2BYTE(C_TX_BIT_BRESP))));
}

int RIFFACALL fpga_gpio_write(fpga_t * fpga, int chnl, int addr32, int value,
	int bitmask) {
    
    char buffer[4*C_RX_DATA_WORD_NUM];
	int k;
    *((unsigned short *)(buffer + BIT2BYTE(C_RX_BIT_HEAD))) = C_TX_HEAD_GPIO;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_ADDR))) = addr32;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WRITE))) = 1;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_WSTRB))) = bitmask;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_WDATA))) = value;

    
    if (fpga_send(fpga, chnl, buffer, C_RX_DATA_WORD_NUM, 0, 1, 500) 
        != C_RX_DATA_WORD_NUM) {
        return -1;   
    }
    
    if (fpga_recv(fpga, chnl, buffer, C_TX_DATA_WORD_NUM, 500) 
        != C_TX_DATA_WORD_NUM) {
        return -2;   
    }
    
    return 0;
}

int RIFFACALL fpga_gpio_read(fpga_t * fpga, int chnl, int addr32, int* value){
        
    char buffer[4*C_RX_DATA_WORD_NUM];
    *((unsigned short *)(buffer + BIT2BYTE(C_RX_BIT_HEAD))) = C_TX_HEAD_GPIO;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_ADDR))) = addr32;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WRITE))) = 0;
    
    if (fpga_send(fpga, chnl, buffer, C_RX_DATA_WORD_NUM, 0, 1, 500) 
        != C_RX_DATA_WORD_NUM) {
        return -1;   
    }
    
    if (fpga_recv(fpga, chnl, buffer, C_TX_DATA_WORD_NUM, 500) 
        != C_TX_DATA_WORD_NUM) {
        return -2;   
    }
    
    if (*((unsigned short *)(buffer + BIT2BYTE(C_TX_BIT_HEAD))) != C_RX_HEAD) {
        return -3;    
    }
    
    *(__int32 *)(value) = *((__int32 *)(buffer + BIT2BYTE(C_TX_BIT_DATA)));
    
    return 0;
}


int RIFFACALL fpga_bram_write(fpga_t * fpga, int chnl, int index, int addr, int bytes, void* data) {
    char buffer[4*C_RX_DATA_WORD_NUM];
	int k;
    *((unsigned short *)(buffer + BIT2BYTE(C_RX_BIT_HEAD))) = C_TX_HEAD_ALITE;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_ADDR))) = addr;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WRITE))) = 1;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_SEL))) = index;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_LEN))) = bytes;
	
	#ifdef DBG
	printf("Write:%x %x %x %x\n", *((__int32 *)(buffer)), *((__int32 *)(buffer+4)), *((__int32 *)(buffer+8)), *((__int32 *)(buffer+12)) );
	#endif
    
    if (fpga_send(fpga, chnl, buffer, C_RX_DATA_WORD_NUM, 0, 0, 500) 
        != C_RX_DATA_WORD_NUM) {
        return -1;   
    }
    
    k = bytes / 4;
    if (bytes % 4)
        k ++;
    
    if (fpga_send(fpga, chnl, data, k, 0, 1, 500) 
        != k) {
        return -1;   
    }
    
	#ifdef DBG
	printf("Read:%x %x %x %x\n", *((__int32 *)(buffer)), *((__int32 *)(buffer+4)), *((__int32 *)(buffer+8)), *((__int32 *)(buffer+12)));
	#endif	
	
    return 0;
}

int RIFFACALL fpga_bram_read(fpga_t * fpga, int chnl, int index, int addr, int bytes, void* data) {
    char buffer[4*C_RX_DATA_WORD_NUM];
	int k;
    *((unsigned short *)(buffer + BIT2BYTE(C_RX_BIT_HEAD))) = C_TX_HEAD_ALITE;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_ADDR))) = addr;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_WRITE))) = 0;
    *((char *)(buffer + BIT2BYTE(C_RX_BIT_SEL))) = index;
    *((__int32 *)(buffer + BIT2BYTE(C_RX_BIT_LEN))) = bytes;
	
	#ifdef DBG
	printf("Write:%x %x %x %x\n", *((__int32 *)(buffer)), *((__int32 *)(buffer+4)), *((__int32 *)(buffer+8)), *((__int32 *)(buffer+12)) );
	#endif
    
    if (fpga_send(fpga, chnl, buffer, C_RX_DATA_WORD_NUM, 0, 1, 500) 
        != C_RX_DATA_WORD_NUM) {
        return -1;   
    }
    
    k = bytes / 4;
    if (bytes % 4)
        k ++;
    
    if (fpga_recv(fpga, chnl, data, k, 500) 
        != k) {
        return -1;   
    }
    
	#ifdef DBG
	printf("Read:%x %x %x %x\n", *((__int32 *)(buffer)), *((__int32 *)(buffer+4)), *((__int32 *)(buffer+8)), *((__int32 *)(buffer+12)));
	#endif	
	
    return 0;
}
