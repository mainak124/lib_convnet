#include "Loopback.h"
void Loopback(DTYPE IN[SIZE], DTYPE OUT[SIZE]){
#pragma HLS INTERFACE axis port=IN
#pragma HLS INTERFACE axis port=OUT

#pragma HLS DATAFLOW

for(int i=0; i<SIZE;i++) {

OUT[i] = IN[i];
}


}
