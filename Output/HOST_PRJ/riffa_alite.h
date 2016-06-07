/*******************************************************************************
/*
 * Filename: riffa_alite.h
 * Version: 0.1
 * Description: RIFFA to AXI-Lite API
 * Author: Qiongzhi Wu
 * History: 
 */

#ifndef RIFFA_ALITE_H
#define RIFFA_ALITE_H

//#include "../../host/riffa.h"
#include "riffa.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Write a 32-bit data to the AXI-Lite on the chnl channel, byte address is 
 * the addr. byte_strob is 4-bit byte-enable bits for the 32-bit data, e.g. 
 * 0xF means all four bytes valid, 0x3 means only lower 2 bytes valid.
 * the timeout is similar with the timeout in function fpga_recv() and 
 * fpga_send(). User should consider if the AXI-Lite Slave module could has
 * any delay, then setup the proper timeout value. If the AXI-Lite Slave could
 * guarantee that never has dead block, the the timeout could be 0.  
 * Returns 0 for success.
 */
int RIFFACALL fpga_alite_write(fpga_t * fpga, int chnl, int addr, int data, 
    int byte_strob, long long timeout);


/**
 * Read a 32-bit data from the AXI-Lite on the chnl channel, byte address is 
 * the addr. The data is a point to buffer which will store the read value.
 * the timeout is similar with the timeout in function fpga_recv() and 
 * fpga_send(). User should consider if the AXI-Lite Slave module could has
 * any delay, then setup the proper timeout value. If the AXI-Lite Slave could
 * guarantee that never has dead block, the the timeout could be 0.  
 * Returns 0 for success.
 */
int RIFFACALL fpga_alite_read(fpga_t * fpga, int chnl, int addr, void* data, 
    long long timeout);

/**
 * Setup the GPIO outputs on a RIFFA_ALite module. Addr32 is the GPO
 * address in 32-bit groups. Value is 32-bit value for the 32-bit GPO lines.
 * Bitmask indicate which bits should be wroten, 1 for enable. 
 * Returns 0 for success.
 */
int RIFFACALL fpga_gpio_write(fpga_t * fpga, int chnl, int addr32, int value,
	int bitmask);

/**
 * Read the GPIO inputs on a RIFFA_ALite module. Addr32 is the GPI
 * address in 32-bit groups. Value is 32-bit value for the 32-bit GPI lines.
 * Returns 0 for success.
 */
int RIFFACALL fpga_gpio_read(fpga_t * fpga, int chnl, int addr32, int* value);

/**
 * Write data to the BRAM. 
 * chnl: riffa chanel number.
 * index: the BRAM is number on this channel.
 * addr: start address of BRAM.
 * bytes: data bytes numbers to write.
 * data: pointer to the data buffer.
 * Returns 0 for success.
 */
int RIFFACALL fpga_bram_write(fpga_t * fpga, int chnl, int index, int addr, int bytes, void* data);

/**
 * Read data from the BRAM. 
 * chnl: riffa chanel number.
 * index: the BRAM is number on this channel.
 * addr: start address of BRAM.
 * bytes: data bytes numbers to write.
 * data: pointer to the data buffer.
 * Returns 0 for success.
 */
int RIFFACALL fpga_bram_read(fpga_t * fpga, int chnl, int index, int addr, int bytes, void* data);
	
#ifdef __cplusplus
}
#endif

#endif
