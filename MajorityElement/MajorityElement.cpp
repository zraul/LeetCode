//
// Created by 郑巍 on 2020/10/21.
//

#include "MajorityElement.h"

int MajorityElement::majorityElement(std::vector<int> &nums) {
    int majority = 0;
    for (unsigned int i = 0, mask = 1; i < 32; i++, mask <<= 1) {
        int bits = 0;
        for (int num: nums) {
            if (num & mask) {
                bits++;
            }
        }
        if (bits > nums.size() / 2) {
            majority |= mask;
        }
    }

    return majority;
}