import rclpy
from rclpy.node import Node

from your_package_name.msg import SetCarMotion  # Import your custom message


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        self.publisher_ = self.create_publisher(SetCarMotion, 'topic', 10)  # Change message type here
        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = SetCarMotion()  # Use custom message type
        msg.v_x = 0.1  # Example velocity values, replace with your desired values
        msg.v_y = 0.2
        msg.v_z = 0.3
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing: "v_x: %f, v_y: %f, v_z: %f"' % (msg.v_x, msg.v_y, msg.v_z))
        self.i += 1


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

