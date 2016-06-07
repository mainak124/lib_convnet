/*******************************************************************************
/*
 * Filename: riffa_builder.h
 * Version: 0.1
 * Description: RIFFA Builder Host Mid-Level for Windows
 * Author: Qiongzhi Wu
 * History: 
 */

#include "riffa_alite.h"
#include "riffa_run.h"
#include "timer.h"

static int _debug_level;

DWORD WINAPI fpga_send_thread(LPVOID pm) {
    FPGA_PORT *port = (FPGA_PORT *)pm;
    port->dma_running = 1;
    port->result = fpga_send(port->fpga, port->channel, port->buffer, port->words, 
        port->off, port->last, port->timeout);
    port->dma_running = 0;
    return 0;
}

DWORD WINAPI fpga_recv_thread(LPVOID pm) {
    FPGA_PORT *port = (FPGA_PORT *)pm;
    port->dma_running = 1;
    port->result = fpga_recv(port->fpga, port->channel, port->buffer, port->words, 
        port->timeout);
    port->dma_running = 0;
    return 0;
}

void fpga_send_async(FPGA_PORT* port) {

    if (_debug_level > 2) {
        printf("      Start sending thread on CHNL=%d, words=%d\n",port->channel, port->words);
    }

    port->thread = CreateThread(NULL, 0, fpga_send_thread, port, 0, NULL);
    return;
}

void fpga_recv_async(FPGA_PORT* port) {    

    if (_debug_level > 2) {
        printf("      Start receiving thread on CHNL=%d, words=%d\n",port->channel, port->words);
    }
    
    //
    //Open this function when the port->words could change
    //fpga_write_gpio_ex(port->fpga, port->bit_pos, AXIS_LEN_WIDTH, port->words);
    //

    port->thread = CreateThread(NULL, 0, fpga_recv_thread, port, 0, NULL);
    return;
}

int fpga_wait(FPGA_PORT* port, long long timeout) {
    
    unsigned int rv = WaitForSingleObject(port->thread, timeout);
    
    if (rv == WAIT_OBJECT_0) {
        if (_debug_level > 2) {
            printf("      %s Transaction done\n", port->port_name);
        }
        return DMA_WAIT_DONE;
    }
    
    if (rv == WAIT_TIMEOUT) {
        if (_debug_level > 2) {
            //printf("      Wait time out (%d ms)\n",timeout);
        }
        return DMA_WAIT_TIMEOUT;
    }
    
    if (_debug_level > 2) {
        //printf("      Wait error\n");
    }

    return DMA_WAIT_FAIL;
}

#define __BIT_MASK32(p,w) (((0xffffffff << (32-p-w)) >> (32-w))<<p)

void fpga_write_gpio_ex(fpga_t* fpga, int pos, int width, long long data) {

    int addr32;
    int data32;
    int pos32;
    int bit_cnt;
    int bit_pos;
    unsigned int bit_mask;

    bit_cnt = width;
    bit_pos = pos;
    
    while (bit_cnt > 0) {
        addr32 = bit_pos / 32;
        pos32 = bit_pos % 32;
        
        if ((bit_pos + bit_cnt -1)/32 > addr32) {
            //from pos32 to the end of data32
            bit_mask = 0xffffffff << pos32;
            data32 = data << pos32;
            bit_cnt = bit_cnt - (32 - pos32);
            data = data >> (32 - pos32);
            bit_pos = bit_pos + (32 - pos32);
        } else {
            bit_mask = __BIT_MASK32(pos32, bit_cnt);
            data32 = data << pos32;
            bit_cnt = 0;
        }
        
        if (_debug_level > 2) {
            printf("      Write 0x%x to GPIO address 0x%x with mask = 0x%x\n" , data32, addr32, bit_mask);
        }    
        fpga_gpio_write(fpga, CHNL_SYS, addr32, data32, bit_mask);
    }
}

void fpga_write_gpio_port(FPGA_PORT* port, long long data) {

    if (_debug_level > 2) {
        printf("    Write %s the on GPIO[%d:%d] with 0x%x\n", port->port_name, port->bit_pos+port->width-1, port->bit_pos, data);
    }

    fpga_write_gpio_ex(port->fpga, port->bit_pos, port->width, data);
}

long long fpga_read_gpio_port(FPGA_PORT* port) {

    int addr32;
    int data32;
    int pos32;
    int bit_cnt;
    int bit_pos;
    unsigned int bit_mask;
    long long data1;
    long long data;

    
    bit_cnt = port->width;
    bit_pos = port->bit_pos;
    data = 0;
    
    if (_debug_level > 2) {
        printf("    Read the %s on GPIO[%d:%d]\n",port->port_name, bit_pos+bit_cnt-1, bit_pos);
    }
    
    while (bit_cnt > 0) {
        addr32 = bit_pos / 32;
        pos32 = bit_pos % 32;
        
        if (_debug_level > 2) {
            printf("      Read GPIO address 0x%x\n", addr32);
        }
        
        fpga_gpio_read(port->fpga, CHNL_SYS, addr32, &data32);
        
        if (_debug_level > 2) {
            printf("      return value = 0x%x\n", data32);
        }
        
        if ((bit_pos + bit_cnt -1)/32 > addr32) {
            //from pos32 to the end of data32
            data1 = data32 >> pos32;
            data = data | (data1 << (port->width - bit_cnt));
            bit_cnt = bit_cnt - (32 - pos32);
            bit_pos = bit_pos + (32 - pos32);
        } else {
            bit_mask = 0xffffffff >> (32 - bit_cnt);
            data1 = (data32 >> pos32) & bit_mask;
            data = data | (data1 << (port->width - bit_cnt));
            bit_cnt = 0;
        }
    }
    
    if (_debug_level > 2) {
            printf("    return value = 0x%x\n", data);
    }
    
    return data;
}

double riffa_run(FPGA_PORT *ports, int port_number, int debug_level)
{
    int i, j;
    int chnl;
    int err;
    int wait_result;
    int wait_number;
    long long data;
    double ms;
    double rv;
    FPGA_PORT* port;
    
    _debug_level = debug_level;
    
    GET_TIME_INIT(5);
    
    //reset
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if (port->style == DIR_AP_RST) {
            if (_debug_level > 1) {
                printf("  riffa_run: Reset\n");
            }
            fpga_write_gpio_port(port, 1);
            fpga_write_gpio_port(port, 0);
        }
    }
    
    GET_TIME_VAL(0);
    
    /*
    //wait for ap_ready
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if (port->direction == DIR_AP_READY) {
            do {
                if (_debug_level > 1) {
                    printf("  riffa_run: Check if user module is ready.\n");
                }
                data = fpga_read_gpio_port(port);
                
                GET_TIME_VAL(1);
                if (TIME_VAL_TO_MS(1) - TIME_VAL_TO_MS(0) > port[0].timeout) {
                    if (_debug_level > 1) {
                        printf("  riffa_run: Timeout for waiting ap_ready, exit\n");
                    }
                    break;
                }
                
                if (data == 0) {
                    Sleep(500);
                }
            } while (data == 0);
        }
    }
    */
    
    GET_TIME_VAL(1);
    
    //Write Scalars and BRAMs
    if (_debug_level > 1) {
        printf("  riffa_run: Initial the input values.\n");
    }
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if ((port->style == PORT_SCALAR) && (port->direction & DIR_IN)) {
            fpga_write_gpio_port(port, port->data);
        }
        else if ((port->style == PORT_BRAM) && (port->direction & DIR_IN)) {
            fpga_bram_write(port->fpga, port->channel, port->bram_index, port->addr, port->words * 4, port->buffer);
        } else if ((port->style == PORT_AXIS) && (port->direction & DIR_OUT)) {
            fpga_write_gpio_ex(port->fpga, port->bit_pos, AXIS_LEN_WIDTH, port->words);
        }
    }
    
    GET_TIME_VAL(2);
    
    //set ap_start
    if (_debug_level > 1) {
        printf("  riffa_run: Start running.\n");
    }
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if (port->direction == DIR_AP_START) {
            fpga_write_gpio_port(port, 1);
        }
    }
    
    GET_TIME_VAL(3);
    
    //AXIS send
    if (_debug_level > 1) {
        printf("  riffa_run: Start AXIS transactions.\n");
    }
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if ((port->style == PORT_AXIS) && (port->direction == DIR_IN)) {
            if (_debug_level > 1) {
                printf("  riffa_run: Start the AXIS input port %s working\n", port->port_name);
            }
            fpga_send_async(port);
        }
    }
    
    //AXIS recv
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if ((port->style == PORT_AXIS) && (port->direction == DIR_OUT)) {
            if (_debug_level > 1) {
                printf("  riffa_run: Start the AXIS output port %s working\n", port->port_name);
            }
            fpga_recv_async(port);
        }
    }
    
    //wait
    if (_debug_level > 1) {
        printf("  riffa_run: Waiting...\n");
    }
    do {
        wait_number = 0;
        for (i = 0; i < port_number; i ++) {
            port = &ports[i];
            if (port->dma_running) {
                if (_debug_level > 1) {
                    //printf("  riffa_run: Waiting for AXIS port %s working\n", port->port_name);
                }
                wait_result = fpga_wait(port, 1);
                if (wait_result == DMA_WAIT_TIMEOUT)
                    wait_number ++;
            }
        } 
    } while (wait_number); 
    
    //wait done
    if (_debug_level > 1) {
        printf("  riffa_run: Waiting for user module to be done...\n");
    }
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if (port->direction == DIR_AP_DONE) {
            do {
                data = fpga_read_gpio_port(port);
                
                GET_TIME_VAL(4);
                ms = TIME_VAL_TO_MS(4) - TIME_VAL_TO_MS(3);
                if (ms > port[0].timeout) {
                    if (_debug_level > 1) {
                        printf("  riffa_run: Timeout for waiting ap_done, exit\n");
                    }
                    break;
                }
                
                Sleep((int)(ms/10));
                
            } while (data == 0);
        }
    }
    
    GET_TIME_VAL(4);
    
    //Read Scalars
    if (_debug_level > 1) {
        printf("  riffa_run: Read out results.\n");
    }
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if ((port->style == PORT_SCALAR) && (port->direction == DIR_OUT)) {
            port->data = fpga_read_gpio_port(port);
        }
        else if ((port->style == PORT_BRAM) && (port->direction & DIR_OUT)) {
            fpga_bram_read(port->fpga, port->channel, port->bram_index, port->addr, port->words * 4, port->buffer);
        }
    }
    
    GET_TIME_VAL(5);
    
    if (_debug_level > 1) {
        printf("  riffa_run: Read out results.\n");
    }
    
    rv = TIME_VAL_TO_MS(4) - TIME_VAL_TO_MS(3);
    
    return (rv);
}

void riffa_performance(FPGA_PORT *ports, int port_number, int debug_level)
{
    int i;
    FPGA_PORT* port;
    
    if (debug_level > 1) {
        printf("  riffa_performance: Read out results.\n");
    }
    for (i = 0; i < port_number; i ++) {
        port = &ports[i];
        if (port->style == PORT_PFM_COUNTER || port->style == PORT_DATA_COUNTER) {
            port->data = fpga_read_gpio_port(port);
        }
    }
    
    return;
}