//
// Created by 郑巍 on 2019/12/20.
//

#include "Permutations.h"

std::vector<std::vector<int>> Permutations::permute(std::vector<int> &nums) {
    std::vector<std::vector<int>> result;
    permutation(nums, 0, result);
    return result;
}

void Permutations::permutation(std::vector<int> &num, int begin, std::vector<std::vector<int>> &result) {
    if (begin >= num.size()) {
        result.push_back(num);
        return;
    }

    for (int i = begin; i < num.size(); i++) {
        std::swap(num[begin], num[i]);
        permutation(num, begin + 1, result);
        std::swap(num[begin], num[i]);
    }
}