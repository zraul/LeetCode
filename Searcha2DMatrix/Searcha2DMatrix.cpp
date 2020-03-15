//
// Created by 郑巍 on 2020/3/14.
//

#include "Searcha2DMatrix.h"

bool Searcha2DMatrix::searchMatrix(std::vector<std::vector<int> > &matrix, int target) {
    if (matrix.empty() || matrix[0].empty()) {
        return false;
    }

    int m = matrix.size(), n = matrix[0].size();
    int start = 0, end = m * n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        int e = matrix[mid / n][mid % n];
        if (target < e) {
            end = mid -1;
        } else if (target > e) {
            start = mid + 1;
        } else {
            return true;
        }
    }

    return false;
}