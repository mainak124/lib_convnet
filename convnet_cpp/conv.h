
typedef float DTYPE_T;

static const int IN_H =32;
static const int IN_W =32;
static const int IN_C =1;
static const int F1_H =5;
static const int F1_W =5;
static const int F1_C =1;
static const int F1_N =6;
static const int F1_S =1;
static const int O1_H =(IN_H-F1_H+1)/F1_S;
static const int O1_W =(IN_W-F1_W+1)/F1_S;
static const int O1_C = F1_N;
static const int P1_F = 2;
static const int P1_H =O1_H/P1_F;
static const int P1_W =O1_W/P1_F;
static const int P1_C =O1_C;
static const int F2_H =2;
static const int F2_W =2;
static const int F2_C =P1_C;
static const int F2_N =4;
static const int F2_S =1;
static const int O2_H =(P1_H-F2_H+1)/F2_S;
static const int O2_W =(P1_W-F2_W+1)/F2_S;
static const int O2_C = F2_N;
static const int P2_F = 2;
static const int P2_H =O2_H/P2_F;
static const int P2_W =O2_W/P2_F;
static const int P2_C =O2_C;

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
void conv2d(DTYPE_T x[n_row_in][n_col_in][n_in], DTYPE_T W[n_row_filter][n_col_filter][n_in][n_filter], DTYPE_T b[n_out_r][n_out_c][n_filter], DTYPE_T out_feature[n_out_r][n_out_c][n_filter], int stride, int zero_pad) {

    DTYPE_T in_val, out;
    int slide_in_r_idx, slide_in_c_idx, out_r_idx, out_c_idx;

    // Treversing through spatial dimensions of the input
    for (int in_r_idx=0; in_r_idx<n_row_in-n_row_filter+2*zero_pad+1; in_r_idx=in_r_idx+stride) {
        for (int in_c_idx=0; in_c_idx<n_col_in-n_col_filter+2*zero_pad+1; in_c_idx=in_c_idx+stride) {
            // Traversing through all output filters
            conv2d_label2:for (int filter_idx=0; filter_idx<n_filter; filter_idx++) {
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

//    for (int r_idx=0; r_idx<n_out_r; r_idx++) {
//        for (int c_idx=0; c_idx<n_out_c; c_idx++) {
//            for (int f_idx=0; f_idx<n_filter; f_idx++) {
//                out_feature[out_r_idx][out_c_idx][f_idx] += b[out_r_idx][out_c_idx][f_idx];
//            }
//        }
//    }
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

    // Traversing through spatial dimensions of the input
    maxPoolNxN_label3:for (int in_r_idx=0; in_r_idx<n_row_in; in_r_idx+=n_pool_r) {
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

void inference(DTYPE_T inputImage[IN_H][IN_W][IN_C], DTYPE_T Filter1[F1_H][F1_W][F1_C][F1_N], DTYPE_T bias1[O1_H][O1_W][O1_C], DTYPE_T poolOutput1[P1_H][P1_W][P1_C]);
