import numpy as np
import tensorflow as tf

def weight_variable(shape):
    initial = tf.truncated_normal(shape, stddev=0.1)
    return tf.Variable(initial)

x = tf.placeholder(tf.float32, [None,10,10,1])
#W = weight_variable([3, 3, 1, 2])
W = tf.placeholder(tf.float32, [3,3,1,2])
y = tf.nn.conv2d(x, W, strides=[1, 1, 1, 1], padding='VALID')

sess = tf.Session()
sess.run(tf.initialize_all_variables())

x_v = np.arange(100).reshape(1,10,10,1)
#feed_dict = {x:x_v}
W_v = np.arange(18).reshape(3,3,1,2)
feed_dict = {x:x_v, W:W_v}

y_v = sess.run(feed_dict = feed_dict, fetches=[y])
print x_v
print W_v
print y_v[0]
