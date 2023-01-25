#pragma once
#include <string>


bool IsKPeriodic(std::string& str, int k)
{
    if (k <= 0 || str.size() % k != 0 || k == (int)str.size())
        return false;

    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j < (int)str.size() / k; j++)
        {
            if (str[i] != str[i + k * j])
                return false;
        }
    }

    return true;
}