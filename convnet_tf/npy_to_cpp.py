#!/usr/bin/env python
import numpy as np
import file_from_1Darray
import file_from_2Darray
import file_from_3Darray
import file_from_4Darray

f1 = np.load('weights/W_conv1.npy')
f2 = np.load('weights/W_conv2.npy')
f3 = np.load('weights/W_conv3.npy')
W4 = np.load('weights/W_fc1.npy')
W5 = np.load('weights/W_fc2.npy')

b1 = np.load('weights/b_conv1.npy')
b2 = np.load('weights/b_conv2.npy')
b3 = np.load('weights/b_conv3.npy')
B4 = np.load('weights/b_fc1.npy')
B5 = np.load('weights/b_fc2.npy')

file_from_4Darray.form_file_from_4Darray('f1',f1)
file_from_4Darray.form_file_from_4Darray('f2',f2)
file_from_4Darray.form_file_from_4Darray('f3',f3)
file_from_2Darray.form_file_from_2Darray('W4',W4)
file_from_2Darray.form_file_from_2Darray('W5',W5)

file_from_1Darray.form_file_from_1Darray('b1',b1)
file_from_1Darray.form_file_from_1Darray('b2',b2)
file_from_1Darray.form_file_from_1Darray('b3',b3)
file_from_1Darray.form_file_from_1Darray('B4',B4)
file_from_1Darray.form_file_from_1Darray('B5',B5)

x_in_10k = np.load('mnist_npy/mnist_data.npy')
y_labels_onehot = np.load('mnist_npy/mnist_labels.npy')
x_in = np.array([])
y_labels = np.array([])
x_in = x_in_10k[:10]

for i in range(10):
	for j in range(10):
		if (y_labels_onehot[i][j] == 1):
			y_labels = np.append(y_labels, j)

print np.shape(x_in_10k)
print np.shape(x_in)
# for i in range(10):
# 	print y_labels[i]

file_from_4Darray.form_file_from_4Darray('x_in',x_in)
file_from_1Darray.form_file_from_1Darray('y_labels',y_labels)