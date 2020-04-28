//
// Created by 郑巍 on 2020/4/27.
//

#include "FindMinimumInRotatedSortedArrayII.h"

int FindMinimumInRotatedSortedArrayII::findMin(vector<int> &nums) {
    int l = 0;
    int r = nums.size() - 1;

    while (l < r) {
        int m = l + (r - l) / 2;
        if (nums[m] > nums[r]) {
            l = m + 1;
        } else if (nums[m] < nums[r]) {
            r = m;
        } else {
            r--;
        }
    }

    return nums[l];
}