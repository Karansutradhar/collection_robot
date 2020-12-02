#include <gtest/gtest.h>
#include "navigation.hpp"
#include "detection.hpp"
#include "collection.hpp"
#include "coloredobjects.hpp"

TEST(Test1, collectionAbilityFunctionTest) {
  Collection collectionObj;
  EXPECT_EQ(false, collectionObj.collectionAbility());
}

TEST(Test1, collectFunctionTest) {
  Collection collectionObj;
  EXPECT_EQ(0, collectionObj.collect());
}

TEST(Test1, addingFunctionTest) {
  ColoredObjects coloredObjectsObj;
  EXPECT_EQ(0, coloredObjectsObj.adding());
}

TEST(Test1, removingFunctionTest) {
  ColoredObjects coloredObjectsObj;
  EXPECT_EQ(0, coloredObjectsObj.removing());
}

TEST(Test1, exploreFunctionTest) {
  Navigation navigationObj;
  EXPECT_EQ(0, navigationObj.explore());
}

TEST(Test1, goToColorFunctionTest) {
  Navigation navigationObj;
  EXPECT_EQ(0, navigationObj.goToColor());
}

TEST(Test2, paramGetTest) {
  Detection detectionObj;
  Collection collectionObj;
  ColoredObjects coloredObjectsObj;
  EXPECT_EQ(0, collectionObj.getRange());
  EXPECT_EQ(0, coloredObjectsObj.getObjectColor());
  EXPECT_EQ(0, detectionObj.getCorrectnessLevel());
}

TEST(Test2, paramSetTest) {
  Detection detectionObj(1);
  Collection collectionObj(2);
  ColoredObjects coloredObjectsObj(3);
  EXPECT_EQ(2, collectionObj.getRange());
  EXPECT_EQ(3, coloredObjectsObj.getObjectColor());
  EXPECT_EQ(1, detectionObj.getCorrectnessLevel());
}
