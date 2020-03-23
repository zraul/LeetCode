//
// Created by 郑巍 on 2020/3/23.
//

#include "DecodeWays.h"

int DecodeWays::numDecodings(std::string s) {
    int p1 = 1, p2, n = s.size();
    for (int i = n-1; i >= 0; --i) {
        int cur = s[i] == '0' ? 0:p1;
        if (i < n - 1 && ((s[i] == '1' || s[i] == '2') && s[i + 1] < '7')) {
            cur += p2;
        }
        p2 = p1;
        p1 = cur;
    }

    return s.empty() ? 0 : p1;
}