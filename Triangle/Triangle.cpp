//
// Created by 郑巍 on 2020/4/3.
//

#include "Triangle.h"

int Triangle::minimumTotal(std::vector<std::vector<int>> &triangle) {
    int n = triangle.size();
    std::vector<int> minlen(triangle.back());
    for (int i = n-2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            minlen[j] = std::min(minlen[j], minlen[j+1]) + triangle[i][j];
        }
    }

    return minlen[0];
}