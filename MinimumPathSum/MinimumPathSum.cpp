//
// Created by 郑巍 on 2020/3/10.
//

#include "MinimumPathSum.h"

int MinimumPathSum::minPathSum(std::vector<std::vector<int>> &grid) {
    int m = grid.size();
    int n = grid[0].size();

    std::vector<int> cur(m, grid[0][0]);
    for (int i = 1; i < m; ++i) {
        cur[i] = cur[i - 1] + grid[i][0];
    }

    for (int j = 1; j < n; ++j) {
        cur[0] += grid[0][j];
        for (int i = 1; i < m; i++) {
            cur[i] = std::min(cur[i - 1], cur[i]) + grid[i][j];
        }
    }

    return cur[m-1];
}

//int MinimumPathSum::minPathSum(std::vector<std::vector<int>>& grid) {
//    int m = grid.size();
//    int n = grid[0].size();
//    std::vector<std::vector<int> > sum(m, std::vector<int>(n, grid[0][0]));
//    for (int i = 1; i < m; i++)
//        sum[i][0] = sum[i - 1][0] + grid[i][0];
//    for (int j = 1; j < n; j++)
//        sum[0][j] = sum[0][j - 1] + grid[0][j];
//    for (int i = 1; i < m; i++)
//        for (int j = 1; j < n; j++)
//            sum[i][j]  = std::min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];
//    return sum[m - 1][n - 1];
//}