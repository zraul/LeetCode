//
// Created by 郑巍 on 2020/3/10.
//

#include "UniquePathsII.h"

int UniquePathsII::uniquePathsWithObstacles(std::vector<std::vector<int>> &obstacleGrid) {
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    std::vector<long> cur(m, 0);

    for (int i = 0; i < m; ++i) {
        if (!obstacleGrid[i][0]) {
            cur[i] = 1;
        } else {
            break;
        }
    }

    for (int j = 1; j < n; ++j) {
        bool flag = false;
        if (obstacleGrid[0][j]) {
            cur[0] = 0;
        } else {
            flag = true;
        }

        for (int i = 1; i < m; i++) {
            if (!obstacleGrid[i][j]) {
                cur[i] += cur[i - 1];
                if (cur[i]) {
                    flag = true;
                }
            } else {
                cur[i] = 0;
            }
        }

        if (!flag) {
            return 0;
        }
    }

    return cur[m - 1];
}