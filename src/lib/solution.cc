#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::FindMin(std::vector<int> &inputs) {
  if (inputs.size == 0) {
    return -1;
  }
  else {
    int minNumber = INT32_MAX;
    for(auto n : inputs) {
      if (n < minNumber) {
        minNumber = n;
      }
    }
    return minNumber;
  }
}

int Solution::FindMax(std::vector<int> &inputs) {
  if (inputs.size == 0) {
    return -1;
  }
  else {
    int maxNumber = INT32_MIN;
    for (auto n : inputs) {
      if (n > maxNumber) {
        maxNumber = n;
      }
    }
    return maxNumber;
  }
}

int Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.ize == 0) {
    return -1;
  }
  else {
    for ()
  }
}