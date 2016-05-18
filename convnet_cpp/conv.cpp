#include "myutils.h"
#include "conv.h"

// class _conv {
//     float *params[][][][];
//     int stride, n_filters, zero_pad;
//     int n_out_r; 
//     int n_out_c;
//     public:
//         _conv(int, int, );
//         conv2d(x);
// 
// }; 
// 
// _conv::_conv (float W[][][][], ) {
//     params = W;
//     stride = stride;
//     zero_pad = zero_pad;
//     n_filters = n_filters;
//     n_out_r = (n_row_in - n_row_filter + 2*zero_pad)/stride + 1;
//     n_out_c = (n_col_in - n_col_filter + 2*zero_pad)/stride + 1;
//     n_in_r = 
// }

// _conv::conv2d(x, n_in, n_row, n_col, float (*out_feature)[n_out_c][n_filter]) {
// void conv2d(x, n_in, n_row, n_col, float (*out_feature)[n_out_c][n_filter]) {

template
<
    int n_row_in,
    int n_col_in,
    int n_in,
    int n_row_filter,
    int n_col_filter,
    int n_out_c,
    int n_out_r,
    int n_filter
>    
void conv2d(float x[n_row_in][n_col_in][n_in], float W[n_row_filter][n_col_filter][n_in][n_filter], float out_feature[n_out_r][n_out_c][n_filter], int stride, int zero_pad) {
    
    float in_val, out;
    int slide_in_r_idx, slide_in_c_idx, out_r_idx, out_c_idx;
    
    // Treversing through spatial dimensions of the input
    for (int in_r_idx=0; in_r_idx<n_row_in-n_row_filter+2*zero_pad+1; in_r_idx=in_r_idx+stride) {
        for (int in_c_idx=0; in_c_idx<n_col_in-n_col_filter+2*zero_pad+1; in_c_idx=in_c_idx+stride) {
            // Traversing through all output filters
            for (int filter_idx=0; filter_idx<n_filter; filter_idx++) { 
                out = 0;
                // Traversing through all input channels
                for (int in_ch_idx=0; in_ch_idx<n_in; in_ch_idx++) {
                    // Traversing through spatial dimensions of the filters
                    for(int r_idx=0; r_idx<n_row_filter; r_idx++) {
                        for(int c_idx=0; c_idx<n_col_filter; c_idx++) {
                            slide_in_r_idx = in_r_idx+r_idx - zero_pad;
                            slide_in_c_idx = in_c_idx+r_idx - zero_pad;
                            // zero padding
                            if ((slide_in_r_idx < 0) || (slide_in_r_idx >= n_row_in) || (slide_in_c_idx < 0) || (slide_in_c_idx >= n_col_in))
                                in_val = 0;
                            else
                                in_val = x[slide_in_r_idx][slide_in_c_idx][in_ch_idx];    
                            out = out + (in_val * W[r_idx][c_idx][in_ch_idx][filter_idx]);
                        }
                    }
                }
                out_r_idx = in_r_idx/stride;
                out_c_idx = in_c_idx/stride;
                out_feature[out_r_idx][out_c_idx][filter_idx] = out;
            }    
        }    
    }    
}        
