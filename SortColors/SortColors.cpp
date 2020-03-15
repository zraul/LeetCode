//
// Created by 郑巍 on 2020/3/14.
//

#include "SortColors.h"

void SortColors::sortColors(std::vector<int> &nums) {
    int r = 0, w = 0, b = 0;
    for (int num:nums) {
        if (num == 0) {
            nums[b++] = 2;
            nums[w++] = 1;
            nums[r++] = 0;
        } else if (num == 1) {
            nums[b++] = 2;
            nums[w++] = 1;
        }else if (num == 2) {
            b++;
        }
    }
}