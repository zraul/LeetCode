//
// Created by 郑巍 on 2020/4/3.
//

#include "PascalsTriangleII.h"

std::vector<int> PascalsTriangleII::getRow(int rowIndex) {
    std::vector<int> result(rowIndex + 1);
    result[0] = 1;
    for (int i = 0; i <= rowIndex; ++i) {
        for (int j = i; j > 0; --j) {
            result[j] = result[j] + result[j-1];
        }
    }

    return result;
}