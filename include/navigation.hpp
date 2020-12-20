/**
 * @file navigation.hpp
 * @author Ajinkya Parwekar
 * @author Karan Sutradhar
 * @author Mahmoud Dahmani
 * @brief The navigation.hpp file for Indoor Sports Court Ball Collection Robot
 * project. It contains Collection class methods definitions.
 * @Copyright "Copyright 2020" <Ajinkya Parwekar>
 * @Copyright "Copyright 2020" <Karan Sutradhar>
 * @Copyright "Copyright 2020" <Mahmoud Dahmani>
 *
 * @section LICENSE
 *
 * MIT License
 * Copyright (c) 2020 Ajinkya Parwekar, Karan Sutradhar, Mahmoud Dahmani
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#pragma once

#include <iostream>

#include "avoidance.hpp"
#include "detection.hpp"
#include "geometry_msgs/Twist.h"
#include "ros/ros.h"

class Navigation {
 private:
  // Communication with the ROS system
  ros::NodeHandle nh;

  // Inilalize variable to store if object is detected
  ros::Publisher velocity;

  // msg variable that handles robot speeds
  geometry_msgs::Twist move;

  // Defining linear velocity in x direction
  float xVelLin;

  // Defining angular velocity in z direction
  float zVelAng;

  // Defining variables to store previous velocities
  float prevVelLin, prevVelAng;

  // Defining publishing rate
  const int pubRate = 450;

 public:
  /**
   * @brief Base Constructor for the Navigation class.
   * @param None.
   * @return None.
   */
  Navigation();
  /**
   * @brief Base Constructor for the Navigation class.
   * @param Linear velocity
   * @param Angular velocity
   * @return None.
   */
  Navigation(float velLin, float velAng);
  /**
   * @brief   Make the Robot move ahead
   * @param   linear velocity in x direction
   * @return  linear velocity of the robot
   */
  float moveAhead(float velLin);
  /**
   * @brief   change the direction
   * @param   angular velocity in z direction
   * @return  angular velocity for the robot
   */
  float turnDirection(float velAng);
  /**
   * @brief   Controling the motion of the robot
   * @param   none
   * @return  none
   */
  void robotMovement(Avoidance& avoidanceObj);
  /**
   * @brief   reset velocity of the robot
   * @param   none
   * @return  returns true, otherwise false
   */
  bool resetRobotVelocity();
  /**
   * @brief  checks if there is any modification in velocity
   * @param  none
   * @return true if changed, otherwise false
   */
  bool checkChangeInVelocity();
  /**
   * @brief Destructor for the Navigation class.
   * @param None.
   * @return None.
   */
  ~Navigation();
};
