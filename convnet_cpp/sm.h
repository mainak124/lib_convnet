#include <iostream>
#include <math.h>
using namespace std;

template<int sizeAH,int sizeAW>
void softmax(const DTYPE A[sizeAH][sizeAW], DTYPE B[sizeAH][sizeAW]){

    double total = 0.0;
    for(int i=0;i<sizeAH;i++) {
        for(int j=0;j<sizeAW;j++) {
                B[i][j]=exp(A[i][j]);
                total += B[i][j];
        }
    }

    for(int i=0;i<sizeAH;i++) {
        for(int j=0;j<sizeAW;j++) {
                B[i][j]/=total;
        }
    }
}

template<int xH,int xW, int wH, int wW, int bH,int bW, int yH, int yW>
void sm(const DTYPE X[xH][xW], const DTYPE W[wH][wW], const DTYPE B[bH][bW], DTYPE Y[yH][yW]) {
    //Step 1: t = x*w_transpose + b
    DTYPE Wt[wW][wH]; 
    DTYPE T[yH][yW];
    DTYPE S[yH][yW];
    transpose<wH, wW>(W,Wt);
    mult< xH, xW, wW, wH>(X,Wt,T);
    add<yH, yW>(T,B,S);
    //Step 2: Find exponential of t & normalize to get y
    softmax<yH, yW>(S,Y);
}