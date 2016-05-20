//#include "cnn.h"
#include "conv.h"

void inference(DTYPE_T inputImage[IN_H][IN_W][IN_C], DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N], DTYPE_T bias1[O1_H][O1_W][O1_C], DTYPE_T poolOutput1[P1_H][P1_W][P1_C]){

	DTYPE_T x_in[IN_H][IN_W][IN_C];
	DTYPE_T f1[F1_H][F1_W][F1_C][F1_N];
	DTYPE_T b1[O1_H][O1_W][O1_C];
	DTYPE_T convOutput1[O1_H][O1_W][O1_C];

	DTYPE_T poolOut1[P1_H][P1_W][P1_C];

	DTYPE_T Filter2[F2_H][F2_W][F2_C][F2_N];
	DTYPE_T convOutput2[O2_H][O2_W][O2_C];

	DTYPE_T poolOutput2[P2_H][P2_W][P2_C];

//	conv(inputImage,Filter1,IN_H,IN_W,IN_C,F1_H,F1_W,F1_C,F1_N,convOutput1);
//	pool(convOutput1,O1_H,O1_W,O1_C,P1_F,poolOutput1);
//	conv(poolOutput1,Filter2,P1_H,P1_W,P1_C,F2_H,F2_W,F2_C,F2_N,convOutput2);
//	pool(convOutput1,O2_H,O2_W,O2_C,P2_F,poolOutput2);
//	pool(convOutput2,P2_F,poolOutput2);

    int zeropad = 0;
    int stride = F1_S;

	for (int i = 0; i< IN_H; i++){
	for (int j = 0; j< IN_W; j++){
	for (int k = 0; k< IN_C; k++){
	x_in[i][j][k] = inputImage[i][j][k];//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}
	for (int i = 0; i< F1_H; i++){
	for (int j = 0; j< F1_W; j++){
	for (int k = 0; k< F1_C; k++){
	for (int l = 0; l< F1_N; l++){
	f1[i][j][k][l] = Filter1[i][j][k][l];//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}}
	for (int i = 0; i< O1_H; i++){
	for (int j = 0; j< O1_W; j++){
	for (int k = 0; k< O1_C; k++){
		b1[i][j][k] = bias1[i][j][k];//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
	}}}
    conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,F1_N>(x_in, f1, b1, convOutput1, stride, zeropad);
    maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_F>(convOutput1,poolOut1);


	for (int i = 0; i< P1_H; i++){
	for (int j = 0; j< P1_W; j++){
	for (int k = 0; k< P1_C; k++){
	poolOutput1[i][j][k] = poolOut1[i][j][k];//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
}}}
}
