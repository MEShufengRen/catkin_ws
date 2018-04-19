#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32
from random import randint

rospy.init_node('ex_doubler')
pub=rospy.Publisher('number',Int32)
rate=rospy.Rate(2)
while  not rospy.is_shutdown():
	msg=Int32()
	msg=randint(1,254)

	pub.publish(msg)
	rate.sleep()
