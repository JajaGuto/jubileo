
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


class GrabObject(Node):

    def __init__(self):
        super().__init__('manipulation')
        self.joints_utils = utils.JointUtils()
        
        self.command_sub = self.create_subscription(
            String,
            'follow_command',
            self.manipulation_callback,
            qos_profile_sensor_data)

        self.delay = 2.5

        self.grab_pub = self.create_publisher(JointsToTarget, 'joints_to_target', 10)
        self.tts_pub = self.create_publisher(String, 'text_to_speech', 10)
        self.debug_pub = self.create_publisher(String, 'debug_topic', 10)
        # self.expressions_list = ['joy','neutral','sadness','surprise','disgust','anger','fear']
        # self.expression = 'neutral'
        self.run_grab_sequence()

    def run_grab_sequence(self):
        
        debug = String()
        debug.data = 'iGrabbing the object'
        self.debug_pub.publish(debug)
        
        tts = String()
        tts.data = 'look'
        self.tts_pub.publish(tts)
        time.sleep(1)

        tts = String()
        tts.data = 'i_gonna_grab_the_object'
        self.tts_pub.publish(tts)
        time.sleep(self.delay)

        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_neck_joints()
        msg.targets = [-15.,30.] 
        self.grab_pub.publish(msg)
        time.sleep(self.delay)
        
        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_biceps_link', 'right_elbow_rot_link'])
        msg.targets = [maximum, maximum]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)
        
        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_arm_link', 'right_biceps_link'])
        msg.targets = [65., 20.]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)
        
        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_end1_link', 'right_end2_link'])
        msg.targets = [minimum, maximum]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)

        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_arm_link','head_link'])
        msg.targets = [maximum,10.]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)
        
        
        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_arm_link', 'right_biceps_link','head_link'])
        msg.targets = [65., 20.,30.]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)
        
        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_end1_link', 'right_end2_link'])
        msg.targets = [maximum, minimum]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)


        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_arm_link', 'right_biceps_link'])
        msg.targets = [25., 25.]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)

        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_biceps_link', 'right_elbow_rot_link'])
        msg.targets = [initial, initial]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)

        msg = JointsToTarget()
        msg.joints = self.joints_utils.get_joint_index_list(['right_arm_link', 'neck_link', 'head_link'])
        msg.targets = [initial,initial,initial]        
        self.grab_pub.publish(msg)
        time.sleep(self.delay)

        tts = String()
        tts.data = 'okay'
        self.tts_pub.publish(tts)
        time.sleep(self.delay)
         
    def manipulation_callback(self, command):
        if command.data == 'grab':
            self.run_grab_sequence()
        else:
            pass

def main(args=None):
    rclpy.init(args=args)

    manipulation = GrabObject()


    rclpy.spin(manipulation)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    manipulation.destroy_node()
    rclpy.shutdown()

    # while rclpy.ok():
    #     rclpy.spin_once(manipulation)

    #color_pub.destroy_node()
    #rclpy.shutdown()


if __name__ == '__main__':
    main()
