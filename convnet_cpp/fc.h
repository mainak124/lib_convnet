template<int sizeH,int sizeW>
void printMatrix(const Matrix<sizeH,sizeW> & A){
    for(int i=0;i<sizeH;i++){
        for(int j=0;j<sizeW;j++)
            cout << A.m[i][j]<<" ";
        cout << endl;
    }
}

template<int sizeAH,int sizeAW,int sizeBH,int sizeBW>
void mult(const Matrix<sizeAH,sizeAW>& A,const Matrix<sizeBH,sizeBW>& B, Matrix<sizeAH,sizeBW>& C){

    if(sizeBH == sizeAW) { 
        for(int i=0;i<sizeAH;i++){
            for(int j=0;j<sizeBW;j++){
		C.m[i][j] = 0;
                for(int k=0;k<sizeAW;k++){
                    C.m[i][j]+=A.m[i][k]*B.m[k][j];
		}
	    }
	}
    } else {
        //Matrices not aligned
    }

}

template<int sizeAH,int sizeAW>
void transpose(const Matrix<sizeAH,sizeAW>& A, Matrix<sizeAW,sizeAH>& B){

    for(int i=0;i<sizeAH;i++)
        for(int j=0;j<sizeAW;j++)
                B.m[j][i]=A.m[i][j];
}

template<int sizeAH,int sizeAW>
void sigmoid(const Matrix<sizeAH,sizeAW>& A, Matrix<sizeAH,sizeAW>& B){

    for(int i=0;i<sizeAH;i++)
        for(int j=0;j<sizeAW;j++)
                B.m[i][j]=1.0/(1.0+exp(-1.0*A.m[i][j]));
}

template<int sizeAH,int sizeAW>
void add(const Matrix<sizeAH,sizeAW>& A, const Matrix<sizeAH,sizeAW>& B, Matrix<sizeAH,sizeAW>& C){

    for(int i=0;i<sizeAH;i++)
	for(int j=0;j<sizeAW;j++)
		C.m[i][j]=A.m[i][j]+B.m[i][j];
}

template<int xH,int xW, int wH, int wW, int bH,int bW, int yH, int yW>
void fc(const Matrix<xH,xW>& X, const Matrix<wH,wW>& W, const Matrix<bH,bW>& B, Matrix<yH,yW>& Y) {
    //Step 1: t = x*w_transpose + b
    Matrix<wW,wH> Wt; 
    Matrix<yH,yW> T;
    Matrix<yH,yW> S; 
    transpose(W,Wt);
    mult(X,Wt,T);
    add(T,B,S);
    //Step 2: Apply Sigmoid to the t vector to output y
    sigmoid(S,Y);
}
