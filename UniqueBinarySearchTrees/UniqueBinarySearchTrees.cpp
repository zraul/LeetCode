//
// Created by 郑巍 on 2020/3/24.
//

#include "UniqueBinarySearchTrees.h"

int UniqueBinarySearchTrees::numTrees(int n) {
    std::vector<int> f;
    f.push_back(1);

       for (int i = 1; i <= n; ++i) {
        int t = 0;
        for (int j = 0; j < i; ++j) {
            t += f[j] * f[i-j-1];
        }
        f.push_back(t);
    }

    return f.back();
}