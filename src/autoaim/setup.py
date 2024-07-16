from setuptools import find_packages, setup

package_name = 'autoaim'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/configs', ['configs/aimred.json']),
        ('share/' + package_name + '/weights', ['weights/lamp.csv']),
        ('share/' + package_name + '/weights', ['weights/pair.csv']),
        ('share/' + package_name + '/data', ['data/img0.jpg']),
        ('share/' + package_name + '/data', ['data/img1.jpg']),
        ('share/' + package_name + '/data', ['data/img2.jpg'])
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='amwhisper',
    maintainer_email='amwhisper@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        ],
    },
)
