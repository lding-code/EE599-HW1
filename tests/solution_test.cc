#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include <iostream>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;

  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****\nMy Name is Lei\nMy major is EE\n";
  
  EXPECT_EQ(expected, actual);
}

// Solution::FindMedian Test1: same numbers 
TEST(FindMedianShould0, ReturnFindMedian0) {
  Solution solution;

  std::vector<int> list = {2,2,2};

  double actual = solution.FindMedian(list);
  double expected = 2;

  EXPECT_EQ(expected, actual);
}

// Solution::FindMedian Test2: even number of elements 
TEST(FindMedianShould1, ReturnFindMedian1) {
  Solution solution;

  std::vector<int> list = {5, 3, 9, 7};

  double actual = solution.FindMedian(list);
  double expected = 6;

  EXPECT_EQ(expected, actual);
}

// Solution::FindMEdian Test3: odd number of elements 
TEST(FindMedianShould2, ReturnFindMedian2) {
  Solution solution;

  std::vector<int> list = {5, 3, 9, 7, 2};

  double actual = solution.FindMedian(list);
  double expected = 5;

  EXPECT_EQ(expected, actual);
}

// Solution::FindMEdian Test4: involving negative numbers
TEST(FindMedianShould3, ReturnFindMedian3) {
  Solution solution;

  std::vector<int> list = {-4, -2, 0, 2};

  double actual = solution.FindMedian(list);
  double expected = -1;

  EXPECT_EQ(expected, actual);
}

// Solution::FindMEdian Test5: one more with negative numbers
TEST(FindMedianShould4, ReturnFindMedian4) {
  Solution solution;

  std::vector<int> list = {-4, -2, 0, 2, 1};

  double actual = solution.FindMedian(list);
  double expected = 0;

  EXPECT_EQ(expected, actual);
}

// Solution::Factorial Test1: n = -2
TEST(FactorialShould0, ReturnFactorial0) {
  Solution solution;

  int actual = solution.Factorial(-2);
  int expected = -1;

  EXPECT_EQ(expected, actual);
}

// Solution::Factorial Test2: n = 0
TEST(FactorialShould1, ReturnFactorial1) {
  Solution solution;

  int actual = solution.Factorial(0);
  int expected = 0;

  EXPECT_EQ(expected, actual);
}

// Solution::Factorial Test3: n = 1
TEST(FactorialShould2, ReturnFactorial2) {
  Solution solution;

  int actual = solution.Factorial(1);
  int expected = 1;

  EXPECT_EQ(expected, actual);
}

// Solution::Factorial Test4: n = 3
TEST(FactorialShould3, ReturnFactorial3) {
  Solution solution;

  int actual = solution.Factorial(3);
  int expected = 6;

  EXPECT_EQ(expected, actual);
}

// Solution::FactorialRec Test1: n = -2
TEST(FactorialRecShould0, ReturnFactorialRec0) {
  Solution solution;

  int actual = solution.FactorialRec(-2);
  int expected = -1;

  EXPECT_EQ(expected, actual);
}

// Solution::FactorialRec Test2: n = 0
TEST(FactorialRecShould1, ReturnFactorialRec1) {
  Solution solution;

  int actual = solution.FactorialRec(0);
  int expected = 0;

  EXPECT_EQ(expected, actual);
}

// Solution::FactorialRec Test3: n = 1
TEST(FactorialRecShould2, ReturnFactorialRec2) {
  Solution solution;

  int actual = solution.FactorialRec(1);
  int expected = 1;

  EXPECT_EQ(expected, actual);
}

// Solution::FactorialRec Test4: n = 3
TEST(FactorialRecShould3, ReturnFactorialRec3) {
  Solution solution;

  int actual = solution.FactorialRec(3);
  int expected = 6;

  EXPECT_EQ(expected, actual);
}