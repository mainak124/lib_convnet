#include <cassert>
#include "cnn.h"
#include "myutils.h"
#include "hls_math.h"

template 
<
int n_row_in,
int n_col_in,
int n_in,
int n_row_filter,
int n_col_filter,
int n_out_c,
int n_out_r,
int n_out_ch,
int n_filter
>    
void conv2d(DTYPE_T x[n_row_in][n_col_in][n_in], DTYPE_T W[n_row_filter][n_col_filter][n_in][n_filter], DTYPE_T b[n_out_r][n_out_c][n_out_ch], DTYPE_T out_feature[n_out_r][n_out_c][n_out_ch], int stride, int zero_pad) {

	assert(n_filter==n_out_ch);
	DTYPE_T in_val, out;
	int slide_in_r_idx, slide_in_c_idx, out_r_idx, out_c_idx;

	// Traversing through spatial dimensions of the input
	for (int in_r_idx=0; in_r_idx<n_row_in-n_row_filter+2*zero_pad+1; in_r_idx+=stride) {
		for (int in_c_idx=0; in_c_idx<n_col_in-n_col_filter+2*zero_pad+1; in_c_idx+=stride) {
			// Traversing through all output filters
			for (int filter_idx=0; filter_idx<n_filter; filter_idx++) {
				out = 0;
				// Traversing through all input channels
				for (int in_ch_idx=0; in_ch_idx<n_in; in_ch_idx++) {
					// Traversing through spatial dimensions of the filters
					for(int r_idx=0; r_idx<n_row_filter; r_idx++) {
						for(int c_idx=0; c_idx<n_col_filter; c_idx++) {
							slide_in_r_idx = in_r_idx+r_idx - zero_pad;
							slide_in_c_idx = in_c_idx+c_idx - zero_pad;
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
				out_feature[out_r_idx][out_c_idx][filter_idx] = out + b[out_r_idx][out_c_idx][filter_idx];
			}
		}
	}
}

template 
<
int n_row_in,
int n_col_in,
int n_in,
int n_out_c,
int n_out_r,
int n_out,
int n_pool_f,
int n_pool_s
>    
void maxPoolNxN(DTYPE_T x[n_row_in][n_col_in][n_in], DTYPE_T out_feature[n_out_r][n_out_c][n_out]) {
	assert(n_in == n_out);

	DTYPE_T out;

	// Traversing through spatial dimensions of the input
	for (int in_r_idx=0; in_r_idx<n_row_in; in_r_idx+=n_pool_s) {
		for (int in_c_idx=0; in_c_idx<n_col_in; in_c_idx+=n_pool_s) {
			// Traversing through all input channels
			for (int in_ch_idx=0; in_ch_idx<n_in; in_ch_idx++) {
				// Traversing through spatial dimensions of the filters
				out = 0;
				for(int r_idx=0; r_idx<n_pool_f; r_idx++) {
					for(int c_idx=0; c_idx<n_pool_f; c_idx++) {
						if(x[in_r_idx+r_idx][in_c_idx+c_idx][in_ch_idx] > out)
							out = x[in_r_idx+r_idx][in_c_idx+c_idx][in_ch_idx];
					}
				}
				int out_r_idx = in_r_idx/n_pool_s;
				int out_c_idx = in_c_idx/n_pool_s;
				int out_ch_idx = in_ch_idx;
				out_feature[out_r_idx][out_c_idx][out_ch_idx] = out;
			}
		}
	}
}


template 
<
int n_row_in,
int n_col_in,
int n_in
>    
void lrn(DTYPE_T x[n_row_in][n_col_in][n_in], DTYPE_T out_feature[n_row_in][n_col_in][n_in], int k, int n, float alpha, float beta) {

	int j_start, j_end, prev_j_start, prev_j_end;
	DTYPE_T sum=0, prev_sum=0;
	DTYPE_T den;

	for (int r_idx=0; r_idx<n_row_in; r_idx++) {
		for (int c_idx=0; c_idx<n_col_in; c_idx++) {
			for (int ch_idx=0; ch_idx<n_in; ch_idx++) {
				// Find the summation first
				sum = 0;
				j_start = std::max(0, ch_idx-(n/2));
				j_end = std::min(n_in-1, ch_idx+(n/2));
				if (ch_idx == 0) {
					for (int sum_ch_idx=0; sum_ch_idx<=n/2; sum_ch_idx++) {
//#pragma HLS UNROLL
						sum += x[r_idx][c_idx][sum_ch_idx] * x[r_idx][c_idx][sum_ch_idx];
					}    
				}        
				else {
					if (j_start==prev_j_start+1) // Previous first element from previous sum should be removed
						sum = prev_sum - x[r_idx][c_idx][prev_j_start];
					if (j_end==prev_j_end+1) // Current last element should be added to the previous sum
						sum = sum + x[r_idx][c_idx][j_end];
				}    

				// Find the new element based on the sum
				den = exp(beta*log(k + (alpha * sum)));
				out_feature[r_idx][c_idx][ch_idx] = x[r_idx][c_idx][ch_idx] / den;

				// Assign the current quantities to the previous quantities
				prev_j_start = j_start;
				prev_j_end = j_end;
				prev_sum = sum;
			}    
		}    
	}    
}    
