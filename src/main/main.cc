#include <iostream>
#include "src/lib/solution.h"
#include <vector>

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;

    std::vector<int> testList = {12, 4, 5, 7, 9, 10, 4, 21, 2};
    
    std::cout << "list: " << solution.PrintList(testList) << std::endl;
    std::cout << "Median = " << solution.FindMedian(testList) << std::endl;
    std::cout << "list: " << solution.PrintList(testList) << std::endl;

    return EXIT_SUCCESS;
}