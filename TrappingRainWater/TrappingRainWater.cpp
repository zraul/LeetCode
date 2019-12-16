//
// Created by 郑巍 on 2019/12/10.
//

#include "TrappingRainWater.h"

int TrappingRainWater::trap(std::vector<int> &height) {
    int l = 0;
    int r = height.size()-1;
    int level = 0;
    int water = 0;

    while (l < r) {
        int lower = height[height[l] < height[r] ? l++ : r--];
        level = std::max(level, lower);
        water += level - lower;
    }

    return water;
}