#include <iostream>
#include <math.h>
#include "sm.h"
#include "fc.h"

using namespace std;


int main(){
    Matrix<1,5> X={1.0, 2.0, 4.0, 3.0,1.0};
    Matrix<3,5> W1={0.1,0.3,0.5,0.5,0.8,0.2,0.01,0.05,0.1,0.2,0.1,0.2,0.3,0.1,0.1};
    Matrix<1,3> B1={0.5,0.2,0.3};
    Matrix<2,3> W2={0.1,0.3,0.5,0.5,0.8,0.2};
    Matrix<1,2> B2={0.5,0.2};
    Matrix<1,3> Z;
    Matrix<1,2> Y;

    fc(X,W1,B1,Z);
    sm(Z,W2,B2,Y);
    printMatrix(Y);

}
