/**
 * @file test.cpp
 * @author Ajinkya Parwekar: Driver
 * @author Karan Sutradhar: Navigator
 * @author Mahmoud Dahmani: Design Keeper
 * @brief The test.cpp file for Indoor Sports Court Ball Collection Robot project.
 * It contains unit test cases for all the class moethods.
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


#include <gtest/gtest.h>
#include "navigation.hpp"
#include "detection.hpp"
#include "collection.hpp"
#include "coloredobjects.hpp"

/**
 * @brief This test checks if the collectionAbility function works as expected
 * @param Test1 is the name of the group of tests
 * @param collectionAbilityFunctionTest is the specific name to check the collectionAbility function
 */

TEST(Test1, collectionAbilityFunctionTest) {
  Collection collectionObj;
  EXPECT_EQ(false, collectionObj.collectionAbility());
}

/**
 * @brief This test checks if the collect function works as expected
 * @param Test1 is the name of the group of tests
 * @param collectFunctionTest is the specific name to check the collect function
 */

TEST(Test1, collectFunctionTest) {
  Collection collectionObj;
  EXPECT_EQ(0, collectionObj.collect());
}

/**
 * @brief This test checks if the adding function works as expected
 * @param Test1 is the name of the group of tests
 * @param addingFunctionTest is the specific name to check the adding function
 */

TEST(Test1, addingFunctionTest) {
  ColoredObjects coloredObjectsObj;
  EXPECT_EQ(0, coloredObjectsObj.adding());
}

/**
 * @brief This test checks if the removing function works as expected
 * @param Test1 is the name of the group of tests
 * @param removingFunctionTest is the specific name to check the removing function
 */

TEST(Test1, removingFunctionTest) {
  ColoredObjects coloredObjectsObj;
  EXPECT_EQ(0, coloredObjectsObj.removing());
}

/**
 * @brief This test checks if the explore function works as expected
 * @param Test1 is the name of the group of tests
 * @param exploreFunctionTest is the specific name to check the explore function
 */

TEST(Test1, exploreFunctionTest) {
  Navigation navigationObj;
  EXPECT_EQ(0, navigationObj.explore());
}

/**
 * @brief This test checks if the goToColor function works as expected
 * @param Test1 is the name of the group of tests
 * @param goToColorFunctionTest is the specific name to check the goToColor function
 */

TEST(Test1, goToColorFunctionTest) {
  Navigation navigationObj;
  EXPECT_EQ(0, navigationObj.goToColor());
}

/**
 * @brief This test checks getter functions in all the classes
 * @param Test2 is the name of the group of tests
 * @param paramGetTest is the specific name to check the getter functions
 */

TEST(Test2, paramGetTest) {
  Detection detectionObj;
  Collection collectionObj;
  ColoredObjects coloredObjectsObj;
  EXPECT_EQ(0, collectionObj.getRange());
  EXPECT_EQ(0, coloredObjectsObj.getObjectColor());
  EXPECT_EQ(0, detectionObj.getCorrectnessLevel());
}

/**
 * @brief This test checks setter functions in all the classes
 * @param Test2 is the name of the group of tests
 * @param paramSetTest is the specific name to check the setter functions
 */

TEST(Test2, paramSetTest) {
  Detection detectionObj(1);
  Collection collectionObj(2);
  ColoredObjects coloredObjectsObj(3);
  EXPECT_EQ(2, collectionObj.getRange());
  EXPECT_EQ(3, coloredObjectsObj.getObjectColor());
  EXPECT_EQ(1, detectionObj.getCorrectnessLevel());
}
