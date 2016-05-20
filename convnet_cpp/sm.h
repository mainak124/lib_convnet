#include <iostream>
#include <math.h>
using namespace std;

template<int H, int W>
struct Matrix{
   double m[H][W];
};

template<int sizeAH,int sizeAW>
void softmax(const Matrix<sizeAH,sizeAW>& A, Matrix<sizeAH,sizeAW>& B){

    double total = 0.0;
    for(int i=0;i<sizeAH;i++) {
        for(int j=0;j<sizeAW;j++) {
                B.m[i][j]=exp(A.m[i][j]);
                total += B.m[i][j];
        }
    }

    for(int i=0;i<sizeAH;i++) {
        for(int j=0;j<sizeAW;j++) {
                B.m[i][j]/=total;
        }
    }


}

template<int xH,int xW, int wH, int wW, int bH,int bW, int yH, int yW>
void sm(const Matrix<xH,xW>& X, const Matrix<wH,wW>& W, const Matrix<bH,bW>& B, Matrix<yH,yW>& Y) {
    //Step 1: t = x*w_transpose + b
    Matrix<wW,wH> Wt; 
    Matrix<yH,yW> T;
    Matrix<yH,yW> S; 
    transpose(W,Wt);
    mult(X,Wt,T);
    add(T,B,S);
    //Step 2: Find exponential of t & normalize to get y
    softmax(S,Y);
}

