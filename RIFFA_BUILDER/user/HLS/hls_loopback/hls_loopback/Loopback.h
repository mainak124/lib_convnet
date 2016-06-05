#ifndef MergeSort_H_
#define MergeSort_H_

#include "ap_int.h"
#include "hls_stream.h"

typedef int DTYPE;

//-------------------Common parameters----------------
const int SIZE = 65536;//65536; 
void Loopback(DTYPE IN[SIZE], DTYPE OUT[SIZE]);

#endif
