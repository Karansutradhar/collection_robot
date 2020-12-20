# Indoor Sports Court Ball Collection Robot
[![Build Status](https://travis-ci.org/dahhmani/collection_robot.svg?branch=master)](https://travis-ci.org/dahhmani/collection_robot)
[![Coverage Status](https://coveralls.io/repos/github/dahhmani/collection_robot/badge.svg?branch=master)](https://coveralls.io/github/dahhmani/collection_robot?branch=master)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Overview
This project aims to solve a common problem in the sports industry, namely tidying up the sports court (that may be used for multiple sessions at the same day) and getting it back to its original state. Our objective is to automate the process of collecting all the used balls that will be scattered all over the court at the end of each practise session. We intend to implement a ball collector robot that operates inside an indoor sports court. The robot will navigate around the environment at various locations detecting objects via color segmentation. Then it will reach the object to pick and place the object at a specified location. We will use object detection, obstacle avoidance, and optimal path to increase the efficiency of object collection. This robot is used to search and collect objects from unknown locations and get back to the starting position.

### Assumptions
The number of balls in the environment is known and given by the user, but their locations are unknown. The ball collection task will be abstracted away by simply making the ball disappear from the environment when the robot is within a preset distance away from it. There is no time limit for the navigation and the simulation will only stop when all the balls are collected. The environment is assumed to be a small area of 20 x 20 feet.

## Authors
[Karan Sutradhar](https://github.com/Karansutradhar) - Pursuing Masters' in Robotics  
[Ajinkya Parwekar](https://github.com/ajinkyap991) - Pursuing Masters' in Robotics  
[Mahmoud Dahmani](https://github.com/dahhmani) - Pursuing Masters' in Robotics

## Project Presentation and Demonstration
[![Presentation](https://img.shields.io/badge/Presentation-Click%20Here-blue)](https://youtu.be/rzorpK4S9Fg)
[![Demo](https://img.shields.io/badge/Demo-Click%20Here-blue)](https://drive.google.com/file/d/1mqNnOvOPZSDfgJbIFE7mrY7AxY3ynOqw/view?usp=sharing)

## Development Process
Agile iterative process is followed in this project. The roles are divided into driver (DR), navigator (NA) and design keeper (DK), which are swapped throughout the tasks. We will iterate over the following 3 sprint backlogs (each spans a week) to complete the project.
Test-driven development is applied so that the quality of the implemented software system is ensured. Essentially, our system will be the product of the following cycle. First unit tests are written under the Google Test framework. The code is written and refactored until all the tests for a given module pass. The same was carried out for the next modules implementation until the whole system is built. Further quality control was reinforced by utilizing CppCheck as the code analysis tool, Valgrind and GDB as the debugging tools and CppLint to ascertain compliance with Google style sheet. 

### AIP Document
[![AIP](https://img.shields.io/badge/AIP-Click%20Here-blue)](https://docs.google.com/spreadsheets/d/1vfRqBHIk1xVdc3z9uviF9HBWrTOSSFLzZFpkkpyqecQ/edit?usp=sharing)

### Sprint Planning Notes
[![Sprint1](https://img.shields.io/badge/Sprint1-Click%20Here-blue)](https://docs.google.com/document/d/1q7eatA6GpOcHOXkSIqnTkPcHaBq6XO4dyp4ps58LC04/edit?usp=sharing)
[![Sprint2](https://img.shields.io/badge/Sprint2-Click%20Here-blue)](https://docs.google.com/document/d/1Y0JmpGLg45UZfyCOKwgZgbEW_Spy7mX2NEYs3VM1IGU/edit?usp=sharing)
[![Sprint3](https://img.shields.io/badge/Sprint3-Click%20Here-blue)](https://docs.google.com/document/d/1wdRt2_vtzhR7wF74SPTJi531jGys98WzzCVS4sGt3Bo/edit?usp=sharing)

## Used Technologies
- ROS Melodic
- Operating System - Ubuntu 18.04
- Simulation Environment- Gazebo 9.0.0 version
- Build System - catkin
- Open Source Libraries - OpenCV >= 4.4 (Apache License) 
- Programming Language - C++ 11/14 
- Continuous Integration - Travic CI
- Code Coverage - Coveralls
- A standard turtlebot3 pkg needs to be installed in order to run this project
- Version Control - Git & Github

### Package Dependencies
- cv_bridge
- geometry_msgs
- image_transport
- move_base_msgs
- roscpp
- sensor_msgs
- std_msgs

### Install ROS Melodic
In order to Install ROS Melodic follow the following ROS.org [link](http://wiki.ros.org/melodic/Installation/Ubuntu)

### Install turtlebot3 package
The instructions to install the standard turtlebot3 ROS package can be found [here](https://automaticaddison.com/how-to-launch-the-turtlebot3-simulation-with-ros/).

### Install OpenCV
To install opencv follow the instructions
```
sudo apt-get update;
sudo apt-get upgrade; 
sudo apt-get install build-essential cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev; 
sudo apt-get install python3.5-dev python3-numpy libtbb2 libtbb-dev; 
sudo apt-get install libopencv-dev libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev; 
sudo apt-get install libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev; 
sudo apt-get install libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev; 
sudo apt-get install git; git clone https://github.com/opencv/opencv.git; 
cd opencv; 
mkdir build; 
cd build; 
cmake -D BUILD_TIFF=ON -D WITH_CUDA=OFF -D ENABLE_AVX=OFF -D WITH_OPENGL=OFF -D WITH_OPENCL=OFF -D WITH_IPP=OFF -D WITH_TBB=ON -D BUILD_TBB=ON -D WITH_EIGEN=OFF -D WITH_V4L=OFF -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH= ../ ../opencv_contrib/modules ../; 
make -j4; 
sudo make install; 
sudo ldconfig; 
sudo apt-get install python-opencv
```
Checking OpenCV is working, follow the instructions
```
python
import cv2
print(cv2.__version__)

exit()
```
After you get the version, exit the python command line

### Other References
[Gazebo-Population of models](http://gazebosim.org/tutorials?tut=model_population&cat=build_world)

[cv_bridge](http://wiki.ros.org/cv_bridge/Tutorials/UsingCvBridgeToConvertBetweenROSImagesAndOpenCVImages)

[HSV Color Detection](https://docs.opencv.org/master/df/d9d/tutorial_py_colorspaces.html)

## Build Package
Run the following in the terminal:
```
mkdir -p ~/<workspace>/src
git clone https://github.com/dahhmani/collection_robot.git
cd ../
catkin_make
```

## Run Simulation
Run the following in the terminal:
```
cd catkin_ws
source devel/setup.bash
roslaunch collection_robot collection.launch

```

## Run Tests
Run the following in the terminal:
```
cd ~/catkin_ws/
source devel/setup.bash
catkin_make run_tests collection_robot

```

## Rosbag

### Recording the Rosbag file
Run the following commands in the terminal
```
cd <workspace>
source devel/setup.bash
roslaunch collection_robot collection.launch record:=true
```
The bag file is saved as collection.bag in the results directory.

### Inspecting the Rosbag file
Run the following in the terminal 
Open a terminal
```
cd <workspace>/src/collection_robot/results
rosbag info collection.bag
```

### Playing the bag file
Run the following commands in the terminal
Open a terminal
```
roscore
```
In another terminal
```
cd <workspace>/src/collection_robot/results/
rosbag play collection.bag
```

## Doxygen Documentation
```
sudo apt-get install doxygen
doxygen -g
Open Doxygen file and source file in "INPUT" prameter and add the include and app folder
Add "*.hpp *.cpp" in the "FILE_PATTERNS" parameter in the doxygen file
Run "doxygen docs/Doxyfile" in the terminal
Open html folder
open index.html
```

## Local Code Coverage
Run the following in the terminal:
```
$ cd ~/catkin_ws/build 
$ lcov --directory . --capture --output-file coverage.info
$ lcov --remove coverage.info '/opt/*' '/usr/*' '*/devel/*' '*test_*' '*_test*' --output-file coverage.info 
$ lcov --list coverage.info 
$ genhtml coverage.info --output-directory covout
```
This creates index.html file in build/covout, which can be accessed

## Cpplint check
```
cd  <path to repository>
cpplint $( find . -name \*.hpp -or -name \*.cpp | grep -vE -e "^./build/" -e "^./vendor/" -e "^./docs/" -e "^./results" )

```

## Cppcheck check
```
cd <path to repository>
cppcheck --enable=all --std=c++11 -I include/ --suppress=missingIncludeSystem $( find . -name *.cpp | grep -vE -e "^./build/" -e "^./vendor/" )

```

## Future Work
1. Implement a manipulator that performs the ball collection task
2. Change the detection algorithm to a deep-learning based model to improve the accuracy.
3. implement rand walk as the navigation problem
