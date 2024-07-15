# -*- coding: utf-8 -*-
"""保存图像

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


camera = Camera(0, 'default')
camera.init((1280, 1024))
count = 0
maxcount = 100
interval = 0.2
print('press any key to start')
input()
lasttime = time.time()
fps_last_timestamp = time.time()
fpscount = 0
fps = 0
while count < maxcount:
    success, image = camera.get_image()
    if success:
        if time.time()-lasttime >= interval:
            lasttime = time.time()
            cv2.imwrite('data/capture/img{}.jpg'.format(count), image)
            count += 1
        helpers.showoff(image, 1, update=True)
        fpscount = fpscount % 100 + 1
        if fpscount == 100:
            fps = 100/(time.time() - fps_last_timestamp+0.0001)
            fps_last_timestamp = time.time()
            print('fps: ', fps)
    else:
        print('ERROR')
        break
