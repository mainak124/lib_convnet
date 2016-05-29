#!/usr/bin/env python
import numpy as np
import string

def form_file_from_2Darray(var,array):
	f = open("temp.h",'a+')
	num_elements = array.shape[0]*array.shape[1]
	t = string.maketrans('[]','{}')
	#f.write('Matrix<'+str(array.shape[0])+','+str(array.shape[1])+'> '+var+'={'+str(','.join(map(str,array.reshape(num_elements))))+'};')
	f.write('DTYPE_T '+var+'['+str(array.shape[0])+']['+str(array.shape[1])+']'+'={'+str(','.join(map(str,array.reshape(num_elements))))+'};')
	f.write('\n')
	f.close()

#form_file_from_2Darray('X', np.float32(np.arange(15).reshape(5,3)))
