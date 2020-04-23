//
// Created by 郑巍 on 2020/4/23.
//

#include "MaximumProductSubarray.h"

int MaximumProductSubarray::maxProduct(vector<int> &nums) {
    int frontProduct = 1;
    int backProduct = 1;
    int ans = INT_MIN;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        frontProduct *= nums[i];
        backProduct *= nums[n - i - 1];
        ans = std::max(ans, std::max(frontProduct, backProduct));
        frontProduct = frontProduct == 0 ? 1 : frontProduct;
        backProduct = backProduct == 0 ? 1 : backProduct;
    }

    return ans;
}