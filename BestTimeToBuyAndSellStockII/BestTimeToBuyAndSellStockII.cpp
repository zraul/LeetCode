//
// Created by 郑巍 on 2020/4/7.
//

#include "BestTimeToBuyAndSellStockII.h"

int BestTimeToBuyAndSellStockII::maxProfit(std::vector<int> &prices) {
    int ret = 0;
    for (int i = 1; i < prices.size(); ++i) {
        ret += std::max(prices[i] - prices[i - 1], 0);
    }

    return ret;
}