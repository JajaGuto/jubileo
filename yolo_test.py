import torch
from PIL import Image

# Load the model
model = torch.hub.load('ultralytics/yolov5', 'yolov5x6', pretrained=True)

# Load image
img = Image.open('juj.png')

# Inference
results = model(img)

# Get image size
image_width, image_height = img.size
pixel_angle_ratio = image_height/50

# Print results
for i, result in enumerate(results.xyxy[0]):  # for a single image
    x1, y1, x2, y2, conf, cls = result
    # Calculate center of bounding box
    center_x = ((x1 + x2) / 2-image_width/2).item()
    center_y = ((y1 + y2) / 2-image_height/2).item()
    if (abs(center_x)<pixel_angle_ratio):
        center_x = 0.
    if (abs(center_y)<pixel_angle_ratio):
        center_y = 0.
    print(f'Object: {results.names[int(cls)]}, Confidence: {conf}, position: ({center_x}, {center_y})')
            
# To save the image with bounding boxes
results.save()  # or .show()