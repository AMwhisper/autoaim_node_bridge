# -*- coding: utf-8 -*-
"""测试云台运动

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
    
import autoaim
import cv2

seq = 0


def rotate(degree):
    global seq
    seq = (seq+1) % 256
    print(seq)
    packet = autoaim.telegram.pack(
        0x0401, [float(degree), 0.0, bytes([0])], seq=seq)
    autoaim.telegram.send(packet)
    cv2.waitKey(20)


while True:
    amplitude = 30
    for i in range(0, amplitude, 1):
        rotate(1)
    for i in range(amplitude, -1*amplitude, -1):
        rotate(-1)
    for i in range(0, amplitude, 1):
        rotate(-1)
    for i in range(amplitude, -1*amplitude, -1):
        rotate(1)
