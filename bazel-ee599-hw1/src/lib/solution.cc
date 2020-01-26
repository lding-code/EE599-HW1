#include "solution.h"

#include <string>
#include <vector>
#include <iostream>

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Min(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
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
  
int Solution::Max(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
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

std::vector<int> Solution::Sort(std::vector<int> &inputs) {
  int temp = 0;
  for (int i = 1; i < inputs.size(); i++) {
    for (int j = i; j > 0; j--) {
      if (inputs[j] > inputs[j - 1]) {
        break;
      }
      else {
        temp = inputs[j];
        inputs[j] = inputs[j - 1];
        inputs[j - 1] = temp;
      }
    }
  }
  return inputs;
}

double Solution::FindMedian(std::vector<int> &inputs) {
  std::vector<int> sortedInputs = Sort(inputs);
  // if the number of elements is even (median is the average of the two middle numbers)
  if (sortedInputs.size() % 2 == 0) {
    // return average of the two middle numbers
    return (sortedInputs[sortedInputs.size() / 2] + sortedInputs[sortedInputs.size() / 2 + 1]) / 2;
  }
  // if the number of elements is odd
  else {
    // return the midle number of the list
    return sortedInputs[(sortedInputs.size() + 1) / 2];
  }
}

std::string display(std::vector <int> &inputs) {
  std::string listStr= "";
  for (auto n : inputs) {
    listStr += std::to_string(n);
  }
  return listStr;
}