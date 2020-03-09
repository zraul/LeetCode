//
// Created by 郑巍 on 2020/3/9.
//

#include "PermutationSequence.h"

std::string PermutationSequence::getPermutation(int n, int k) {
    int i, j, f = 1;
    std::string s(n, '0');
    for (i = 1; i <= n; i++) {
        f *= i;
        s[i-1] += i;
    }

    for (i = 0, k--; i < n; i++) {
        f /= n - i;
        j = i + k / f;
        char c = s[j];
        for (; j > i; j--) {
            s[j] = s[j - 1];
        }
        k %= f;
        s[i] = c;
    }

    return s;
}