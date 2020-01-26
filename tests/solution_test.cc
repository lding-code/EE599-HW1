#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>
#include <iostream>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;

  std::vector<int> list1 = {2,2,2};
  std::vector<int> list2 = {5, 3, 9, 7};
  std::vector<int> list3 = {5, 3, 9, 7, 2};
  std::vector<int> list4 = {-4, -2, 0, 2};
  std::vector<int> list5 = {-4, -2, 0, 2, 1};

  std::string actual0 = solution.PrintHelloWorld();
  std::string expected0 = "**** Hello World ****";
  
  EXPECT_EQ(expected0, actual0);

  double actual1 = solution.FindMedian(list1);
  double expected1 = 2;

  EXPECT_EQ(expected1, actual1);

  double actual2 = solution.FindMedian(list2);
  double expected2 = 6;

  EXPECT_EQ(expected2, actual2);

  std::cout << solution.PrintList(list3) << std::endl;

  double actual3 = solution.FindMedian(list3);
  double expected3 = 5;

  EXPECT_EQ(expected3, actual3);

  double actual4 = solution.FindMedian(list4);
  double expected4 = -1;

  EXPECT_EQ(expected4, actual4);

  double actual5 = solution.FindMedian(list5);
  double expected5 = 0;

  EXPECT_EQ(expected5, actual5);
}