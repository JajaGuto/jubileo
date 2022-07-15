
from ast import expr
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
import bleedfacedetector as fd
import time

from rclpy.qos import qos_profile_sensor_data

class FacialExpressionDetector(Node):

    def __init__(self):
        super().__init__('facial_expression_detector')
        self.subscription = self.create_subscription(
            Image,
            'cropped_face',
            self.listener_callback,
            qos_profile_sensor_data)

        self.command_sub = self.create_subscription(
            String,
            'follow_command',
            self.follow_callback,
            qos_profile_sensor_data)
    
        self.language = 'en-US'
            
            
        self.tts_pub = self.create_publisher(String, 'text_to_speech', 10)
        self.facial_expression_pub = self.create_publisher(String, 'facial_expression_command', 10)
        self.debug_pub = self.create_publisher(String, 'debug_topic', 10)
        self.joints_direction = self.create_publisher(JointsToTarget, 'joints_direction', 10)

        self.subscription  # prevent unused variable warning
        self.bridge = CvBridge()
        
        self.joints_utils = utils.JointUtils()
        
        self.detect_facial_expression = False

        # read the model
        self.net = cv2.dnn.readNetFromONNX('src/vision/vision/emotion-ferplus-8.onnx')
        # Define the emotions   
        self.expressions = ['neutral', 'happy', 'surprised', 'sad', 'angry', 'disgusted', 'scared', 'disgusted']
        self.robot_expressions = ['neutral','joy','surprise','sadness','anger','disgust','fear','disgust']



        # # to test
        # self.detect_facial_expression = True



        
    def follow_callback(self, command):
        if command.data == '':
            self.detect_facial_expression = False
        elif command.data == 'expression':
            self.detect_facial_expression = True

    def listener_callback(self, image):
        
        if self.detect_facial_expression:
            
            tts = String()
            tts.data = 'hi'
            self.tts_pub.publish(tts)
            time.sleep(2)
            
            self.detect_facial_expression = False
            index = self.facial_expression_detection(image)
            expression = self.expressions[index]
            
            debug = String()
            debug.data = 'iDetected facial expression: '+expression
            self.debug_pub.publish(debug)

            tts = String()
            tts.data = 'you_look '+expression
            self.tts_pub.publish(tts)
            
            time.sleep(2)
        
            robot_expression = self.robot_expressions[index]
            
            msg = String()
            msg.data = robot_expression
            self.facial_expression_pub.publish(msg)

        else:
            pass
    
    def facial_expression_detection(self, image):
        
        debug = String()
        debug.data = 'wAnalysing facial expression...'
        self.debug_pub.publish(debug)

        cv_image = self.bridge.imgmsg_to_cv2(image, "bgr8")
        # Convert Image into Grayscale
        gray = cv2.cvtColor(cv_image,cv2.COLOR_BGR2GRAY)
        
        # Resize into 64x64
        resized_face = cv2.resize(gray, (64, 64))
        
        # Reshape the image into required format for the model 
        processed_face = resized_face.reshape(1,1,64,64)
        self.net.setInput(processed_face)
        output = self.net.forward()
        # Compute softmax values for each sets of scores  
        expanded = np.exp(output - np.max(output))
        probablities =  expanded / expanded.sum()

        prob = np.squeeze(probablities)
        prob[0] = prob[0]/7
        return prob.argmax()

                
def main(args=None):
    rclpy.init(args=args)

    facial_expression_detector = FacialExpressionDetector()

    rclpy.spin(facial_expression_detector)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    facial_expression_detector.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
  