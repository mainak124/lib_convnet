#ifndef _MAT_TEMPLATE_H_
#define _MAT_TEMPLATE_H_

#include <iostream>
#include <cassert>
using namespace std;

template<int sizeH,int sizeW>
void printMatrix(const DTYPE_T A[sizeH][sizeW]){
	for(int i=0;i<sizeH;i++){
		for(int j=0;j<sizeW;j++)
			cout << A[i][j]<<" ";
		cout << std::endl;
	}
}

template<int sizeAH,int sizeAW,int sizeBH,int sizeBW>
void mult(const DTYPE_T A[sizeAH][sizeAW],const DTYPE_T B[sizeBH][sizeBW], DTYPE_T C[sizeAH][sizeBW]){

	assert(sizeBH == sizeAW);
	for(int i=0;i<sizeAH;i++){
		mult_label4:for(int j=0;j<sizeBW;j++){
			DTYPE_T out = 0;
			for(int k=0;k<sizeAW;k++){
				out+=A[i][k]*B[k][j];
			}
			C[i][j] = out;
		}
	}
}

template<int sizeAH,int sizeAW>
void transpose(const DTYPE_T A[sizeAH][sizeAW], DTYPE_T B[sizeAW][sizeAH]){

	for(int i=0;i<sizeAH;i++)
		for(int j=0;j<sizeAW;j++)
			B[j][i]=A[i][j];
}

template<int sizeAH,int sizeAW>
void sigmoid(const DTYPE_T A[sizeAH][sizeAW], DTYPE_T B[sizeAH][sizeAW]){

	for(int i=0;i<sizeAH;i++)
		sigmoid_label8:for(int j=0;j<sizeAW;j++)
			B[i][j]=(DTYPE_T)1.0/((DTYPE_T)1.0+expf(-1.0*A[i][j]));
}

template<int sizeAH,int sizeAW>
void add(const DTYPE_T A[sizeAH][sizeAW], const DTYPE_T B[sizeAH][sizeAW], DTYPE_T C[sizeAH][sizeAW]){

	for(int i=0;i<sizeAH;i++)
		add_label6:for(int j=0;j<sizeAW;j++)
			C[i][j]=A[i][j]+B[i][j];
}
#endif
