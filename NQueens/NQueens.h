//
// Created by 郑巍 on 2020/1/10.
//

#ifndef LEETCODE_NQUEENS_H
#define LEETCODE_NQUEENS_H

#include <iostream>
#include <vector>

class NQueens {
public:
    std::vector<std::vector<std::string>> solveNQueens(int n);
private:
    void solveNQueens(std::vector<std::vector<std::string>>& res, std::vector<std::string>& nQueens, std::vector<int>& flag,
            int row, int& n);
};


#endif //LEETCODE_NQUEENS_H
