#!/usr/bin/env python
import rospy
from std_msgs.msg import Float32
from geometry_msgs.msg import Pose2D  # 使用 Pose2D 传递经纬度和艏向数据

def publish_boat_data():
    # 初始化 ROS 节点
    rospy.init_node('boat_publisher', anonymous=True)

    # 创建发布者，分别用于船只位置和速度
    position_pub = rospy.Publisher('/boat_position', Pose2D, queue_size=10)
    speed_pub = rospy.Publisher('/boat_speed', Float32, queue_size=10)

    # 设置发布频率为 5 Hz
    rate = rospy.Rate(1)

    # 初始化经度、纬度、艏向和速度的初始值
    longitude = 119.37252879789787  # 经度
    latitude = 32.119927693242424    # 纬度
    course = 0              # 艏向（以度为单位）
    speed = 3.0             # 初始速度（单位：m/s）

    while not rospy.is_shutdown():
        # 创建位置消息并赋值
        position_msg = Pose2D()
        position_msg.x = longitude  # 经度
        position_msg.y = latitude   # 纬度
        position_msg.theta = course # 艏向角（以度为单位）

        # 创建速度消息并赋值
        speed_msg = Float32()
        speed_msg.data = speed

        # 输出日志信息
        rospy.loginfo(f"Publishing position: longitude={longitude:.6f}, latitude={latitude:.6f}, course={course:.2f}°")
        rospy.loginfo(f"Publishing speed: {speed:.2f} m/s")

        # 发布消息
        position_pub.publish(position_msg)
        speed_pub.publish(speed_msg)

        # 模拟船只位置和速度的变化
        longitude += 0.0001     # 经度增加
        latitude += 0.0001      # 纬度增加
        course = round((course + 10) % 360, 2)  # 确保角度保持高精度
        speed += 0.1          # 速度增加

        # 按照设定的频率发布数据
        rate.sleep()

if __name__ == '__main__':
    try:
        publish_boat_data()
    except rospy.ROSInterruptException:
        pass
