//
// Created by 郑巍 on 2020/3/20.
//

#include "GrayCode.h"

std::vector<int> GrayCode::grayCode(int n) {
    std::vector<int> ans(1<<n);
    for (int i = 0; i < (1<<n); ++i) {
        ans[i] = i ^ (i>>1);
    }

    return ans;
}