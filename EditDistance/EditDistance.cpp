//
// Created by 郑巍 on 2020/3/13.
//

#include "EditDistance.h"

int EditDistance::minDistance(std::string word1, std::string word2) {
    int m = word1.size(), n = word2.size(), pre;
    std::vector<int> cur(n + 1, 0);
    for (int j = 1; j <= n; j++) {
        cur[j] = j;
    }
    for (int i = 1; i <= m; i++) {
        pre = cur[0];
        cur[0] = i;
        for (int j = 1; j <= n; j++) {
            int temp = cur[j];
            if (word1[i - 1] == word2[j - 1]) {
                cur[j] = pre;
            } else {
                cur[j] = std::min(pre, std::min(cur[j - 1], cur[j])) + 1;
            }
            pre = temp;
        }
    }
    return cur[n];
}