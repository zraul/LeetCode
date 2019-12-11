//
// Created by 郑巍 on 2019/12/10.
//

#include "TrappingRainWater.h"

int TrappingRainWater::trap(std::vector<int> &height) {
    auto l = height.begin();
    auto r = height.end() - 1;
    int level = 0;
    int water = 0;

    while (l != r + 1) {
        int lower = *l < *r ? *l++ : *r--;
        level = std::max(level, lower);
        water += level - lower;
    }

    return water;
}