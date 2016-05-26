#include <stdio.h>
#include <cstdlib>
#include "conv.h"
#include "cnn.h"


int main() {

DTYPE_T x_in[IN_H][IN_W][IN_C];
DTYPE_T poolOut[P3_H][P3_W][P3_C];

DTYPE_T f1[F1_H][F1_W][F1_C][F1_N];
DTYPE_T b1[O1_H][O1_W][O1_C];
DTYPE_T convOutput1[O1_H][O1_W][O1_C];
DTYPE_T lrnOutput1[O1_H][O1_W][O1_C];

DTYPE_T poolOut1[P1_H][P1_W][P1_C];

DTYPE_T f2[F2_H][F2_W][F2_C][F2_N];
DTYPE_T b2[O2_H][O2_W][O2_C];
DTYPE_T convOutput2[O2_H][O2_W][O2_C];
DTYPE_T lrnOutput2[O2_H][O2_W][O2_C];

DTYPE_T poolOut2[P2_H][P2_W][P2_C];

DTYPE_T f3[F3_H][F3_W][F3_C][F3_N];
DTYPE_T b3[O3_H][O3_W][O3_C];
DTYPE_T convOutput3[O3_H][O3_W][O3_C];
DTYPE_T lrnOutput3[O3_H][O3_W][O3_C];

DTYPE_T poolOut3[P3_H][P3_W][P3_C];

    float init_cnt = 0;

    // Load values
	for (int i = 0; i< IN_H; i++)
		for (int j = 0; j< IN_W; j++)
			for (int k = 0; k< IN_C; k++)
				x_in[i][j][k] = init_cnt+0.01;
    init_cnt = 2;
	for (int i = 0; i< F1_H; i++)
		for (int j = 0; j< F1_W; j++)
			for (int k = 0; k< F1_C; k++)
				for (int l = 0; l< F1_N; l++)
					f1[i][j][k][l] = init_cnt+0.01;
	for (int i = 0; i< O1_H; i++)
		for (int j = 0; j< O1_W; j++)
			for (int k = 0; k< O1_C; k++)
				b1[i][j][k] = 0;
	init_cnt = 1;
	for (int i = 0; i< F2_H; i++)
		for (int j = 0; j< F2_W; j++)
			for (int k = 0; k< F2_C; k++)
				for (int l = 0; l< F2_N; l++)
					f2[i][j][k][l] = init_cnt+0.01;
				
	for (int i = 0; i< O2_H; i++)
		for (int j = 0; j< O2_W; j++)
			for (int k = 0; k< O2_C; k++)
				b2[i][j][k] = 0;
	init_cnt = 3;
	for (int i = 0; i< F3_H; i++)
		for (int j = 0; j< F3_W; j++)
			for (int k = 0; k< F3_C; k++)
				for (int l = 0; l< F3_N; l++)
					f3[i][j][k][l] = init_cnt+0.01;
	for (int i = 0; i< O3_H; i++)
		for (int j = 0; j< O3_W; j++)
			for (int k = 0; k< O3_C; k++)
				b3[i][j][k] = 0;
	
	inference(x_in,f1,b1,f2,b2,f3,b3,poolOut);
      
	conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,O1_C,F1_N>(x_in, f1, b1, convOutput1, F1_S, F1_Z);
	maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_S>(convOutput1,poolOut1);

	conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,O2_C,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
	maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_S>(convOutput2,poolOut2);
      
	for (int i = 0; i< P2_H; i++){
		for (int j = 0; j< P2_W; j++){
			for (int k = 0; k< P2_C; k++){
				if(poolOut[i][j][k] != poolOut2[i][j][k]){printf("O/P differs at %d,%d,%d\n",i,j,k);}
			}
		}
	}
	printf("Sim Completed\n");

}
