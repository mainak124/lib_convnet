#!/usr/bin/env python
import numpy as np

def sigmoid(z):
	return (1.0/(1.0+np.exp(-z)))

#x => 1xn vector
#y => 1xm vector
#w => mxn matrix
#b => 1xm vector
def fc(x, w, b):
	#Step 1: t = x*w_transpose + b
	t = np.mat(x)*np.mat(w.transpose())+b
	#Step 2: Apply Sigmoid to the t vector to output y
	y = []
	y = sigmoid(t)
	return y

def sm(x, w, b):
        #Step 1: t = x*w + b
        t = np.mat(x)*np.mat(w.transpose())+b
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
x  = np.array([[1, 2, 4, 3,1]])
w1  = np.array([[0.1,0.3,0.5,0.5,0.8],
	  [0.2,0.01,0.05,0.1,0.2],
	  [0.1,0.2,0.3,0.1,0.1]])
w2 = np.array([[0.1,0.3,0.5],[0.5,0.8,0.2]])
b1 =  np.array([[0.5,0.2,0.3]])
b2 = np.array([[0.5,0.2]])

print x.shape
print w1.transpose().shape
print b1.shape

z = fc(x,w1,b1)
y = sm(z,w2,b2)
show(y.tolist())
