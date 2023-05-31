import torch
from PIL import Image

# Load the model
model = torch.hub.load('ultralytics/yolov5', 'yolov5x6', pretrained=True)#.to('cuda')

# Load image
img = Image.open('ju3.png')

# Inference
results = model(img)

# Print results
for result in results.xyxy[0]:  # for a single image
    print(result)

# To save the image with bounding boxes
results.save()  # or .show()