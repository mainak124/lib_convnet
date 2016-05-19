#include "conv.h"

int main() {

    float x_in[10][10][1];
    float W[5][5][1][2];
    float conv_out[6][6][2];
    int zeropad = 0;
    int stride = 1;

    // Load values

    conv2d<10,10,1,5,5,6,6,2>(x_in, W, conv_out, stride, zeropad);

}
