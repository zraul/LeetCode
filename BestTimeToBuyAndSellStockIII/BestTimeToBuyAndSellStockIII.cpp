//
// Created by 郑巍 on 2020/4/7.
//

#include "BestTimeToBuyAndSellStockIII.h"

int BestTimeToBuyAndSellStockIII::maxProfit(std::vector<int> &prices) {
    int b1 = INT_MIN, s1 = 0, b2 = INT_MIN, s2 = 0;
    for (int p:prices) {
        b1 = std::max(b1, -p);
        s1 = std::max(s1, b1 + p);
        b2 = std::max(b2, s1 - p);
        s2 = std::max(s2, b2 + p);
    }

    return s2;
}