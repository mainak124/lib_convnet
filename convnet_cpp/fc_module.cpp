template<int xH,int xW, int wH, int wW, int bH,int bW, int yH, int yW>
void fc(const DTYPE X[xH][xW], const DTYPE W[wH][wW], const DTYPE B[bH][bW], DTYPE Y[yH][yW]) {
    //Step 1: t = x*w_transpose + b
    DTYPE Wt[wW][wH]; 
    DTYPE T[yH][yW];
    DTYPE S[yH][yW]; 
    //transpose<wH, wW>(W,Wt);
    mult< xH, xW, wH, wW>(X,W,T);
    add<yH, yW>(T,B,S);
    //Step 2: Apply Sigmoid to the t vector to output y
    sigmoid<yH, yW>(S,Y);
}
