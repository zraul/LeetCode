//
// Created by 郑巍 on 2019/12/16.
//

#include "JumpGame2.h"

int JumpGame2::jump(std::vector<int> &nums) {
    int n = nums.size();
    int step = 0;
    int start = 0;
    int end = 0;

    while (end < n - 1) {
        step++;
        int maxend = end + 1;
        for (int i = start; i <= end; i++) {
            if (i + nums[i] >= n - 1) {
                return step;
            }
            maxend = std::max(maxend, i + nums[i]);
        }
        start = end + 1;
        end = maxend;
    }

    return step;
}