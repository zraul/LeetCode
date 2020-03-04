//
// Created by 郑巍 on 2020/1/9.
//

#include "Powxn.h"

double Powxn::myPow(double x, int n) {
    if (n == 0) {
        return 1;
    }

    if (n < 0) {
        n = -n;
        x = 1/x;
    }

    return (n % 2 == 0) ? myPow(x * x, n / 2) : x * myPow(x * x, n / 2);
}