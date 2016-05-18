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
void conv2d(float x[n_row_in][n_col_in][n_in], float W[n_row_filter][n_col_filter][n_in][n_filter], float out_feature[n_out_r][n_out_c][n_filter], int stride, int zero_pad); 
