
COLORS = {'pt-BR': ['vermelh', 'laranja', 'amarel', 'verde', 'azul', 'rox', 'pret', 'branc'],
            'en-US': ['red', 'orange', 'yellow', 'green', 'blue', 'purple', 'black', 'white']}

class ColorUtils():
    
    def __init__(self):
        self.colors = COLORS
        self.rgbs = [(255,0,0),(255,165,0),(255,255,0),(0,255,0),(0,0,255),(148,0,211),(0,0,0),(255,255,255)]
        self.hsv_boundaries = [
            ((0, 50, 20), (11, 200, 255)),
            ((10, 100, 20), (21, 255, 255)),
            ((23, 20, 20), (35, 255, 255)),
            ((37, 50, 20), (80, 200, 255)),
            ((89, 100, 20), (133, 220, 255)),
            ((138, 80, 20), (148, 220, 255)),
            ((0, 0, 0), (255, 255, 60)),
            ((0, 0, 230), (255, 25, 255)),
        ]


    def get_rgb(self, color, language):
        return self.rgbs[self.colors[language].index(color)]
        
    def get_hsv_threshold(self, color, language):
        return self.hsv_boundaries[self.colors[language].index(color)]


class AudioUtils():
    
    def __init__(self):
        self.colors = COLORS
        self.follow_command = {'pt-BR': ['seguir','segue','siga','olhe','olha'],
                                'en-US':['follow', 'look']}
        self.stop_command = {'pt-BR':  ['para','desliga','pare','cancela','inicial'],
                                'en-US':['don\'t follow', 'not follow', 'stop']}
        
    def clean_stt_text(self, text):
        return text.replace('\303\252','ê').replace('\303\243','ã').replace('\303\251','é').replace('\303\264','ô').replace('\303\241','á').replace('\303\263','ó').replace('\303\240','à').replace('\303\215','í').replace('\303\247','ç').replace('\303\265','õ').lower()

    def is_follow_command(self, text, language):
        for command in self.follow_command[language]:
            if command in text:
                return True
        return False
        
    def is_facial_expression_command(self, text, language):
        if 'facial expression' in text:
            return True
        return False

    def is_stop_command(self, text, language):
        for command in self.stop_command[language]:
            if command in text:
                return True
        return False
    
    def is_color_command(self, text, language):
        for color in self.colors[language]:
            if color in text:
                return color
        return ''



class JointUtils():
    
    def __init__(self):
        self.joints = ['root_link', 'waist_link', 'waist_rot_link', 'torso_link', 'right_arm_link',
         'right_shoulder_link', 'right_biceps_link', 'right_elbow_rot_link', 'right_forearm_link', 'right_wrist_link',
         'right_end2_link', 'right_end1_link', 'neck_link', 'head_link', 'up_eyelids_link',
         'right_eyebrow_prism_link', 'right_eyebrow_link', 'right_eye_hor_link', 'right_eye_link', 'left_eyebrow_prism_link',
         'left_eyebrow_link', 'left_eye_hor_link', 'left_eye_link', 'jaw_link', 'down_eyelids_link',
         'left_arm_link', 'left_shoulder_link', 'left_biceps_link', 'left_elbow_rot_link', 'left_forearm_link',
         'left_wrist_link', 'left_end2_link', 'left_end1_link']
        
    def get_joint_index(self, joint_name):
        return self.joints.index(joint_name)

    def get_joint_index_list(self, joints):
        index_list = []
        for j in joints:
            index_list.append(self.joints.index(j))
        return index_list

    def get_neck_joints(self):
        return [self.joints.index('neck_link'),self.joints.index('head_link')]

    def get_face_joints(self):
        return [self.joints.index('jaw_link'),
                        self.joints.index('down_eyelids_link'),self.joints.index('up_eyelids_link'), 
                        self.joints.index('left_eyebrow_prism_link'),self.joints.index('right_eyebrow_prism_link'), 
                        self.joints.index('left_eyebrow_link'),self.joints.index('right_eyebrow_link'),
                        self.joints.index('neck_link'),self.joints.index('head_link')]

   