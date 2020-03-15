//
// Created by 郑巍 on 2020/3/15.
//

#include "Combinations.h"

std::vector<std::vector<int>> Combinations::combine(int n, int k) {
    std::vector<std::vector<int>> res;
    int i = 0 ;
    std::vector<int> p(k, 0);
    while (i >= 0) {
        p[i]++;
        if (p[i] > n) {
            --i;
        } else if (i == k - 1) {
            res.push_back(p);
        } else {
            i++;
            p[i] = p[i - 1];
        }
    }

    return res;
}