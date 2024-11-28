#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Pose2D

# 定义回调函数
def marker_callback(msg):
    rospy.loginfo("Received marker data: Longitude = %f, Latitude = %f", msg.x, msg.y)

def listener():
    # 初始化 ROS 节点
    rospy.init_node('python_marker_listener', anonymous=True)
    
    # 订阅话题 "marker_topic"，并设置回调函数
    rospy.Subscriber("marker_topic", Pose2D, marker_callback)
    
    # 保持节点运行，等待消息
    rospy.spin()

if __name__ == '__main__':
    try:
        listener()
    except rospy.ROSInterruptException:
        pass
