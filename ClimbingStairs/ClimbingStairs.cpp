//
// Created by 郑巍 on 2020/3/12.
//

#include "ClimbingStairs.h"

int ClimbingStairs::climbStairs(int n) {
    int stepone = 1;
    int steptwo = 0;
    int ret = 0;
    for (int i =0; i < n; i++) {
        ret = stepone + steptwo;
        steptwo = stepone;
        stepone = ret;
    }

    return ret;
}