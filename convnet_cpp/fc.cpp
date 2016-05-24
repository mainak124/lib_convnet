#include <iostream>
#include <math.h>
#include "matrixTemplate.h"
#include "sm.h"
#include "fc.h"

using namespace std;

#define FC_IN_H 1
#define FC_IN_W 5
#define FC_WT_H 3
#define FC_WT_W 5
#define FC_B_H  1
#define FC_B_W  3
#define FC_OUT_H 1
#define FC_OUT_W 3

#define SM_IN_H 1
#define SM_IN_W 3
#define SM_WT_H 2
#define SM_WT_W 3
#define SM_B_H  1
#define SM_B_W  2
#define SM_OUT_H 1
#define SM_OUT_W 2

int main(){
    DTYPE X[FC_IN_H][FC_IN_W]={1.0, 2.0, 4.0, 3.0,1.0};
    DTYPE W1[FC_WT_H][FC_WT_W]={0.1,0.3,0.5,0.5,0.8,0.2,0.01,0.05,0.1,0.2,0.1,0.2,0.3,0.1,0.1};
    DTYPE B1[FC_B_H][FC_B_W]={0.5,0.2,0.3};
    DTYPE W2[SM_WT_H][SM_WT_W]={0.1,0.3,0.5,0.5,0.8,0.2};
    DTYPE B2[SM_B_H][SM_B_W]={0.5,0.2};
    DTYPE Z[FC_OUT_H][FC_OUT_W];
    DTYPE Y[SM_OUT_H][SM_OUT_W];

    fc<FC_IN_H, FC_IN_W, FC_WT_H, FC_WT_W, FC_B_H, FC_B_W, FC_OUT_H, FC_OUT_W>(X,W1,B1,Z);
    sm<SM_IN_H, SM_IN_W, SM_WT_H, SM_WT_W, SM_B_H, SM_B_W, SM_OUT_H, SM_OUT_W>(Z,W2,B2,Y);
    printMatrix<SM_OUT_H, SM_OUT_W>(Y);

}
