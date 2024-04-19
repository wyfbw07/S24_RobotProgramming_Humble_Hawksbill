#!/usr/bin/env python3
import rclpy
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point, Twist
from tf2_ros import TransformListener, Buffer
from tf2_geometry_msgs import do_transform_point
from math import atan2, sqrt
import numpy as np

x = 0.0
y = 0.0
theta = 0.0

def newOdom(msg):
    global x
    global y
    global theta

    x = msg.pose.pose.position.x
    y = msg.pose.pose.position.y

    rot_q = msg.pose.pose.orientation
    (roll, pitch, theta) = euler_from_quaternion([rot_q.x, rot_q.y, rot_q.z, rot_q.w])

def transform_point(tf_buffer, point):
    try:
        trans = tf_buffer.lookup_transform("odom", "base_link", rclpy.time.Time().to_msg())
        transformed_point = do_transform_point(point, trans)
        return transformed_point.point.x, transformed_point.point.y
    except Exception as e:
        print("Error in transforming point:", e)
        return None, None

rclpy.init()
node = rclpy.create_node("speed_controller")

subscriber = node.create_subscription(Odometry, "/odometry/filtered", newOdom, 10)
tf_buffer = Buffer()
tf_listener = TransformListener(tf_buffer, node)

publisher = node.create_publisher(Twist, "/cmd_vel", 10)
speed = Twist()

rate = node.create_rate(4)

path_list = [(4, 4), (3, 1), (0, 1), (-8, -8)]
point_index = 0
goal = Point()

while rclpy.ok():
    if point_index < len(path_list):
        goal.x, goal.y = path_list[point_index]
    else:
        break

    goal_x_transformed, goal_y_transformed = transform_point(tf_buffer, goal)

    if goal_x_transformed is not None and goal_y_transformed is not None:
        inc_x = goal_x_transformed - x
        inc_y = goal_y_transformed - y

        angle_to_goal = atan2(inc_y, inc_x)
        distance_to_goal = sqrt(inc_x * inc_x + inc_y * inc_y)

        if distance_to_goal >= 0.3:
            if abs(angle_to_goal - theta) > 0.2:
                speed.linear.x = 0.0
                speed.angular.z = 0.9
            else:
                speed.linear.x = 0.8
                speed.angular.z = 0.0
            publisher.publish(speed)
        else:
            point_index += 1

    rate.sleep()

rclpy.shutdown()

