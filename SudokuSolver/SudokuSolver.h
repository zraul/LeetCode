//
// Created by 郑巍 on 2019/12/4.
//

#ifndef LEETCODE_SUDOKUSOLVER_H
#define LEETCODE_SUDOKUSOLVER_H

#include <array>
#include <vector>
#include <bitset>

class SudokuSolver {
    struct cell
    {
        uint8_t value;
        uint8_t numPossibilities;
        std::bitset<10> constraints;
        cell():value(0), numPossibilities(9), constraints() {};
    };
    std::array<std::array<cell, 9>, 9> cells;
    std::vector<std::pair<int, int>> bt;

    bool set(int i, int j, int v);
    bool updateConstraints(int i, int j, int excludedValue);
    bool findValuesForEmptyCells();
    bool backtrack(int k);

public:
    void solveSudoku(std::vector<std::vector<char>>& board);
};


#endif //LEETCODE_SUDOKUSOLVER_H
