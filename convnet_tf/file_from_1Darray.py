#!/usr/bin/env python
import numpy as np
import string

def form_file_from_1Darray(var,array):
	f = open("temp.h",'a+')
	num_elements = array.shape[0]
	t = string.maketrans('[]','{}')
	# f.write('Matrix<'+str(array.shape[0])+'> '+var+'={'+str(','.join(map(str,array.reshape(num_elements))))+'};')
	f.write('DTYPE_T '+var+'['+str(array.shape[0])+']'+'={'+str(','.join(map(str,array.reshape(num_elements))))+'};')
	f.write('\n')
	f.close()

#form_file_from_1Darray('Y', np.float32(np.arange(10).reshape(10)))