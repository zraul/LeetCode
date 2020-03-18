//
// Created by 郑巍 on 2020/3/16.
//

#include "RemoveDuplicatesII.h"

int RemoveDuplicatesII::removeDuplicates(std::vector<int> &nums) {
    int i = 0;
    for (int n:nums) {
        if (i < 2 || n > nums[i - 2]) {
            nums[i++] = n;
        }
    }

    return i;
}