#include <iostream>
#include "IsKPeriodic.h"

int main()
{
    std::cout << "Test 1 (abcabcabc, K=3): " << IsKPeriodic("abcabcabc", 3) << std::endl;
    std::cout << "Test 2 (abcabcabd, K=3): " << IsKPeriodic("abcabcabd", 3) << std::endl;
    std::cout << "Test 3 (aaaaaa, K=1): " << IsKPeriodic("aaaaaa", 1) << std::endl;
    std::cout << "Test 4 (abc, K=5): " << IsKPeriodic("abc", 5) << std::endl;
    std::cout << "Test 5 (abcdabcd, K=4): " << IsKPeriodic("abcdabcd", 4) << std::endl;

    return 0;
}