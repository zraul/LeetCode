//
// Created by 郑巍 on 2020/4/16.
//

#include "SingleNumberII.h"

int SingleNumberII::singleNumber(std::vector<int> &nums) {
    int seenOnce = 0;
    int seenTwice = 0;

    for (int num: nums) {
        seenOnce = ~seenTwice & (seenOnce ^ num);
        seenTwice = ~seenOnce & (seenTwice ^ num);
    }

    return seenOnce;
}