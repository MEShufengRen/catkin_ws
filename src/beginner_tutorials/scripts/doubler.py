#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32

def callback(msg):
	doubled=Int32()
	doubled.data=msg.data*5
	pub.publish(doubled)
	print doubled.data

rospy.init_node('doubler')

sub=rospy.Subscriber('number',Int32,callback)
pub=rospy.Publisher('doubled',Int32)
rospy.spin()
	
