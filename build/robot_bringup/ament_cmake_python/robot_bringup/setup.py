from setuptools import find_packages
from setuptools import setup

setup(
    name='robot_bringup',
    version='0.0.0',
    packages=find_packages(
        include=('robot_bringup', 'robot_bringup.*')),
)
