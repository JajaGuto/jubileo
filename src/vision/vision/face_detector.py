
from std_msgs.msg import String
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

from unity_robotics_demo_msgs.msg import JointsToTarget

from utils import utils

import cv2
import imutils
import numpy as np
# import matplotlib.pyplot as plt
import os
#import bleedfacedetector as fd
import face_recognition
import time

from rclpy.qos import qos_profile_sensor_data

class FaceDetector(Node):

    def __init__(self):
        super().__init__('face_detector')
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
        self.cropped_face = self.create_publisher(Image, 'cropped_face', 10)

        self.image_width = 512
        self.image_height = 512
        self.pixel_angle_ratio = self.image_height/50

        self.subscription  # prevent unused variable warning
        self.bridge = CvBridge()
        
        self.joints_utils = utils.JointUtils()
        self.follow_face = False
        self.detect_facial_expression = False
        self.face_recognition = False






        # # to test
        # self.follow_face = True
        # self.detect_facial_expression = True
        # self.face_recognition = True







        
    def follow_callback(self, command):
        if command.data == 'face':
            self.follow_face = True
        elif command.data == 'expression':
            self.detect_facial_expression = True
        elif command.data == 'recognition':
            self.face_recognition = True
        else:
            self.follow_face = False
            self.detect_facial_expression = False
            self.face_recognition = False

    def listener_callback(self, image):
        
        if self.follow_face:
            
            msg = JointsToTarget()
            msg.joints = self.joints_utils.get_neck_joints()
            msg.targets = self.face_position(image)
                    
            self.joints_direction.publish(msg)

        else:
            pass
    
    def face_position(self, image):

        cv_image = self.bridge.imgmsg_to_cv2(image, "bgr8")

        # Use SSD detector with 20% confidence threshold.
        #faces = fd.ssd_detect(cv_image, conf=0.2)

        faces = face_recognition.face_locations(image)

        if len(faces) > 0:
                
            debug = String()
            debug.data = 'iFace detected'
            self.debug_pub.publish(debug)
            # Lets take the coordinates of the first face in the image. 
            x,y,w,h = faces[0]
            
            if self.detect_facial_expression or self.face_recognition:
                # Define padding for face roi
                padding = 3
                # Extract the Face from image with padding.
                face = cv_image[y-padding:y+h+padding,x-padding:x+w+padding] 

                self.cropped_face.publish(self.bridge.cv2_to_imgmsg(face, "bgr8"))


            dX = (x+w/2)-self.image_width/2
            dY = (y+h/2)-self.image_height/2

            print(dX)
            print(dY)
            if (abs(dX)<self.pixel_angle_ratio):
                dX = 0.
            if (abs(dY)<self.pixel_angle_ratio):
                dY = 0.
            # msg = String()
            # msg.data = 'no_neck_joy'
            # self.facial_expression_pub.publish(msg)
            return [-dX/self.pixel_angle_ratio,dY/self.pixel_angle_ratio]
        else:
            
            debug = String()
            debug.data = 'eFace not detected'
            self.debug_pub.publish(debug)
            # msg = String()
            # msg.data = 'no_neck_sadness'
            # self.facial_expression_pub.publish(msg)
            return [0.,0.]
                
def main(args=None):
    rclpy.init(args=args)

    face_detector = FaceDetector()

    rclpy.spin(face_detector)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    face_detector.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
  
