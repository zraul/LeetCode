//
// Created by 郑巍 on 2019/12/20.
//

#ifndef LEETCODE_PERMUTATIONS_H
#define LEETCODE_PERMUTATIONS_H

#include <iostream>
#include <vector>

class Permutations {
public:
    std::vector<std::vector<int>> permute(std::vector<int>& nums);

private:
    void permutation(std::vector<int>& num, int begin, std::vector<std::vector<int>>& result);
};


#endif //LEETCODE_PERMUTATIONS_H
