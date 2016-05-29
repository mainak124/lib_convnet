import numpy as np
import time
from tensorflow.examples.tutorials.mnist import input_data
mnist = input_data.read_data_sets("MNIST_data/", one_hot=True)
import tensorflow as tf

def weight_variable(shape):
    initial = tf.truncated_normal(shape, stddev=0.1)
    return tf.Variable(initial)

def bias_variable(shape):
    initial = tf.constant(0.1, shape=shape)
    return tf.Variable(initial)
  
def conv2d(x, W, padding='SAME'):
    return tf.nn.conv2d(x, W, strides=[1, 1, 1, 1], padding=padding)

def max_pool_2x2(x):
    return tf.nn.max_pool(x, ksize=[1, 2, 2, 1],strides=[1, 2, 2, 1], padding='SAME')

x = tf.placeholder(tf.float32, [None, 784])
y_ = tf.placeholder(tf.float32, [None, 10])
keep_prob = tf.placeholder(tf.float32)

with tf.device('/gpu:0'):
    x_image = tf.reshape(x, [-1,28,28,1])

    W_conv1 = weight_variable([5, 5, 1, 6])
    b_conv1 = bias_variable([6])
    h_conv1 = tf.nn.relu(conv2d(x_image, W_conv1) + b_conv1)
    print "Conv1 Out Shape: ", h_conv1.get_shape()
    h_pool1 = max_pool_2x2(h_conv1)
    print "Pool1 Out Shape: ", h_pool1.get_shape()

    W_conv2 = weight_variable([5, 5, 6, 16])
    b_conv2 = bias_variable([16])
    h_conv2 = tf.nn.relu(conv2d(h_pool1, W_conv2, padding='VALID') + b_conv2)
    print "Conv2 Out Shape: ", h_conv2.get_shape()
    h_pool2 = max_pool_2x2(h_conv2)
    print "Pool2 Out Shape: ", h_pool2.get_shape()

    W_conv3 = weight_variable([5, 5, 16, 120])
    b_conv3 = bias_variable([120])
    h_conv3 = tf.nn.relu(conv2d(h_pool2, W_conv3, padding='VALID') + b_conv3)
    print "Conv3 Out Shape: ", h_conv3.get_shape()
    
    W_fc1 = weight_variable([1 * 1 * 120, 84])
    b_fc1 = bias_variable([84])
    h_conv3_flat = tf.reshape(h_conv3, [-1, 1*1*120])
    h_fc1 = tf.nn.relu(tf.matmul(h_conv3_flat, W_fc1) + b_fc1)
    h_fc1_drop = tf.nn.dropout(h_fc1, keep_prob)

    W_fc2 = weight_variable([84, 10])
    b_fc2 = bias_variable([10])

    y_conv=tf.nn.softmax(tf.matmul(h_fc1_drop, W_fc2) + b_fc2)

cross_entropy = tf.reduce_mean(-tf.reduce_sum(y_ * tf.log(y_conv), reduction_indices=[1]))
train_step = tf.train.AdamOptimizer(1e-4).minimize(cross_entropy)
correct_prediction = tf.equal(tf.argmax(y_conv,1), tf.argmax(y_,1))
accuracy = tf.reduce_mean(tf.cast(correct_prediction, tf.float32))

sess = tf.Session()
sess.run(tf.initialize_all_variables())
epoch_num=0
inference_time = []
for i in range(10000):
    batch = mnist.train.next_batch(64)
    if i%500 == 0:  
        train_loss = cross_entropy.eval(session=sess,feed_dict={x:batch[0], y_: batch[1], keep_prob: 1.0})
        print("step %d, training loss %g"%(i, train_loss))
        start_time = time.clock()
        test_loss = cross_entropy.eval(session=sess,feed_dict={x:mnist.validation.images, y_: mnist.validation.labels, keep_prob: 1.0})
        end_time = time.clock()
        inference_time.append(end_time-start_time)
        print("Epoch %d, testing loss %g"%(epoch_num, test_loss))
        print("test accuracy %g"%accuracy.eval(session=sess,feed_dict={x: mnist.test.images, y_: mnist.test.labels, keep_prob: 1.0}))
        epoch_num+=1 
    train_step.run(session=sess,feed_dict={x: batch[0], y_: batch[1], keep_prob: 0.5})
W_conv1_v, b_conv1_v, W_conv2_v, b_conv2_v, W_conv3_v, b_conv3_v, W_fc1_v, b_fc1_v, W_fc2_v, b_fc2_v = sess.run(fetches=[W_conv1, b_conv1, W_conv2, b_conv2, W_conv3, b_conv3, W_fc1, b_fc1, W_fc2, b_fc2])
np.save("W_conv1.npy", W_conv1_v)
np.save("b_conv1.npy", b_conv1_v)
np.save("W_conv2.npy", W_conv2_v)
np.save("b_conv2.npy", b_conv2_v)
np.save("W_conv3.npy", W_conv3_v)
np.save("b_conv3.npy", b_conv3_v)
np.save("W_fc1.npy", W_fc1_v)
np.save("b_fc1.npy", b_fc1_v)
np.save("W_fc2.npy", W_fc2_v)
np.save("b_fc2.npy", b_fc2_v)
print("test accuracy %g"%accuracy.eval(session=sess,feed_dict={x: mnist.test.images, y_: mnist.test.labels, keep_prob: 1.0}))
print "Average Inference Time: ", np.mean(inference_time)        
