# autoaim_node_bridge 
(Testing)
## Introduction  
Based on ROS2, aim to acchieve autoaim and communicate between stm32 and host.

There are three ros2 packages, named "autoaim", "node_bridge_ros2" and "node_interface".  
As the name suggests, "autoaim" means aimbot, "node_bridge_ros2" means that it's a communication bridge between stm32 and ros2 ,and "node_interface" stores several different interfaces.  
The file "app" includes the startup files of the whole project.  
## Notice  
Remember to change the following codes in ./src/node_bridge_ros2/protocol.py and ./app/app.py  
```
workspace_dir = os.path.expanduser('~/ros/workspace/nbr2_ws')
```
Change "workspace_dir" to your workspace path.    
## Usage  
Run the script named "aimxxx.sh", eg:   
```
./aimred.sh
```
## Todo List 
- Restricted to devices, this project haven't been verified on equipments.
- Modify "potocol.h" to make it corresponding with the interfaces in the package "node_interface".  
- I don't know why it displays there is an error in cmake.txt. But I can still colcon build the package successfully. This problem comed out with a common boot. Interesting~

