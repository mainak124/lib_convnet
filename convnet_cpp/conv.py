import numpy as np
import tensorflow as tf

x = tf.placeholder(tf.float32, [None, 10, 10, 1])
W = tf.Variable(tf.truncated_normal([5, 5, 1, 2], stddev=0.1))
print W.get_shape()
conv_out = tf.nn.conv2d(x, W, strides=[1, 1, 1, 1], padding='SAME')
print "SHAPE: ", conv_out.get_shape()

sess=tf.Session()
sess.run(tf.initialize_all_variables())

x_in = np.random.rand(1, 10,10,1)
conv_out_v = sess.run(fetches=[conv_out],feed_dict={x:x_in})
W_v = W.eval(session=sess)

print x_in
print W_v
print conv_out_v
# np.savetxt('test_W.txt', W_v, delimiter=',', newline=',')
# np.savetxt('test_x.txt', x_in, delimiter=',', newline=',')
# np.savetxt('test_out.txt', conv_out_v, delimiter=',', newline=',')
