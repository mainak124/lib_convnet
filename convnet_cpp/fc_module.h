#include <iostream>
#include "matrixTemplate.h"
using namespace std;

template<int xH,int xW, int wH, int wW, int bH,int bW, int yH, int yW>
void fc(const DTYPE_T X[xH][xW], const DTYPE_T W[wH][wW], const DTYPE_T B[bH][bW], DTYPE_T Y[yH][yW]) {
    //Step 1: t = x*w_transpose + b
//    DTYPE Wt[wW][wH];
    DTYPE_T T[yH][yW];
    DTYPE_T S[yH][yW];
    //transpose<wH, wW>(W,Wt);
    mult< xH, xW, wH, wW>(X,W,T);
    add<yH, yW>(T,B,S);
    //Step 2: Apply Sigmoid to the t vector to output y
    sigmoid<yH, yW>(S,Y);
}
