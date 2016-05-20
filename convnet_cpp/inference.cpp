#include "cnn.h"
#include "conv.h"

void inference(
		DTYPE_T inputImage[IN_H][IN_W][IN_C],
		DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N],
		DTYPE_T bias1[O1_H][O1_W][O1_C],
		DTYPE_T Filter2[F2_H][F2_W][F2_C][F2_N],
		DTYPE_T bias2[O2_H][O2_W][O2_C],
		DTYPE_T poolOutput2[P2_H][P2_W][P2_C]
){

	DTYPE_T x_in[IN_H][IN_W][IN_C];
	DTYPE_T f1[F1_H][F1_W][F1_C][F1_N];
	DTYPE_T b1[O1_H][O1_W][O1_C];
	DTYPE_T convOutput1[O1_H][O1_W][O1_C];

	DTYPE_T poolOut1[P1_H][P1_W][P1_C];

	DTYPE_T f2[F2_H][F2_W][F2_C][F2_N];
	DTYPE_T b2[O2_H][O2_W][O2_C];
	DTYPE_T convOutput2[O2_H][O2_W][O2_C];

	DTYPE_T poolOut2[P2_H][P2_W][P2_C];

    for (int i = 0; i< IN_H; i++)
    	for (int j = 0; j< IN_W; j++)
    		for (int k = 0; k< IN_C; k++)
    			x_in[i][j][k] = inputImage[i][j][k];

    for (int i = 0; i< F1_H; i++)
    	for (int j = 0; j< F1_W; j++)
    		for (int k = 0; k< F1_C; k++)
    			for (int l = 0; l< F1_N; l++)
    				f1[i][j][k][l] = Filter1[i][j][k][l];

    for (int i = 0; i< O1_H; i++)
    	for (int j = 0; j< O1_W; j++)
    		for (int k = 0; k< O1_C; k++)
    			b1[i][j][k] = bias1[i][j][k];

    for (int i = 0; i< F2_H; i++)
    	for (int j = 0; j< F2_W; j++)
    		for (int k = 0; k< F2_C; k++)
    			for (int l = 0; l< F2_N; l++)
    				f2[i][j][k][l] = Filter2[i][j][k][l];

    for (int i = 0; i< O2_H; i++)
    	for (int j = 0; j< O2_W; j++)
    		for (int k = 0; k< O2_C; k++)
    			b2[i][j][k] = bias2[i][j][k];



	conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,F1_N>(x_in, f1, b1, convOutput1, F1_S, F1_Z);
    maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_F>(convOutput1,poolOut1);

    conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
    maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_F>(convOutput2,poolOut2);

    for (int i = 0; i< P1_H; i++)
    	for (int j = 0; j< P1_W; j++)
    		for (int k = 0; k< P1_C; k++)
    			poolOutput2[i][j][k] = poolOut2[i][j][k];//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);

}
