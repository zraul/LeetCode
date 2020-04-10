//
// Created by 郑巍 on 2020/4/10.
//

#ifndef LEETCODE_SURROUNDEDREGIONS_H
#define LEETCODE_SURROUNDEDREGIONS_H

#include <iostream>
#include <vector>

class SurroundedRegions {
public:
    void solve(std::vector<std::vector<char>>& board);

private:
    void check(std::vector<std::vector<char>>& vec, int i, int j, int row, int col);
};


#endif //LEETCODE_SURROUNDEDREGIONS_H
