#include <stdio.h>
#include <cstdlib>
#include "conv.h"
#include "cnn.h"


int main() {

    DTYPE_T x_in[IN_H][IN_W][IN_C];
    DTYPE_T W1[F1_H][F1_W][F1_C][F1_N];
    DTYPE_T b1[O1_H][O1_W][O1_C];
    DTYPE_T conv_out1[O1_H][O1_W][O1_C];
    DTYPE_T pool_out1[P1_H][P1_W][P1_C];
    DTYPE_T W2[F2_H][F2_W][F2_C][F2_N];
    DTYPE_T b2[O2_H][O2_W][O2_C];
    DTYPE_T conv_out2[O2_H][O2_W][O2_C];
    DTYPE_T pool_out2[P2_H][P2_W][P2_C];
    DTYPE_T poolOut[P2_H][P2_W][P2_C];
//    int zeropad = 0;
//    int stride = 1;

    int init_cnt = 0;

    // Load values
    for (int i = 0; i< IN_H; i++){
    	for (int j = 0; j< IN_W; j++){
    		for (int k = 0; k< IN_C; k++){
    			x_in[i][j][k] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    		}
    	}
    }
    init_cnt = 0;
    for (int i = 0; i< F1_H; i++){
    	for (int j = 0; j< F1_W; j++){
    		for (int k = 0; k< F1_C; k++){
    			for (int l = 0; l< F1_N; l++){
    				W1[i][j][k][l] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    			}
    		}
    	}
    }
    for (int i = 0; i< O1_H; i++){
    	for (int j = 0; j< O1_W; j++){
    		for (int k = 0; k< O1_C; k++){
    			b1[i][j][k] = 0;//init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    		}
    	}
    }
    init_cnt = 0;
    for (int i = 0; i< F2_H; i++){
    	for (int j = 0; j< F2_W; j++){
    		for (int k = 0; k< F2_C; k++){
    			for (int l = 0; l< F2_N; l++){
    				W2[i][j][k][l] = init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    			}
    		}
    	}
    }
    for (int i = 0; i< O2_H; i++){
    	for (int j = 0; j< O2_W; j++){
    		for (int k = 0; k< O2_C; k++){
    			b2[i][j][k] = 0;//init_cnt++;//static_cast <float> (rand()) / static_cast <float> (RAND_MAX);
    		}
    	}
    }

    inference(x_in,W1,b1,W2,b2,poolOut);

    conv2d<IN_H,IN_W,IN_C,F1_H,F1_W,O1_H,O1_W,F1_N>(x_in, W1, b1, conv_out1, F1_S, F1_Z);
    maxPoolNxN<O1_H,O1_W,O1_C,P1_H,P1_W,P1_C,P1_F,P1_F>(conv_out1,pool_out1);
    conv2d<P1_H,P1_W,P1_C,F2_H,F2_W,O2_H,O2_W,F2_N>(pool_out1, W2, b2, conv_out2, F2_S, F2_Z);
    maxPoolNxN<O2_H,O2_W,O2_C,P2_H,P2_W,P2_C,P2_F,P2_F>(conv_out2,pool_out2);

    for (int i = 0; i< P2_H; i++){
    	for (int j = 0; j< P2_W; j++){
    		for (int k = 0; k< P2_C; k++){
    			if(poolOut[i][j][k] != pool_out2[i][j][k]){printf("O/P differs at %d,%d,%d\n",i,j,k);}
    		}
    	}
    }
    printf("Sim Completed\n");

}
