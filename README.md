# Indoor Sports Court Ball Collection Robot
[![Build Status](https://travis-ci.org/dahhmani/Collection-Robot.svg?branch=master)](https://travis-ci.org/dahhmani/Collection-Robot)
[![Coverage Status](https://coveralls.io/repos/github/dahhmani/Collection-Robot/badge.svg?branch=master)](https://coveralls.io/github/dahhmani/Collection-Robot?branch=master)
[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)

## Overview and Description

This project aims to solve a common problem in the sports industry, namely tidying up the sports court (that may be used for multiple sessions at the same day) and getting it back to its original state. Our objective is to automate the process of collecting all the used balls that will be scattered all over the court at the end of each practise session. We intend to implement a ball collector robot that operates inside an indoor sports court. The robot will navigate around the environment at various locations detecting objects. Then it will reach the object to pick and place the object at a specified location. We will use object detection, mapping, obstacle avoidance, and optimal path to increase the efficiency of object collection. This robot is used to search and collect objects from unknown locations and get back to the starting position.

## Authors

Phase-I

Ajinkya Parwekar (Driver)
Karan Sutradhar (Navigator)
Mahmoud Dahmani (Design Keeper)

## License

Standard MIT License Clause

## Agile Iterative Process

[Agile Iterative Process Google Spreadsheet](https://docs.google.com/spreadsheets/d/1vfRqBHIk1xVdc3z9uviF9HBWrTOSSFLzZFpkkpyqecQ/edit?usp=sharing)

## Sprint Planning Notes
[Sprint Planning Notes For Phase 1](https://docs.google.com/document/d/1q7eatA6GpOcHOXkSIqnTkPcHaBq6XO4dyp4ps58LC04/edit?usp=sharing)

## Steps to run the program
```
git clone --recursive https://github.com/dahhmani/Collection-Robot.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app

```

