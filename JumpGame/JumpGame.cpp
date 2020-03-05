//
// Created by 郑巍 on 2020/3/5.
//

#include "JumpGame.h"

bool JumpGame::canJump(std::vector<int> &nums) {
    int k = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (i > k) {
            return false;
        }

        k = std::max(k, i + nums[i]);
    }

    return true;
}