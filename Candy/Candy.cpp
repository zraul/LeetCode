//
// Created by 郑巍 on 2020/4/15.
//

#include "Candy.h"

int Candy::candy(std::vector<int> &ratings) {
    int size = ratings.size();
    if (size <= 1) {
        return size;
    }

    std::vector<int> num(size, 1);
    for (int i = 1; i < size; ++i) {
        if (ratings[i] > ratings[i - 1]) {
            num[i] = num[i - 1] + 1;
        }
    }

    for (int i = size - 1; i > 0; --i) {
        if (ratings[i - 1] > ratings[i]) {
            num[i - 1] = std::max(num[i] + 1, num[i - 1]);
        }
    }

    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += num[i];
    }

    return result;
}