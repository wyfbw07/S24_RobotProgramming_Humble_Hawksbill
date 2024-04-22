import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import math


class MinimalSubscriber(Node):

    def __init__(self):
        super().__init__('minimal_subscriber')
        self.subscription = self.create_subscription(
            Twist,
            '/cmd_vel',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Linear Received: "L_x: %f, L_y: %f, L_z: %f"' % (msg.linear.x, msg.linear.y, msg.linear.z))
        self.get_logger().info('Angular Received: "A_x: %f, A_y: %f, A_z: %f"' % (msg.angular.x, msg.angular.y, msg.angular.z))


def main(args=None):
    rclpy.init(args=args)

    minimal_subscriber = MinimalSubscriber()

    rclpy.spin(minimal_subscriber)

    minimal_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

