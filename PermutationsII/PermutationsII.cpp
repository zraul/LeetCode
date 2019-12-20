//
// Created by 郑巍 on 2019/12/20.
//

#include "PermutationsII.h"

std::vector<std::vector<int>> PermutationsII::permuteUnique(std::vector<int> &nums) {
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int> >res;
    recursion(nums, 0, nums.size(), res);
    return res;
}

void PermutationsII::recursion(std::vector<int> nums, int i, int j, std::vector<std::vector<int>> &res) {
    if (i == j-1) {
        res.push_back(nums);
        return;
    }
    for (int k = i; k < j; k++) {
        if (i != k && nums[i] == nums[k]) {
            continue;
        }
        std::swap(nums[i], nums[k]);
        recursion(nums, i+1, j, res);
    }
}