import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math
import time

class SquareMovement(Node):
    def __init__(self):
        super().__init__('square_movement')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.move_robot)
        self.linear_speed = 0.2  # m/s
        self.angular_speed = 0.2  # rad/s
        self.side_length = 1.0  # meters
        self.current_angle = 0.0  # radians
        self.current_side = 0
        self.rotating = False
        self.start_rotation_time = 0.0

    def move_robot(self):
        twist = Twist()

        # Move forward
        if self.current_side % 4 == 0:
            twist.linear.x = self.linear_speed
            twist.angular.z = 0.0
            self.rotating = False
        # Rotate 90 degrees
        elif self.current_side % 4 == 1:
            if not self.rotating:
                self.rotating = True
                self.start_rotation_time = self.get_clock().now().nanoseconds / 1e9  # Get current time
            twist.linear.x = 0.0
            twist.angular.z = self.angular_speed
            rotation_duration = self.get_clock().now().nanoseconds / 1e9 - self.start_rotation_time
            if rotation_duration >= math.pi / (2 * self.angular_speed):  # Ensure it rotates 90 degrees
                self.current_side += 1
        # Move forward
        elif self.current_side % 4 == 2:
            twist.linear.x = self.linear_speed
            twist.angular.z = 0.0
            self.rotating = False
        # Rotate 90 degrees
        elif self.current_side % 4 == 3:
            if not self.rotating:
                self.rotating = True
                self.start_rotation_time = self.get_clock().now().nanoseconds / 1e9  # Get current time
            twist.linear.x = 0.0
            twist.angular.z = self.angular_speed
            rotation_duration = self.get_clock().now().nanoseconds / 1e9 - self.start_rotation_time
            if rotation_duration >= math.pi / (2 * self.angular_speed):  # Ensure it rotates 90 degrees
                self.current_side += 1

        self.publisher_.publish(twist)

def main(args=None):
    rclpy.init(args=args)

    square_movement = SquareMovement()

    rclpy.spin(square_movement)

    square_movement.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
