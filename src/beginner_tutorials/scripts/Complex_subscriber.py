#!/usr/bin/env python
import rospy
from beginner_tutorials.msg import Complex

def callback(msg):
	print 'real:',msg.real
	print 'imaginary', msg.imaginary

rospy.init_node('Complex_subcriber')
sub=rospy.Subscriber('complex',Complex,callback)
rospy.spin()
	
