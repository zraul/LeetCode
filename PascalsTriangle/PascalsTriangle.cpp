//
// Created by 郑巍 on 2020/4/3.
//

#include "PascalsTriangle.h"

std::vector<std::vector<int>> PascalsTriangle::generate(int numRows) {
    std::vector<std::vector<int>> result(numRows);

    for (int i = 0; i < numRows; ++i) {
        result[i].resize(i + 1);
        result[i][0] = result[i][i] = 1;

        for (int j = 1; j < i; ++j) {
            result[i][j] = result[i-1][j-1] + result[i-1][j];
        }
    }

    return result;
}