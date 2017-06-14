//
// Created by 郑巍 on 2017/4/28.
//

#include "ReverseInteger.h"

int reverse(int x)
{
    long long res = 0;
    while (x)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }

    return res;
}