//
// Created by 郑巍 on 2019/12/4.
//

#include "ValidSudoku.h"
#include <iostream>

bool ValidSudoku::isValidSudoku(std::vector<std::vector<char>> &board)
{
    std::array<std::set<char>, 9> row;
    std::array<std::set<char>, 9> col;
    std::array<std::array<std::set<char>, 3>, 3> sub;

    for (int i = 0; i < 9; ++i)
    {
        for (int j = 0; j < 9; ++j)
        {
            char c = board[i][j];
            if (c == '.')
            {
                continue;
            }

            if (!row[i].emplace(c).second)
            {
                return false;
            }

            if (!col[j].emplace(c).second)
            {
                return false;
            }

            if (!sub[i/3][j/3].emplace(c).second)
            {
                return false;
            }
        }
    }

    return true;
}