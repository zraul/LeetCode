//
// Created by 郑巍 on 2020/3/4.
//

#include "SprialMatrix.h"

std::vector<int> SprialMatrix::sprialOrder(std::vector<std::vector<int>> &matrix) {
    if (matrix.empty() || matrix[0].empty()) {
        return {};
    }

    std::vector<int> res;
    int m = matrix.size();
    int n = matrix[0].size();

    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    while (true) {
        for (int i = left; i <= right; i++) {
            res.push_back(matrix[top][i]);
        }
        if (++top > bottom) {
            break;
        }

        for (int i = top; i <= bottom; i++) {
            res.push_back(matrix[i][right]);
        }
        if (--right < left) {
            break;
        }

        for (int i = right; i >= left; i--) {
            res.push_back(matrix[bottom][i]);
        }
        if (--bottom < top) {
            break;
        }

        for (int i = bottom; i >= top; i--) {
            res.push_back(matrix[i][left]);
        }
        if (++left > right) {
            break;
        }
    }

    return res;
}