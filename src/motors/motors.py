#!/usr/bin/env python

import rospy
from mavros_msgs.msg import OverrideRCIn

rospy.init_node('motors')
rate = rospy.Rate(10)

motor_pub = rospy.Publisher('/mavros/rc/override', OverrideRCIn, queue_size=10)

def send_esc_command(throttle):
	rc_msg = OverrideRCIn()
	rc_msg.channels = [0, 0, throttle, 0, 0, 0, 0, 0]
	esc_pub.publish(rc_msg)

def main_loop():
	while not rospy.is_shutdown():
		send_esc_command(throttle=1500)
		rate.sleep()
if __name__ = '__main__":
	try:
		main_loop()
	except rospy.ROSInterruptException:
		pass
