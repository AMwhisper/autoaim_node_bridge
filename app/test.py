# 此文件用于测试函数和练习
import os
import sys

current_dir = os.path.dirname(os.path.abspath(__file__))

# 定义要引用的ROS2包列表
ros2_packages = ['autoaim', 'node_bridge_ros2', 'node_interface']

workspace_dir = os.path.expanduser('~/ros/workspace/nbr2_ws')
for package_name in ros2_packages:
    packages_path = os.path.join(workspace_dir,'src', package_name)
    print (packages_path)
    sys.path.insert(0, packages_path)



