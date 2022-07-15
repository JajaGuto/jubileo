#!/usr/bin/env python

from distutils.log import debug
from mimetypes import init
import random
import rclpy

from rclpy.node import Node
from utils import utils
import time

from unity_robotics_demo_msgs.msg import JointsToTarget

from std_msgs.msg import String
from rclpy.qos import qos_profile_sensor_data

initial = 0.
maximum = 100.
minimum = -100.

class FacialExpressions(Node):

    def __init__(self):
        super().__init__('facial_expression')
        self.utils = utils.JointUtils()
        
        self.command_sub = self.create_subscription(
            String,
            'facial_expression_command',
            self.facial_expression_callback,
            qos_profile_sensor_data)

        self.publisher_ = self.create_publisher(JointsToTarget, 'joints_to_target', 10)
        self.tts_pub = self.create_publisher(String, 'text_to_speech', 10)
        self.debug_pub = self.create_publisher(String, 'debug_topic', 10)
        self.expressions_list = ['joy','neutral','sadness','surprise','disgust','anger','fear']
        self.expression = 'neutral'
        self.run_all_facial_expressions(2)

    def run_all_facial_expressions(self, delay):
        
        tts = String()
        tts.data = 'look'
        self.tts_pub.publish(tts)
        time.sleep(2)

        tts = String()
        tts.data = 'i_can_do_different_facial_expressions'
        self.tts_pub.publish(tts)
        time.sleep(3)

        for e in self.expressions_list:
            self.do_publish(e)
            time.sleep(1)
            
            tts = String()
            tts.data = e
            self.tts_pub.publish(tts)
            time.sleep(delay)
    
        self.do_publish('neutral')
        time.sleep(delay)
    def facial_expression_callback(self, command):
        if command.data == 'all':
            self.run_all_facial_expressions(2)
        else:
            self.do_publish(command.data)

    def do_publish(self, expression):
        if not (expression in self.expression or self.expression in expression):
            self.expression = expression
            msg = JointsToTarget()
            msg.joints = self.utils.get_face_joints();
            
            debug = String()
            debug.data = 'iExpression of: '+expression
            self.debug_pub.publish(debug)

            if expression == 'joy':
                msg.targets = [15.,
                                8.,-5.,
                                0.02,0.02,
                                -10.,10.,
                                initial, -5.]
                self.get_logger().info(f'Joy face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'no_neck_joy':
                msg.targets = [15.,
                                8.,-5.,
                                0.02,0.02,
                                -10.,10.]
                msg.joints = msg.joints[0:7]
                self.get_logger().info(f'Joy face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'neutral':
                msg.targets = [initial,
                                initial,initial,
                                initial,initial,
                                initial,initial,
                                initial,initial]
                self.get_logger().info(f'Neutral face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'sadness':
                msg.targets = [initial,
                                initial,15.,
                                minimum,minimum,
                                -15.,15.,
                                initial, +5.]
                self.get_logger().info(f'Sadness face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'no_neck_sadness':
                msg.targets = [initial,
                                initial,15.,
                                minimum,minimum,
                                -15.,15.]
                msg.joints = msg.joints[0:7]
                self.get_logger().info(f'Sadness face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'surprise':
                msg.targets = [maximum,
                                -15.,-15.,
                                maximum,maximum,
                                initial,initial,
                                initial, initial]
                self.get_logger().info(f'Surprise face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'disgust':
                msg.targets = [maximum,
                                15.,15.,
                                minimum,minimum,
                                10.,-10.,
                                initial, -5.]
                self.get_logger().info(f'Disgust face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'anger':
                msg.targets = [initial,
                                initial,20.,
                                minimum,minimum,
                                15.,-15.,
                                initial, 5.]
                self.get_logger().info(f'Anger face, publishing: {msg}')
                self.publisher_.publish(msg)
            elif expression == 'fear':
                msg.targets = [maximum,
                                -15.,-15.,
                                minimum,minimum,
                                -15.,15.,
                                initial, -5.]
                self.get_logger().info(f'Fear face, publishing: {msg}')
                self.publisher_.publish(msg)
        

def main(args=None):
    rclpy.init(args=args)

    facial_expression = FacialExpressions()


    rclpy.spin(facial_expression)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    facial_expression.destroy_node()
    rclpy.shutdown()

    # while rclpy.ok():
    #     rclpy.spin_once(facial_expression)

    #color_pub.destroy_node()
    #rclpy.shutdown()


if __name__ == '__main__':
    main()
