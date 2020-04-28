//
// Created by 郑巍 on 2020/4/28.
//

#include "MaximumGap.h"

int MaximumGap::maximumGap(vector<int> &nums) {
    int n = nums.size();
    if (n < 2) {
        return 0;
    }
    std::sort(nums.begin(), nums.end());
    int max = INT_MIN;
    int cur_max;
    for (int i = 0; i < n - 1; i++) {
        cur_max = nums[i + 1] - nums[i];
        if (max < cur_max) {
            max = cur_max;
        }
    }

    return max;
}