#include <stdio.h>
#include <cmath>
#include <iostream>
#include <cstdlib>
// #include <utils.h>

#define INDEX3D(a,i,j,k,D0,D1) *(a+D0*D1*k+D0*j+i) 

float sigmoid(float x);
float relu(float x);
