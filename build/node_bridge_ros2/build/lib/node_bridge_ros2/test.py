import os

yaml_path = os.path.join('~/ros/workspace/nbr2_ws/src/node_bridge_ros2/', '..', '..', 'library', 'protocol.yaml')
print(yaml_path)

current_folder = os.path.dirname(os.path.abspath(__file__))
print(current_folder)

path = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))) + '/library/potocol.yaml'
print (path)