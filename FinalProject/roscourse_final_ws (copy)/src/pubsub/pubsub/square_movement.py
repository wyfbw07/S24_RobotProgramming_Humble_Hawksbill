#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class SquareMovement(Node):
    def __init__(self):
        super().__init__('square_movement')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer_ = self.create_timer(1.0, self.move_robot)
        self.current_step = 0
        self.velocities = [
            (1.0, 0.0, 0.0, 0.0),  # Forward
            (0.0, 0.0, 0.0, 1.0),  # Rotate
            (1.0, 0.0, 0.0, 0.0),  # Forward
            (0.0, 0.0, 0.0, 1.0),  # Rotate
            (1.0, 0.0, 0.0, 0.0)   # Forward
        ]

    def move_robot(self):
        twist = Twist()
        twist.linear.x = self.velocities[self.current_step][0]
        twist.linear.y = self.velocities[self.current_step][1]
        twist.linear.z = self.velocities[self.current_step][2]
        twist.angular.x = self.velocities[self.current_step][3]
        twist.angular.y = self.velocities[self.current_step][4]
        twist.angular.z = self.velocities[self.current_step][5]
        self.publisher_.publish(twist)
        
        self.current_step = (self.current_step + 1) % len(self.velocities)

def main(args=None):
    rclpy.init(args=args)
    node = SquareMovement()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
