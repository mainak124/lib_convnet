
typedef float DTYPE_T;


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
void conv2d(DTYPE_T x[n_row_in][n_col_in][n_in], DTYPE_T W[n_row_filter][n_col_filter][n_in][n_filter], DTYPE_T out_feature[n_out_r][n_out_c][n_filter], int stride, int zero_pad) {

    DTYPE_T in_val, out;
    int slide_in_r_idx, slide_in_c_idx, out_r_idx, out_c_idx;

    // Treversing through spatial dimensions of the input
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
						    //if ((slide_in_r_idx < 0) || (slide_in_r_idx >= n_row_in) || (slide_in_c_idx < 0) || (slide_in_c_idx >= n_col_in))
						    //        in_val = 0;
						    //else
							    in_val = x[slide_in_r_idx][slide_in_c_idx][in_ch_idx];    
						    out = out + (in_val * W[r_idx][c_idx][in_ch_idx][filter_idx]);
							printf("%d,%d\t",slide_in_r_idx,slide_in_c_idx);
					    }
				    }
			    }
			    out_r_idx = in_r_idx/stride;
			    out_c_idx = in_c_idx/stride;
			    out_feature[out_r_idx][out_c_idx][filter_idx] = out;
			printf("%d,%d\n",out_r_idx,out_c_idx);
				
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
int n_pool_c,
int n_pool_r
>    
void maxPoolNxN(DTYPE_T x[n_row_in][n_col_in][n_in], DTYPE_T out_feature[n_out_r][n_out_c][n_out]) {

    DTYPE_T out;

    // Treversing through spatial dimensions of the input
    for (int in_r_idx=0; in_r_idx<n_row_in; in_r_idx+=n_pool_r) {
	    for (int in_c_idx=0; in_c_idx<n_col_in; in_c_idx+=n_pool_c) {
		    // Traversing through all input channels
		    for (int in_ch_idx=0; in_ch_idx<n_in; in_ch_idx++) {
			    // Traversing through spatial dimensions of the filters
				out = 0;
			    for(int r_idx=0; r_idx<n_pool_r; r_idx++) {
				    for(int c_idx=0; c_idx<n_pool_c; c_idx++) {
						if(x[in_r_idx+r_idx][in_c_idx+c_idx][in_ch_idx] > out)
							out = x[in_r_idx+r_idx][in_c_idx+c_idx][in_ch_idx];
				    }
			    }
			    int out_r_idx = in_r_idx/n_pool_r;
			    int out_c_idx = in_c_idx/n_pool_c;
			int out_ch_idx = in_ch_idx;
			    out_feature[out_r_idx][out_c_idx][out_ch_idx] = out;
		    }    
	    }    
    }    
}
