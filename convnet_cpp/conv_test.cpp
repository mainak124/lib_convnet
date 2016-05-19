#include <stdio.h>
#include <cstdlib>
#include "conv.h"
//#include "conv.cpp"
int main() {

    DTYPE_T x_in[10][10][1];
    DTYPE_T W[3][3][1][2];
    DTYPE_T conv_out[8][8][2];
    DTYPE_T pool_out[4][4][2];
    int zeropad = 0;
    int stride = 1;

	int init_cnt = 0;

    // Load values
for (int i = 0; i< 10; i++){
for (int j = 0; j< 10; j++){
for (int k = 0; k< 1; k++){
	x_in[i][j][k] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}
init_cnt = 0;
for (int i = 0; i< 3; i++){
for (int j = 0; j< 3; j++){
for (int k = 0; k< 1; k++){
for (int l = 0; l< 2; l++){
	W[i][j][k][l] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}}
//for (int i = 0; i< 8; i++){
//for (int j = 0; j< 8; j++){
//for (int k = 0; k< 2; k++){
//	conv_out = rand();
//}}}
    conv2d<10,10,1,3,3,8,8,2>(x_in, W, conv_out, stride, zeropad);
    maxPoolNxN<8,8,2,4,4,2,2,2>(conv_out,pool_out);


for (int i = 0; i< 10; i++){
for (int j = 0; j< 10; j++){
for (int k = 0; k< 1; k++){
	printf("%f, ",x_in[i][j][k]); //x_in = rand();
}
}
printf("\n");
}
printf("\n");
printf("\n");
for (int i = 0; i< 3; i++){
for (int j = 0; j< 3; j++){
for (int k = 0; k< 1; k++){
for (int l = 0; l< 2; l++){
	printf("%f, ",W[i][j][k][l]); //x_in = rand();
}}
//printf("\n");
}
printf("\n");
}

printf("\n");
printf("\n");

for (int i = 0; i< 8; i++){
for (int j = 0; j< 8; j++){
for (int k = 0; k< 2; k++){
	printf("%f, ",conv_out[i][j][k]); //x_in = rand();
}
}
printf("\n");
}

for (int i = 0; i< 4; i++){
for (int j = 0; j< 4; j++){
for (int k = 0; k< 2; k++){
	printf("%f, ",pool_out[i][j][k]); //x_in = rand();
}
}
printf("\n");
}
}
