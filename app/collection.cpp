/**
 * @file collection.cpp
 * @author Ajinkya Parwekar: Driver
 * @author Karan Sutradhar: Navigator
 * @author Mahmoud Dahmani: Design Keeper
 * @brief The collection.cpp file for Indoor Sports Court Ball Collection Robot project.
 * It contains Collection class methods implementations.
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
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */


#include "collection.hpp"

  /**
   * @brief Base Constructor for the Collection class.
   * @param None.
   * @return None.
   */

  Collection::Collection() {
	  range = 0;
  }

  /**
   * @brief Constructor for the Collection class with one argument
   * @param double rangeIn.
   * @return None.
   */

  Collection::Collection(double rangeIn) {
	  range = rangeIn;
  }

  /**
   * @brief Function to set the value of range attribute.
   * @param double rangeIn.
   * @return None.
   */

  void Collection::setRange(double rangeIn) {
	  range = rangeIn;
  }

  /**
   * @brief Function to get the value of range attribute.
   * @param None.
   * @return double range.
   */

  double Collection::getRange() {
  	  return range;
  }

  /**
   * @brief Function to check the collection ability of an object.
   * @param None.
   * @return collection ability as boolean true or false.
   */

  bool Collection::collectionAbility() {
	  return false;
  }

  /**
   * @brief Function to collect an object.
   * @param None.
   * @return None.
   */

  double Collection::collect() {
	  return 0;
  }

  /**
   * @brief Destructor for the Collection class.
   * @param None.
   * @return None.
   */

  Collection::~Collection() {
  }
