#include <iostream>
#include "parameters.h"
#include "matrixTemplate.h"
using namespace std;

void fc_sm(DTYPE Y[SM_OUT_H][SM_OUT_W]);

int main(){
    // DTYPE X[FC_IN_H][FC_IN_W]={1.0, 2.0, 4.0, 3.0,1.0};
    // DTYPE W1[FC_WT_H][FC_WT_W]={0.1,0.2,0.1,0.3,0.01,0.2,0.5,0.05,0.3,0.5,0.1,0.1,0.8,0.2,0.1};
    // DTYPE B1[FC_B_H][FC_B_W]={0.5,0.2,0.3};
    // DTYPE W2[SM_WT_H][SM_WT_W]={0.1,0.5,0.3,0.8,0.5,0.2};
    // DTYPE B2[SM_B_H][SM_B_W]={0.5,0.2};


    DTYPE Y[SM_OUT_H][SM_OUT_W];

    fc_sm(Y);
    printMatrix<SM_OUT_H, SM_OUT_W>(Y);

}
