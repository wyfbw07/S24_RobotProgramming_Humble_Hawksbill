import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from custom_interface.srv import SetVelocity
import math
import time

from Rosmaster_Lib import Rosmaster
from Speech_Lib import Speech
from std_msgs.msg import Float32

spe = Speech()

class SquareMovement(Node):
    def __init__(self):
        super().__init__('square_movement')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        timer_period = 0.935  # seconds
        self.timer = self.create_timer(timer_period, self.move_robot)
        self.linear_speed = 0.2  # m/s
        self.angular_speed = 0.2  # rad/s
        self.side_length = 1.0  # meters
        self.current_angle = 0.0  # radians
        self.current_side = 0

        self.car = Rosmaster()

	    #voice control init
        self.edition = Float32()
        self.edition.data = 1.0
        self.car.create_receive_threading()
        
        self.velocity_srv = self.create_service(SetVelocity, 'setVelocity', self.set_velocity_callback)

        self.spe = Speech()
        

        
    def set_velocity_callback(self,request,response):
        self.linear_speed = request.linear_x
        self.get_logger().info('Linear_speed set: %s' % (self.linear_speed))
        response.ret = 1
        return response
    
    def move_robot(self):
        twist = Twist()

        self.get_logger().info("inside of move_robot")
        speech_r = self.spe.speech_read()
		#speech
        self.get_logger().info(speech_r)
        if speech_r == 4:
            self.spe.void_write(speech_r)
            # Move forward
            if self.current_side % 4 == 0:
                twist.linear.x = self.linear_speed
                twist.angular.z = 0.0
             # Rotate 90 degrees
            elif self.current_side % 4 == 1:
                twist.linear.x = 0.0
                twist.angular.z = self.angular_speed
            # Move forward
            elif self.current_side % 4 == 2:
                twist.linear.x = self.linear_speed
                twist.angular.z = 0.0
            # Rotate 90 degrees
            elif self.current_side % 4 == 3:
                twist.linear.x = 0.0
                twist.angular.z = self.angular_speed

            # Update current angle and side
            if self.current_side % 4 == 1 or self.current_side % 4 == 3:
                if abs(self.current_angle) >= math.pi / 2:
                    self.current_side += 1
                    self.current_angle = 0.0
                else:
                    self.current_angle += self.angular_speed
            else:
                if abs(self.current_angle) >= 1.0:  # Ensure it rotates 90 degrees
                    self.current_side += 1
                    self.current_angle = 0.0
                else:
                    self.current_angle += self.angular_speed
            self.publisher_.publish(twist)

        if speech_r == 2 or speech_r == 0 :
            self.spe.void_write(speech_r)
            twist.linear.x = 0.0
            twist.angular.z = 0.0
            twist.angular.z = 0.0
            self.publisher_.publish(twist)

        

def main(args=None):
    rclpy.init(args=args)

    square_movement = SquareMovement()

    rclpy.spin(square_movement)

    square_movement.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
