#include "myutils.h"

float sigmoid(float x) {
    return 1/(1+exp(-x));
}    

float relu(float x) {
    if (x>0)
        return x;
    else
        return 0;    
}    

// void dropout(float x[n_r][n_c][n_ch], float keep_prob) {
//     int randint;
//     for (int i=0; i<n_r; i++) {
//         for (int j=0; j<n_c; j++) {
//             for (int k=0; k<n_ch; k++) {
//                 randint = rand()%100;
//                 if (randint < keep_prob*rand)
//                     x[i][j][k] = x[i][j][k]/keep_prob;
//                 else    
//                     x[i][j][k] = 0;
//             }        
//         }    
//     }    
// }    
