from setuptools import find_packages
from setuptools import setup

setup(
    name='node_interface',
    version='0.0.0',
    packages=find_packages(
        include=('node_interface', 'node_interface.*')),
)
