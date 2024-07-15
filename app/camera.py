# -*- coding: utf-8 -*-
"""测试相机

Author:
"""
import sys
import os

# 定义要引用的ROS2包列表
ros2_packages = ['autoaim', 'node_bridge_ros2', 'node_interface']
workspace_dir = os.path.expanduser('~/ros/workspace/nbr2_ws')
# 将每个ROS2包的路径添加到sys.path
for package_name in ros2_packages:
    packages_path = os.path.join(workspace_dir,'src', package_name)
    sys.path.insert(0, packages_path)
    
from autoaim import Camera, helpers
import cv2
import time


camera = Camera(0, 'daheng')
camera.init((1280, 1024))
fps_last_timestamp = time.time()
fpscount = 0
fps = 0
while True:
    success, image = camera.get_image()
    if success:
        helpers.showoff(image, 1, update=True)
        fpscount = fpscount % 100 + 1
        if fpscount == 100:
            fps = 100/(time.time() - fps_last_timestamp+0.0001)
            fps_last_timestamp = time.time()
            print('fps: ', fps)
    else:
        print('ERROR')
        break
