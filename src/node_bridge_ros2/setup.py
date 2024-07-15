from setuptools import find_packages, setup


package_name = 'node_bridge_ros2'



setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='amwhisper',
    maintainer_email='3056422950@qq.com',
    description='A bridge between ROS2 and STM32',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "bridge_ros2 = node_bridge_ros2.bridge_ros2:main"
        ],

    },

)
