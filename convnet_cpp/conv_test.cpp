#include <stdio.h>
#include <cstdlib>
#include "conv.h"
#include "cnn.h"
#include "fc_module.h"
#include "sm_module.h"
#include "weights.h"

int main() {

DTYPE_T x[IN_H][IN_W][IN_C];
DTYPE_T poolOut[P3_H][P3_W][P3_C];
int smOut;

//DTYPE_T f1[F1_H][F1_W][F1_C][F1_N];
//DTYPE_T b1[O1_H][O1_W][O1_C];
DTYPE_T convOutput1[O1_H][O1_W][O1_C];
DTYPE_T lrnOutput1[O1_H][O1_W][O1_C];

DTYPE_T poolOut1[P1_H][P1_W][P1_C];

//DTYPE_T f2[F2_H][F2_W][F2_C][F2_N];
//DTYPE_T b2[O2_H][O2_W][O2_C];
DTYPE_T convOutput2[O2_H][O2_W][O2_C];
DTYPE_T lrnOutput2[O2_H][O2_W][O2_C];

DTYPE_T poolOut2[P2_H][P2_W][P2_C];

//DTYPE_T f3[F3_H][F3_W][F3_C][F3_N];
//DTYPE_T b3[O3_H][O3_W][O3_C];
DTYPE_T convOutput3[O3_H][O3_W][O3_C];
DTYPE_T lrnOutput3[O3_H][O3_W][O3_C];

DTYPE_T poolOut3[P3_H][P3_W][P3_C];

DTYPE_T fcIn[FC_IN_H][FC_IN_W];
DTYPE_T fcOut4[FC_OUT_H][FC_OUT_W];

//DTYPE_T W4[FC_WT_H][FC_WT_W];
//DTYPE_T B4[FC_B_H][FC_B_W];

//DTYPE_T W5[SM_WT_H][SM_WT_W];
//DTYPE_T B5[SM_B_H][SM_B_W];
int smOut5;

    float init_cnt = 0;

    // Load values
	for (int i = 0; i< IN_H; i++)
		for (int j = 0; j< IN_W; j++)
			for (int k = 0; k< IN_C; k++)
				x[i][j][k] = x_in[0][i][j][k];
//    init_cnt = 2;
//	for (int i = 0; i< F1_H; i++)
//		for (int j = 0; j< F1_W; j++)
//			for (int k = 0; k< F1_C; k++)
//				for (int l = 0; l< F1_N; l++)
//					f1[i][j][k][l] = init_cnt+0.01;
//	for (int i = 0; i< O1_H; i++)
//		for (int j = 0; j< O1_W; j++)
//			for (int k = 0; k< O1_C; k++)
//				b1[i][j][k] = 0;
//	init_cnt = 1;
//	for (int i = 0; i< F2_H; i++)
//		for (int j = 0; j< F2_W; j++)
//			for (int k = 0; k< F2_C; k++)
//				for (int l = 0; l< F2_N; l++)
//					f2[i][j][k][l] = init_cnt+0.01;
//
//	for (int i = 0; i< O2_H; i++)
//		for (int j = 0; j< O2_W; j++)
//			for (int k = 0; k< O2_C; k++)
//				b2[i][j][k] = 0;
//	init_cnt = 3;
//	for (int i = 0; i< F3_H; i++)
//		for (int j = 0; j< F3_W; j++)
//			for (int k = 0; k< F3_C; k++)
//				for (int l = 0; l< F3_N; l++)
//					f3[i][j][k][l] = init_cnt+0.01;
//	for (int i = 0; i< O3_H; i++)
//		for (int j = 0; j< O3_W; j++)
//			for (int k = 0; k< O3_C; k++)
//				b3[i][j][k] = 0;
//
//	for (int i = 0; i< FC_WT_H; i++)
//		for (int j = 0; j< FC_WT_W; j++)
//				W4[i][j] = init_cnt+0.01;//fcWeight[i][j];
//
//	for (int i = 0; i< FC_B_H; i++)
//		for (int j = 0; j< FC_B_W; j++)
//				B4[i][j] = 0;
//
//	for (int i = 0; i< FC_WT_H; i++)
//		for (int j = 0; j< FC_WT_W; j++)
//				W4[i][j] = init_cnt+0.01;//fcWeight[i][j];
//
//	for (int i = 0; i< SM_B_H; i++)
//		for (int j = 0; j< SM_B_W; j++)
//				B5[i][j] = 0;

	inference(x,f1,b1,f2,b2,f3,b3,W4,B4,W5,B5,smOut);
      
	conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,O1_C,F1_N>(x, f1, b1, convOutput1, F1_S, F1_Z);
	maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_S>(convOutput1,poolOut1);

	conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,O2_C,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
	maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_S>(convOutput2,poolOut2);

	conv2d<P2_H,P2_W,P2_C,F3_H,F3_W,O3_H,O3_W,O3_C,F3_N>(poolOut2, f3, b3, convOutput3, F3_S, F3_Z);

	for(int i=0; i<O3_H; i++)
		for(int j=0; j<O3_W; j++)
			for(int k=0; k<O3_C; k++)
				fcIn[0][i*O3_H+j*O3_W+k] = convOutput3[i][j][k];

    fc<FC_IN_H, FC_IN_W, FC_WT_H, FC_WT_W, FC_B_H, FC_B_W, FC_OUT_H, FC_OUT_W>(fcIn,W4,B4,fcOut4);
    sm<SM_IN_H, SM_IN_W, SM_WT_H, SM_WT_W, SM_B_H, SM_B_W, SM_OUT_H, SM_OUT_W>(fcOut4,W5,B5,smOut5);

//	for (int i = 0; i< SM_OUT_H; i++)
//		for (int j = 0; j< SM_OUT_W; j++)
			/*if(smOut != smOut5)*/{printf("O/P: %d HW, %d SW\n",smOut,smOut5);}

//	for (int i = 0; i< P2_H; i++){
//		for (int j = 0; j< P2_W; j++){
//			for (int k = 0; k< P2_C; k++){
//				if(poolOut[i][j][k] != poolOut2[i][j][k]){printf("O/P differs at %d,%d,%d\n",i,j,k);}
//			}
//		}
//	}
	printf("Sim Completed\n");

}
