//
// Created by 郑巍 on 2020/4/7.
//

#include "BestTimeToBuyAndSellStock.h"

int BestTimeToBuyAndSellStock::maxProfit(std::vector<int> &prices) {
    int maxPro = 0;
    int minPrice = INT_MAX;

    for (int i = 0; i < prices.size(); ++i) {
        minPrice = std::min(minPrice, prices[i]);
        maxPro = std::max(maxPro, prices[i] - minPrice);
    }

    return maxPro;
}