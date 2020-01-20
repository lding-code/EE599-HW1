#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;

    std::vector<int> testList = {12, 4, 5, 7, 9, 10, 4, 21, 2};
    
    std::cout << "Min = " << solution.Min(testList);

    return EXIT_SUCCESS;
}