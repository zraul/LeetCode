//
// Created by 郑巍 on 2020/3/4.
//

#include "MaximumSubarray.h"

int MaximumSubarray::maxSubArray(std::vector<int> &nums) {
    if (nums.size() == 0) {
        return 0;
    }
    int res = INT_MIN;
    int f_n = 0;
    for (int i = 0; i < nums.size(); i++) {
        f_n = std::max(nums[i], f_n + nums[i]);
        res = std::max(f_n, res);
    }

    return res;
}