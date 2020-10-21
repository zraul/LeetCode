//
// Created by 郑巍 on 2020/4/29.
//

#include "TwoSumII.h"

vector<int> TwoSumII::twoSum(vector<int> &numbers, int target) {
    int l = 0;
    int r = numbers.size() - 1;
    vector<int> res;
    while (l < r) {
        if (numbers[l] + numbers[r] == target) {
            res.push_back(l + 1);
            res.push_back(r + 1);
            return res;
        } else if (numbers[l] + numbers[r] > target) {
            r--;
        } else {
            l++;
        }
    }

    return res;
}