#include "myutils.h"

DTYPE_T sigmoid(DTYPE_T x) {
    return 1/(1+exp(-x));
}    

DTYPE_T relu(DTYPE_T x) {
    if (x>0)
        return x;
    else
        return (DTYPE_T)0;
}
