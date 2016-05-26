#!/usr/bin/env python
import numpy as np
import file_from_1Darray
import file_from_2Darray
import file_from_3Darray
import file_from_4Darray

def sigmoid(z):
	return (1.0/(1.0+np.exp(-z)))

#x => 1xn vector
#y => 1xm vector
#w => mxn matrix
#b => 1xm vector
def fc(x, w, b):
	#Step 1: t = x*w_transpose + b
	t = np.mat(x)*np.mat(w)+b
	#Step 2: Apply Sigmoid to the t vector to output y
	y = []
	y = sigmoid(t)
	return y

def sm(x, w, b):
        #Step 1: t = x*w + b
        t = np.mat(x)*np.mat(w)+b
        #Step 2: Find exp of t
        y = np.exp(t)
        #Step 3: Normalize y
        y = y/np.sum(y)
        return y


def show(p):
	rows = ['[' + ','.join(map(lambda x: '{0:.5f}'.format(x),r)) + ']' for r in p]
	print '[' + ',\n '.join(rows) + ']'


########
# MAIN #
########
# x => row vector (1x5)
x  = np.array([[1, 2, 4, 3,1]])
w1  = np.array([[0.1,0.3,0.5,0.5,0.8],
	  [0.2,0.01,0.05,0.1,0.2],
	  [0.1,0.2,0.3,0.1,0.1]])
w1 = w1.transpose()
w2 = np.array([[0.1,0.3,0.5],[0.5,0.8,0.2]])
w2 = w2.transpose()
b1 =  np.array([[0.5,0.2,0.3]])
b2 = np.array([[0.5,0.2]])

np.save('FC_I.npy',x)
np.save('FC_W.npy',w1)
np.save('FC_B.npy',b1)
np.save('SM_W.npy',w2)
np.save('SM_B.npy',b2)


FC_I = np.load('FC_I.npy')
FC_W = np.load('FC_W.npy')
FC_B = np.load('FC_B.npy')
SM_W = np.load('SM_W.npy')
SM_B = np.load('SM_B.npy')

file_from_2Darray.form_file_from_2Darray('FC_I',FC_I)
file_from_2Darray.form_file_from_2Darray('FC_W',FC_W)
file_from_2Darray.form_file_from_2Darray('FC_B',FC_B)
file_from_2Darray.form_file_from_2Darray('SM_W',SM_W)
file_from_2Darray.form_file_from_2Darray('SM_B',SM_B)

z = fc(x,w1,b1)
y = sm(z,w2,b2)
show(y.tolist())
