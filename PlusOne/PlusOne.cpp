//
// Created by 郑巍 on 2020/3/11.
//

#include "PlusOne.h"

std::vector<int> PlusOne::plusOne(std::vector<int> &digits) {
    for (int i = digits.size(); i--; digits[i] = 0) {
        if (digits[i]++ < 9) {
            return digits;
        }
    }

    digits[0]++;
    digits.push_back(0);
    return digits;
}