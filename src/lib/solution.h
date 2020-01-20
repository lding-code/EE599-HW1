#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <iostream>

class Solution {
public:
  std::string PrintHelloWorld();
  int Min(std::vector<int> &inputs);
  int Max(std::vector<int> &inputs);
  std::vector<int> Sort(std::vector<int> &inputs);
  double FindMedian(std::vector<int> &inputs);
  std::string PrintList(std::vector<int> &inputs);
};

#endif