#include <iostream>
using namespace std;

template<int sizeH,int sizeW>
void printMatrix(const DTYPE A[sizeH][sizeW]){
    for(int i=0;i<sizeH;i++){
        for(int j=0;j<sizeW;j++)
            cout << A[i][j]<<" ";
        cout << std::endl;
    }
}

template<int sizeAH,int sizeAW,int sizeBH,int sizeBW>
void mult(const DTYPE A[sizeAH][sizeAW],const DTYPE B[sizeBH][sizeBW], DTYPE C[sizeAH][sizeBW]){

    if(sizeBH == sizeAW) { 
        for(int i=0;i<sizeAH;i++){
            for(int j=0;j<sizeBW;j++){
		C[i][j] = 0;
                for(int k=0;k<sizeAW;k++){
                    C[i][j]+=A[i][k]*B[k][j];
		}
	    }
	}
    } else {
        //Matrices not aligned
    }

}

template<int sizeAH,int sizeAW>
void transpose(const DTYPE A[sizeAH][sizeAW], DTYPE B[sizeAW][sizeAH]){

    for(int i=0;i<sizeAH;i++)
        for(int j=0;j<sizeAW;j++)
                B[j][i]=A[i][j];
}

template<int sizeAH,int sizeAW>
void sigmoid(const DTYPE A[sizeAH][sizeAW], DTYPE B[sizeAH][sizeAW]){

    for(int i=0;i<sizeAH;i++)
        for(int j=0;j<sizeAW;j++)
                B[i][j]=1.0/(1.0+exp(-1.0*A[i][j]));
}

template<int sizeAH,int sizeAW>
void add(const DTYPE A[sizeAH][sizeAW], const DTYPE B[sizeAH][sizeAW], DTYPE C[sizeAH][sizeAW]){

    for(int i=0;i<sizeAH;i++)
	for(int j=0;j<sizeAW;j++)
		C[i][j]=A[i][j]+B[i][j];
}
