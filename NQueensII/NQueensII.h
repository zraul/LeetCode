//
// Created by 郑巍 on 2020/3/4.
//

#ifndef LEETCODE_NQUEENSII_H
#define LEETCODE_NQUEENSII_H

#include <iostream>
#include <vector>

class NQueensII {
public:
    int totalNQueens(int n);
    int bitTotalNQueens(int n);
private:
    void dfs(int i, std::vector<int> &row, std::vector<bool> &col, std::vector<bool> &main, std::vector<bool> &anti, int &count);
    void dfs(int n, int row, int col, int ld, int rd, int& count);
};


#endif //LEETCODE_NQUEENSII_H
