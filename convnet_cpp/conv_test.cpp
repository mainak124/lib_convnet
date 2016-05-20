#include <stdio.h>
#include <cstdlib>
#include "conv.h"
//#include "cnn.h"
//#include "conv.cpp"
int main() {

    DTYPE_T x_in[IN_H][IN_W][IN_C];
    DTYPE_T W[F1_H][F1_W][F1_C][F1_N];
    DTYPE_T b1[O1_H][O1_W][O1_C];
    DTYPE_T conv_out[O1_H][O1_W][O1_C];
    DTYPE_T pool_out[P1_H][P1_W][P1_C];
    DTYPE_T poolOutSw[P1_H][P1_W][P1_C];
    int zeropad = 0;
    int stride = 1;

	int init_cnt = 0;

    // Load values
	for (int i = 0; i< IN_H; i++){
	for (int j = 0; j< IN_W; j++){
	for (int k = 0; k< IN_C; k++){
	x_in[i][j][k] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}
init_cnt = 0;
for (int i = 0; i< F1_H; i++){
for (int j = 0; j< F1_W; j++){
for (int k = 0; k< F1_C; k++){
for (int l = 0; l< F1_N; l++){
	W[i][j][k][l] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}}
for (int i = 0; i< O1_H; i++){
for (int j = 0; j< O1_W; j++){
for (int k = 0; k< O1_C; k++){
b1[i][j][k] = 0;//init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}
//for (int i = 0; i< 8; i++){
//for (int j = 0; j< 8; j++){
//for (int k = 0; k< 2; k++){
//	conv_out = rand();
//}}}
//    conv2d<10,10,1,3,3,8,8,2>(x_in, W, conv_out, stride, zeropad);
//    maxPoolNxN<8,8,2,4,4,2,2,2>(conv_out,pool_out);
inference(x_in,W,b1,pool_out);

conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,F1_N>(x_in, W, b1, conv_out, stride, zeropad);
maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_F>(conv_out,poolOutSw);


for (int i = 0; i< P1_H; i++){
for (int j = 0; j< P1_W; j++){
for (int k = 0; k< P1_C; k++){
if(poolOutSw[i][j][k] != pool_out[i][j][k]){printf("O/P differs at %d,%d,%d\n",i,j,k);}//init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}
printf("Sim Completed\n");

}
