# from webbrowser import get
# from xml.etree.ElementTree import TreeBuilder
from std_msgs.msg import String
# from numpy import savez_compressed
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

from unity_robotics_demo_msgs.msg import JointsToTarget

from utils import utils

import cv2
import imutils
# import numpy as np

from rclpy.qos import qos_profile_sensor_data

class ImageSubscriber(Node):

    def __init__(self):
        super().__init__('image_subscriber')
        self.subscription = self.create_subscription(
            Image,
            'camera_image',
            self.listener_callback,
            qos_profile_sensor_data)

        self.command_sub = self.create_subscription(
            String,
            'follow_command',
            self.follow_callback,
            qos_profile_sensor_data)
    
        self.language = 'en-US'
            
        self.facial_expression_pub = self.create_publisher(String, 'facial_expression_command', 10)
        self.debug_pub = self.create_publisher(String, 'debug_topic', 10)
        self.joints_direction = self.create_publisher(JointsToTarget, 'joints_direction', 10)

        self.image_width = 64
        self.image_height = 64
        self.pixel_angle_ratio = self.image_height/50

        self.subscription  # prevent unused variable warning
        self.bridge = CvBridge()
        
        self.utils = utils.ColorUtils()
        self.joints_utils = utils.JointUtils()

        self.follow_color = False
        self.color = 'None'
        self.hsv_threshold = None
        self.save_image = True

        #to test
        # self.color = 'red'
        # self.follow_color = True
        # self.hsv_threshold = self.utils.get_hsv_threshold(self.color, self.language)

    def follow_callback(self, command):
        print('command.data')
        print(command.data)
        if command.data in self.utils.colors[self.language]:
            self.color = command.data
            self.hsv_threshold = self.utils.get_hsv_threshold(self.color, self.language)
            self.follow_color = True
            print(self.color)
        else:
            self.color = None
            self.follow_color = False

    def listener_callback(self, image):

        if self.follow_color:
            print('Okay, im here')
            msg = JointsToTarget()
            msg.joints = self.joints_utils.get_neck_joints()
            msg.targets = self.color_position(image)
                    
            self.joints_direction.publish(msg)

        else:
            print('Okay, its false')
    
    def color_position(self, image):
        
        cv_image = self.bridge.imgmsg_to_cv2(image, "bgr8")
        
        # Resize into 64x64
        cv_image = cv2.resize(cv_image, (self.image_height,self.image_width))
        blurred = cv2.GaussianBlur(cv_image, (3, 3), 0)
        hsv = cv2.cvtColor(blurred, cv2.COLOR_BGR2HSV)

        mask = cv2.inRange(hsv, self.hsv_threshold[0], self.hsv_threshold[1])
        mask = cv2.erode(mask, None, iterations=1)
        mask = cv2.dilate(mask, None, iterations=1)
        
        cnts = cv2.findContours(mask.copy(), cv2.RETR_EXTERNAL,cv2.CHAIN_APPROX_SIMPLE)
        cnts = imutils.grab_contours(cnts)
        print(len(cnts))
        if len(cnts) > 0:
                
            c = max(cnts, key=cv2.contourArea)
            # ((x, y), radius) = cv2.minEnclosingCircle(c)
            
            M = cv2.moments(c)
            dX = M["m10"] / M["m00"]-self.image_width/2
            dY = M["m01"] / M["m00"]-self.image_height/2
            
            print(dX,dY)    
            if (abs(dX)<self.pixel_angle_ratio):
                dX = 0.
            if (abs(dY)<self.pixel_angle_ratio):
                dY = 0.
            msg = String()
            msg.data = 'no_neck_joy'
            self.facial_expression_pub.publish(msg)
            return [-dX/self.pixel_angle_ratio,dY/self.pixel_angle_ratio]
        else:
            msg = String()
            msg.data = 'no_neck_sadness'
            self.facial_expression_pub.publish(msg)
            return [0.,0.]
                
def main(args=None):
    rclpy.init(args=args)

    image_subscriber = ImageSubscriber()

    rclpy.spin(image_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    image_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
  