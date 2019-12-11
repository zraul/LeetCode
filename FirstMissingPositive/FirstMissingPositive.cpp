//
// Created by 郑巍 on 2019/12/10.
//

#include "FirstMissingPositive.h"
#include <iostream>

int FirstMissingPositive::firstMissingPositive(std::vector<int> &nums) {
    for (int i = 0; i < nums.size(); ++i) {
        std::cout<<nums[nums[i] - 1]<<std::endl;
        while (nums[i] > 0 && nums[i] <= nums.size() && nums[nums[i] - 1] != nums[i]) {
            std::swap(nums[i], nums[nums[i] - 1]);
        }
    }

    for (int j = 0; j < nums.size(); ++j) {
        if (nums[j] != j + 1) {
            return j + 1;
        }
    }

    return nums.size() + 1;
}