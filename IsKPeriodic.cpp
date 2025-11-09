#include "IsKPeriodic.h"

bool IsKPeriodic(const std::string& str, int K)
{
    if (K <= 0 || str.empty() || str.length() % K != 0)
        return false;

    if (str.length() == K)
        return true;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] != str[i % K])
            return false;
    }

    return true;
}
