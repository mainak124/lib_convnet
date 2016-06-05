/*******************************************************************************
 *
 * Filename: rst_fpga.c
 * Version: 0.1 
 * Description: Reset the RIFFA FPGA
 * Author: Auto Generated 
 * History:
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include "riffa.h"
int main(int argc, char** argv) {
    int id = 0;
    fpga_t* fpga; 

    fpga = fpga_open(id);

    if (fpga == NULL) {
        printf("Could not get FPGA %d\n", id);
        return -1;
    }

    fpga_reset(fpga);

    fpga_close(fpga);

    return 0;
}
