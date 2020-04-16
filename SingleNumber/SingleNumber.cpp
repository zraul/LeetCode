//
// Created by 郑巍 on 2020/4/16.
//

#include "SingleNumber.h"

int SingleNumber::singleNumber(std::vector<int> &nums) {
    int result = 0;
    for (int i = 0; i < nums.size(); ++i) {
        result ^= nums[i];
    }

    return result;
}