//
// Created by 郑巍 on 2019/12/20.
//

#ifndef LEETCODE_PERMUTATIONSII_H
#define LEETCODE_PERMUTATIONSII_H

#include <vector>
#include <iostream>

class PermutationsII {
public:
    std::vector<std::vector<int>> permuteUnique(std::vector<int>& nums);

private:
    void recursion(std::vector<int> nums, int i, int j, std::vector<std::vector<int>>& res);
};


#endif //LEETCODE_PERMUTATIONSII_H
