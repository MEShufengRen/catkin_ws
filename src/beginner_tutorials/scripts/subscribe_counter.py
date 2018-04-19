#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32

def callback(msg):
	print msg.data
rospy.init_node('topic_subcriber')
sub=rospy.Subscriber('counter',Int32,callback)
rospy.spin()
	

