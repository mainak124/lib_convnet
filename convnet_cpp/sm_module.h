#include <iostream>
#include <math.h>
#include "matrixTemplate.h"
using namespace std;

template<int sizeAH,int sizeAW>
void softmax(DTYPE_T A[sizeAH][sizeAW], int& argmax){

//	DTYPE_T total = 0.0;
//	DTYPE_T B[sizeAH][sizeAW];
//	for(int i=0;i<sizeAH;i++) {
//		softmax_label2:for(int j=0;j<sizeAW;j++) {
//			A[i][j]=exp(A[i][j]);
//			//total += B[i][j];
//		}
//	}
	DTYPE_T max_val=(DTYPE_T)INT_MIN;
	for(int i=0;i<sizeAH;i++) {
		softmax_label7:for(int j=0;j<sizeAW;j++) {
			if(A[i][j] > max_val){
				max_val = A[i][j];
				argmax = i*sizeAH+j;
			}
		}
	}
}

template<int xH,int xW, int wH, int wW, int bH,int bW, int yH, int yW>
void sm(const DTYPE_T X[xH][xW], const DTYPE_T W[wH][wW], const DTYPE_T B[bH][bW], int& argmax) {
	//Step 1: t = x*w_transpose + b
	DTYPE_T Wt[wW][wH];
	DTYPE_T T[yH][yW];
	DTYPE_T S[yH][yW];
	//transpose<wH, wW>(W,Wt);
	mult< xH, xW, wH, wW>(X,W,T);
	add<yH, yW>(T,B,S);
	//Step 2: Find exponential of t & normalize to get y
	softmax<yH, yW>(S,argmax);
}
