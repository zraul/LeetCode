//
// Created by 郑巍 on 2020/3/6.
//

#include "SpiralMatrixII.h"

std::vector<std::vector<int>> SpiralMatrixII::generateMatrix(int n) {
    std::vector<std::vector<int>> res(n, std::vector<int>(n));
    int rowstart = 0, rowend = n - 1;
    int colstart = 0, colend = n - 1;
    int cnt = 1;
    while (rowstart <= rowend && colstart <= colend) {
        for (int i = colstart; i <= colend; ++i) {
            res[rowstart][i] = cnt++;
        }
        rowstart++;

        for (int j = rowstart; j <= rowend; ++j) {
            res[j][colend] = cnt++;
        }
        colend--;

        for (int k = colend; k >= colstart; --k) {
            res[rowend][k] = cnt++;
        }
        rowend--;

        for (int l = rowend; l >= rowstart; --l) {
            res[l][colstart] = cnt++;
        }
        colstart++;
    }

    return res;
}