#include "cnn.h"
#include "conv.h"

void inference(
				const DTYPE_T inputImage[IN_H][IN_W][IN_C],
				const DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N],
				const DTYPE_T bias1[O1_H][O1_W][O1_C],
				const DTYPE_T Filter2[F2_H][F2_W][F2_C][F2_N],
				const DTYPE_T bias2[O2_H][O2_W][O2_C],
				const DTYPE_T Filter3[F3_H][F3_W][F3_C][F3_N],
				const DTYPE_T bias3[O3_H][O3_W][O3_C],
				const DTYPE_T Filter4[F4_H][F4_W][F4_C][F4_N],
				const DTYPE_T bias4[O4_H][O4_W][O4_C],
				const DTYPE_T Filter5[F5_H][F5_W][F5_C][F5_N],
				const DTYPE_T bias5[O5_H][O5_W][O5_C],
				DTYPE_T poolOutput5[P5_H][P5_W][P5_C]
			  ){
#pragma HLS DATAFLOW

		DTYPE_T x_in[IN_H][IN_W][IN_C];
		DTYPE_T f1[F1_H][F1_W][F1_C][F1_N];
		DTYPE_T b1[O1_H][O1_W][O1_C];
		DTYPE_T convOutput1[O1_H][O1_W][O1_C];

		DTYPE_T poolOut1[P1_H][P1_W][P1_C];

		DTYPE_T f2[F2_H][F2_W][F2_C][F2_N];
		DTYPE_T b2[O2_H][O2_W][O2_C];
		DTYPE_T convOutput2[O2_H][O2_W][O2_C];

		DTYPE_T poolOut2[P2_H][P2_W][P2_C];

		DTYPE_T f3[F3_H][F3_W][F3_C][F3_N];
		DTYPE_T b3[O3_H][O3_W][O3_C];
		DTYPE_T convOutput3[O3_H][O3_W][O3_C];

		DTYPE_T poolOut3[P3_H][P3_W][P3_C];

		DTYPE_T f4[F4_H][F4_W][F4_C][F4_N];
		DTYPE_T b4[O4_H][O4_W][O4_C];
		DTYPE_T convOutput4[O4_H][O4_W][O4_C];

		DTYPE_T poolOut4[P4_H][P4_W][P4_C];

		DTYPE_T f5[F5_H][F5_W][F5_C][F5_N];
		DTYPE_T b5[O5_H][O5_W][O5_C];
		DTYPE_T convOutput5[O5_H][O5_W][O5_C];

		DTYPE_T poolOut5[P5_H][P5_W][P5_C];


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

		for (int i = 0; i< F3_H; i++)
				for (int j = 0; j< F3_W; j++)
						for (int k = 0; k< F3_C; k++)
								for (int l = 0; l< F3_N; l++)
										f3[i][j][k][l] = Filter3[i][j][k][l];

		for (int i = 0; i< O3_H; i++)
				for (int j = 0; j< O3_W; j++)
						for (int k = 0; k< O3_C; k++)
								b3[i][j][k] = bias3[i][j][k];

		for (int i = 0; i< F4_H; i++)
				for (int j = 0; j< F4_W; j++)
						for (int k = 0; k< F4_C; k++)
								for (int l = 0; l< F4_N; l++)
										f4[i][j][k][l] = Filter4[i][j][k][l];

		for (int i = 0; i< O4_H; i++)
				for (int j = 0; j< O4_W; j++)
						for (int k = 0; k< O4_C; k++)
								b4[i][j][k] = bias4[i][j][k];

		for (int i = 0; i< F5_H; i++)
				for (int j = 0; j< F5_W; j++)
						for (int k = 0; k< F5_C; k++)
								for (int l = 0; l< F5_N; l++)
										f5[i][j][k][l] = Filter5[i][j][k][l];

		for (int i = 0; i< O5_H; i++)
				for (int j = 0; j< O5_W; j++)
						for (int k = 0; k< O5_C; k++)
								b5[i][j][k] = bias5[i][j][k];



		conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,O1_C,F1_N>(x_in, f1, b1, convOutput1, F1_S, F1_Z);
		maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_S>(convOutput1,poolOut1);

		conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,O2_C,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
		maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_S>(convOutput2,poolOut2);

//		conv2d<P2_H,P2_W,P2_C,F3_H,F3_W,O3_H,O3_W,O3_C,F3_N>(poolOut2, f3, b3, convOutput3, F3_S, F3_Z);
//		maxPoolNxN<O3_H,O3_W,O3_C,P3_H,P3_W,P3_C,P3_F,P3_S>(convOutput3,poolOut3);
//
//		conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,O2_C,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
//		maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_S>(convOutput2,poolOut2);
//
//		conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,O2_C,F2_N>(poolOut1, f2, b2, convOutput2, F2_S, F2_Z);
//		maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_S>(convOutput2,poolOut2);

		for (int i = 0; i< P5_H; i++)
				for (int j = 0; j< P5_W; j++)
						for (int k = 0; k< P5_C; k++)
								poolOutput5[i][j][k] = poolOut5[i][j][k];

}
