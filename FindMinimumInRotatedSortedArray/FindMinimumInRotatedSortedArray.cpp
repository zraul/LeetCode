//
// Created by 郑巍 on 2020/4/23.
//

#include "FindMinimumInRotatedSortedArray.h"

int FindMinimumInRotatedSortedArray::findMin(vector<int> &nums) {
    int start = 0;
    int end = nums.size() - 1;

    while (start < end) {
        if (nums[start] < nums[end]) {
            return nums[start];
        }

        int mid = (start + end) / 2;
        if (nums[mid] >= nums[start]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return nums[start];
}