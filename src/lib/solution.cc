#include "solution.h"

#include <string>
#include <vector>
#include <iostream>

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****\nMy Name is Lei\nMy major is EE\n"; 
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
    return (sortedInputs[sortedInputs.size() / 2 - 1] + sortedInputs[sortedInputs.size() / 2]) / 2;
  }
  // if the number of elements is odd
  else {
    // return the midle number of the list
    return sortedInputs[(sortedInputs.size() - 1) / 2];
  }
}

std::string Solution::PrintList(std::vector <int> &inputs) {
  std::string listStr= "";
  for (auto n : inputs) {
    listStr += std::to_string(n);
    listStr += ", ";
  }
  listStr.pop_back();
  listStr.pop_back();
  return listStr;
}

int Solution::Factorial(int n) {
  if (n < 0) {
    return -1;
  }
  else if (n == 0) {
    return 0;
  }
  else {
    int m = n;
    for (n--; n > 0; n--) {
      m *= n;
    }
    return m;
  }
}

int Solution::FactorialRec(int n) {
  if (n < 0) {
    return -1;
  }
  else if (n == 0) {
    return 0;
  }
  else if (n > 1) {
      return n * FactorialRec(n  -1);
  }
  else {
      return 1;
  }
}