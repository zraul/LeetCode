//
// Created by 郑巍 on 2020/3/16.
//

#include "SearchInRotatedSortedArrayII.h"

bool SearchInRotatedSortedArrayII::search(std::vector<int> &nums, int target) {
    int left = 0, right = nums.size() - 1, mid;

    while (left <= right) {
        mid = (left + right) >> 1;
        if (nums[mid] == target) {
            return true;
        }

        if ((nums[left] == nums[mid]) && (nums[right] == nums[mid])) {
            left++;
            right--;
        } else if (nums[left] <= nums[mid]) {
            if ((nums[left] <= target) && (nums[mid] > target)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else {
            if ((nums[mid] < target) && (nums[right] >= target)) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }

    return false;
}