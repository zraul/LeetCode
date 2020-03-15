//
// Created by 郑巍 on 2020/3/15.
//

#include "Subsets.h"

std::vector<std::vector<int>> Subsets::subsets(std::vector<int> &nums) {
    int n = nums.size();
    int p = 1 << n;
    std::vector<std::vector<int>> subs(p);
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < n; ++j) {
            if ((i >> j) & 1) {
                subs[i].push_back(nums[j]);
            }
        }
    }

    return subs;
}