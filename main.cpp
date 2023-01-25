#include "IsKPeriodic.h"
#include <iostream>

int main()
{
    std::string str = "abcabcabcabc";
    int k = 3;

    std::cout << str << " multiplicity " << k << " : " << (IsKPeriodic(str, k) ? "true" : "false") << std::endl;

    return 0;
}