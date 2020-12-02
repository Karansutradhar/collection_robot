/**
 * @file coloredobjects.cpp
 * @author Ajinkya Parwekar: Driver
 * @author Karan Sutradhar: Navigator
 * @author Mahmoud Dahmani: Design Keeper
 * @brief The coloredobjects.cpp file for Indoor Sports Court Ball Collection Robot project.
 * It contains ColoredObjects class methods implementations.
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


#include "coloredobjects.hpp"

  /**
   * @brief Base Constructor for the ColoredObjects class.
   * @param None.
   * @return None.
   */

  ColoredObjects::ColoredObjects() {
	  objectColor = 0;
  }

  /**
   * @brief Constructor for the ColoredObjects class with one argument
   * @param double objectColorIn.
   * @return None.
   */

  ColoredObjects::ColoredObjects(int objectColorIn) {
    objectColor = objectColorIn;
  }

  /**
   * @brief Function to set the value of objectColor attribute.
   * @param int objectColorIn.
   * @return None.
   */

	void ColoredObjects::setObjectColor(int objectColorIn) {
		objectColor = objectColorIn;
	}

  /**
   * @brief Function to get the value of objectColor attribute.
   * @param None.
   * @return double objectColor.
   */

	int ColoredObjects::getObjectColor() {
		return objectColor;
	}

  /**
   * @brief Function to add the objects to the objects list.
   * @param None.
   * @return None.
   */

	double ColoredObjects::adding() {
    // stub implementation
		return 0;
	}

  /**
   * @brief Function to remove the objects to the objects list.
   * @param None.
   * @return None.
   */

	double ColoredObjects::removing() {
    // stub implementation
		return 0;
	}

  /**
   * @brief Destructor for the ColoredObjects class.
   * @param None.
   * @return None.
   */

	ColoredObjects::~ColoredObjects() {
	}
