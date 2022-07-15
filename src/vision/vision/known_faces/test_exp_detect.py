
import cv2
import imutils
import numpy as np
# import matplotlib.pyplot as plt
import os
import bleedfacedetector as fd
import time

from imutils import paths #imutils includes opencv functions

#get paths of each file in folder named Images
#Images here that contains data(folders of various people)
imagePath = list(paths.list_images('facial_expressions'))
kEncodings = []
kNames = []
print(imagePath)
# read the model
net = cv2.dnn.readNetFromONNX('../emotion-ferplus-8.onnx')

expressions = ['neutral', 'happy', 'surprised', 'sad', 'angry', 'disgusted', 'scared', 'disgusted']
robot_expressions = ['neutral','joy','surprise','sadness','anger','disgust','fear','disgust']



# loop over the image paths
for (i, ip) in enumerate(imagePath):
    # extract the person name from the image path
    name = ip.split(os.path.sep)[-1].split('.')[0]
    # load the input image and convert it from BGR
    image = cv2.imread(ip)
    
    # Use SSD detector with 20% confidence threshold.
    faces = fd.ssd_detect(image, conf=0.2)


    if len(faces) > 0:
        
        print('face detected--------------------')
        # Lets take the coordinates of the first face in the image. 
        x,y,w,h = faces[0]
        
        # Define padding for face roi
        padding = 3
        # Extract the Face from image with padding.
        face = image[y-padding:y+h+padding,x-padding:x+w+padding] 
        
        # Convert Image into Grayscale
        gray = cv2.cvtColor(face,cv2.COLOR_BGR2GRAY)
        
        # Resize into 64x64
        resized_face = cv2.resize(gray, (64, 64))
        
        # Reshape the image into required format for the model 
        processed_face = resized_face.reshape(1,1,64,64)
        net.setInput(processed_face)
        output = net.forward()
        # Compute softmax values for each sets of scores  
        expanded = np.exp(output - np.max(output))
        probablities =  expanded / expanded.sum()

        prob = np.squeeze(probablities)
        prob[0] = prob[0]/7
        print(prob)
        print(expressions)
        print(name)
        index = prob.argmax()
        print(expressions[index])
        print(robot_expressions[index])

