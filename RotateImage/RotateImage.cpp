//
// Created by 郑巍 on 2019/12/31.
//

#include "RotateImage.h"

void RotateImage::rotate(std::vector<std::vector<int>> &matrix) {
    std::reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = i + 1; j < matrix[i].size(); j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}