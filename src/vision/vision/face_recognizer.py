
from ast import expr
from std_msgs.msg import String
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError

from unity_robotics_demo_msgs.msg import JointsToTarget

from utils import utils

import face_recognition

import pickle
import time
import cv2
import os

from rclpy.qos import qos_profile_sensor_data

class FaceRecognizer(Node):

    def __init__(self):
        super().__init__('face_recognizer')
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
        
        self.face_recognition = False

        # load the known faces and embeddings saved in last file
        self.known_data = pickle.loads(open('src/vision/vision/known_faces/face_enc', "rb").read())



        # # to test
        # self.face_recognition = True








    def follow_callback(self, command):
        if command.data == '':
            self.face_recognition = False
        elif command.data == 'recognition':
            self.face_recognition = True

    def listener_callback(self, image):
        print("cropped image received")
        
        if self.face_recognition:
            
            msg = String()
            msg.data = 'joy'
            self.facial_expression_pub.publish(msg)
            
            time.sleep(1)
            tts = String()
            tts.data = 'hi'
            self.tts_pub.publish(tts)
            
            time.sleep(1)
            name = self.face_recognition_get_name(image)
            print("name returned:",name)
            if name != '':            

                msg = String()
                msg.data = 'iRecognized face: '+name
                self.debug_pub.publish(msg)

                if name != 'unknown':

                    tts = String()
                    tts.data = 'you_are_'+name
                    self.tts_pub.publish(tts)
                    self.face_recognition = False
                else:
                    tts = String()
                    tts.data = 'hello i_am jubileo'
                    self.tts_pub.publish(tts)

            
            time.sleep(2)
        

        else:
            pass
    
    def face_recognition_get_name(self, image):
        
        debug = String()
        debug.data = 'wProcessing face recognition...'
        self.debug_pub.publish(debug)


        cv_image = self.bridge.imgmsg_to_cv2(image, "bgr8")
        rgb = cv2.cvtColor(cv_image, cv2.COLOR_BGR2RGB)

        boxes = face_recognition.face_locations(rgb,model='hog')
        # compute the facial embedding for the any face
        encodings = face_recognition.face_encodings(rgb, boxes)

        print(boxes)
        print(encodings)
        names = []
        # loop over the encodings
        for encoding in encodings:
            print("encodings here")
            #Compare encodings with encodings in data["encodings"]
            #Matches contain array with boolean values True and False
            matches = face_recognition.compare_faces(self.known_data["encodings"],
            encoding)
            #set name =unknown if no encoding matches
            name = "unknown"
            # check to see if we have found a match
            if True in matches:
                #Find positions at which we get True and store them
                matchedIdxs = [i for (i, b) in enumerate(matches) if b]
                count = {}
                # loop over the matched indexes and maintain a count for
                # each recognized face face
                for i in matchedIdxs:
                    print("its a match")
                    #Check the names at respective indexes we stored in matchedIdxs
                    name = self.known_data["names"][i]
                    #increase count for the name we got
                    count[name] = count.get(name, 0) + 1
                    #set name which has highest count
                    name = max(count, key=count.get)
                    # will update the list of names
                    names.append(name)
                    return name
            return 'unknown'


                
def main(args=None):
    rclpy.init(args=args)

    face_recognizer = FaceRecognizer()

    rclpy.spin(face_recognizer)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    face_recognizer.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
  