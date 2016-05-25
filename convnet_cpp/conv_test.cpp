#include <stdio.h>
#include <cstdlib>
#include "conv.h"
#include "cnn.h"


int main() {

DTYPE_T x_in[IN_H][IN_W][IN_C];
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

DTYPE_T f4[F4_H][F4_W][F4_C][F4_N];
DTYPE_T b4[O4_H][O4_W][O4_C];
DTYPE_T convOutput4[O4_H][O4_W][O4_C];
DTYPE_T lrnOutput4[O4_H][O4_W][O4_C];

DTYPE_T poolOut4[P4_H][P4_W][P4_C];

DTYPE_T f5[F5_H][F5_W][F5_C][F5_N];
DTYPE_T b5[O5_H][O5_W][O5_C];
DTYPE_T convOutput5[O5_H][O5_W][O5_C];
DTYPE_T lrnOutput5[O5_H][O5_W][O5_C];

DTYPE_T poolOut5[P5_H][P5_W][P5_C];
DTYPE_T poolOut[P5_H][P5_W][P5_C];

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
	init_cnt = 0;
	for (int i = 0; i< F2_H; i++)
		for (int j = 0; j< F2_W; j++)
			for (int k = 0; k< F2_C; k++)
				for (int l = 0; l< F2_N; l++)
					f2[i][j][k][l] = init_cnt+0.01;
	for (int i = 0; i< O2_H; i++){
		for (int j = 0; j< O2_W; j++){
			for (int k = 0; k< O2_C; k++){
				b2[i][j][k] = 0;
}}}
	init_cnt = 3;
std::cout << F3_H << " " << F3_W << " " << F3_C << " " << F3_N << std::endl;
	for (int i = 0; i< F3_H; i++)
		for (int j = 0; j< F3_W; j++)
			for (int k = 0; k< F3_C; k++)
				for (int l = 0; l< F3_N; l++){
					f3[i][j][k][l] = init_cnt+0.01;
}
	for (int i = 0; i< O3_H; i++)
		for (int j = 0; j< O3_W; j++)
			for (int k = 0; k< O3_C; k++)
				b3[i][j][k] = 0;
	init_cnt = 1;
	for (int i = 0; i< F4_H; i++)
		for (int j = 0; j< F4_W; j++)
			for (int k = 0; k< F4_C; k++)
				for (int l = 0; l< F4_N; l++)
					f4[i][j][k][l] = init_cnt+0.01;
	for (int i = 0; i< O4_H; i++)
		for (int j = 0; j< O4_W; j++)
			for (int k = 0; k< O4_C; k++)
				b4[i][j][k] = 0;
	init_cnt = 4;
	for (int i = 0; i< F5_H; i++)
		for (int j = 0; j< F5_W; j++)
			for (int k = 0; k< F5_C; k++)
				for (int l = 0; l< F5_N; l++)
					f5[i][j][k][l] = init_cnt+0.01;
	for (int i = 0; i< O5_H; i++)
		for (int j = 0; j< O5_W; j++)
			for (int k = 0; k< O5_C; k++)
				b5[i][j][k] = 0;
	
	inference(x_in,f1,b1,f2,b2,f3,b3,f4,b4,f5,b5,poolOut);
      
	conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,O1_C,F1_N>(x_in, f1, b1, convOutput1, F1_S, F1_Z);
	lrn<O1_H,O1_W,O1_C>(convOutput1,lrnOutput1,L1_K,L1_N,L1_A,L1_B);
	maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_S>(lrnOutput1,poolOut1);

	conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,O2_C,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
	lrn<O2_H,O2_W,O2_C>(convOutput2,lrnOutput2,L2_K,L2_N,L2_A,L2_B);
	maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_S>(lrnOutput2,poolOut2);

	conv2d<P2_H,P2_W,P2_C,F3_H,F3_W,O3_H,O3_W,O3_C,F3_N>(poolOut2, f3, b3, convOutput3, F3_S, F3_Z);
	conv2d<P3_H,P3_W,P3_C,F4_H,F4_W,O4_H,O4_W,O4_C,F4_N>(convOutput3, f4, b4, convOutput4, F4_S, F4_Z);

	conv2d<P4_H,P4_W,P4_C,F5_H,F5_W,O5_H,O5_W,O5_C,F5_N>(convOutput4, f5, b5, convOutput5, F5_S, F5_Z);
	maxPoolNxN<O5_H,O5_W,O5_C,P5_H,P5_W,P5_C,P5_F,P5_S>(convOutput5,poolOut5);
      
	for (int i = 0; i< P5_H; i++){
		for (int j = 0; j< P5_W; j++){
			for (int k = 0; k< P5_C; k++){
				if(poolOut[i][j][k] != poolOut5[i][j][k]){printf("O/P differs at %d,%d,%d\n",i,j,k);}
			}
		}
	}
	printf("Sim Completed\n");

}
