#include <iostream>
#include "src/lib/solution.h"
#include <vector>

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;

    std::vector<int> testList = {12, 4, 5, 7, 9, 10, 4, 21, 2};
    
    std::cout << "Original list: " << solution.PrintList(testList) << std::endl;
    std::cout << "Median = " << solution.FindMedian(testList) << std::endl;
    std::cout << "Sorted list:   " << solution.PrintList(testList) << std::endl;

    int n = 6;

    std::cout << "Factorial(" << n << ") = " << solution.Factorial(n) << std::endl;
    std::cout << "FactorialRec(" << n << ") = " << solution.FactorialRec(n) << std::endl;

    return EXIT_SUCCESS;
}