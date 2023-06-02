import torch
from PIL import Image
import cv2
import numpy as np

from std_msgs.msg import String
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
from unity_robotics_demo_msgs.msg import JointsToTarget
from rclpy.qos import qos_profile_sensor_data

# Load the model
model = torch.hub.load('ultralytics/yolov5', 'yolov5x6', pretrained=True)

class ObjectDetector(Node):

    def __init__(self):
        super().__init__('object_detector')
        self.subscription = self.create_subscription(
            Image,
            'camera_image',
            self.listener_callback,
            qos_profile_sensor_data)

        self.command_sub = self.create_subscription(
            String,
            'look_object',
            self.look_callback,
            qos_profile_sensor_data)

        self.joints_direction = self.create_publisher(JointsToTarget, 'joints_direction', 10)

        self.image_width = 512
        self.image_height = 512
        self.pixel_angle_ratio = self.image_height/50

        self.running_yolo = False

        self.subscription  # prevent unused variable warning
        self.bridge = CvBridge()
        self.object_name = None

    def look_callback(self, command):
        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_neck_joints()

        if command.data == 'stop':
            msg.targets = [0., 0.]
            self.object_name = None
        else:
            msg.targets = [0., 20.]
            self.object_name = command.data

        self.joints_direction.publish(msg)

    def listener_callback(self, image):
        if self.object_name and not self.running_yolo:
            msg = JointsToTarget()
            msg.joints = self.joints_utils.get_neck_joints()
            # get position of object to make the robots neck move towards the object
            self.running_yolo = True
            msg.targets = self.find_object(image, self.object_name)
            self.running_yolo = False

            self.joints_direction.publish(msg)

    def find_object(self, image, object_name):
        # Convert ROS Image message to OpenCV image
        cv_image = self.bridge.imgmsg_to_cv2(image, "bgr8")
        
        # Convert OpenCV image to PIL image for YOLO inference
        pil_image = Image.fromarray(cv_image)

        # Inference
        results = model(pil_image)

        # Print results
        for i, result in enumerate(results.xyxy[0]):  # for a single image
            x1, y1, x2, y2, conf, cls = result
            # Calculate center of bounding box
            center_x = ((x1 + x2) / 2-self.image_width/2).item()
            center_y = ((y1 + y2) / 2-self.image_height/2).item()
            if (abs(center_x)<self.pixel_angle_ratio):
                center_x = 0.
            if (abs(center_y)<self.pixel_angle_ratio):
                center_y = 0.
            # Check if the detected object matches the desired object
            if results.names[int(cls)] == object_name:
                return [-center_x/self.pixel_angle_ratio,center_y/self.pixel_angle_ratio]

        return [0., 20.]


def main(args=None):
    rclpy.init(args=args)

    object_detector = ObjectDetector()

    rclpy.spin(object_detector)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    object_detector.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
