//
// Created by 郑巍 on 2019/12/9.
//

#include "CombinationSum.h"

std::vector<std::vector<int>> CombinationSum::combinationSum(std::vector<int> &candidates, int target) {
    std::sort(candidates.begin(), candidates.end());
    std::vector<std::vector<int>> res;
    std::vector<int> combinationsum;
    this->combinationsum(candidates, target, res, combinationsum, 0);
    return res;
 }

void CombinationSum::combinationsum(std::vector<int> &candidates, int target, std::vector<std::vector<int>> &res,
                                    std::vector<int> &combination, int begin) {
    if (!target) {
        res.push_back(combination);
        return;
    }

    for (int i = begin; i != candidates.size() && target >= candidates[i] ; ++i) {
        if (i == begin || candidates[i] != candidates[i - 1]) {
            combination.push_back(candidates[i]);
            // 数字可重复
//            combinationsum(candidates, target - candidates[i], res, combination, i);
            // 数字不可重复
            combinationsum(candidates, target - candidates[i], res, combination, i + 1);
            combination.pop_back();
        }
    }
}


std::vector<std::vector<int>> CombinationSum::combinationSum2(std::vector<int> &candidates, int target) {
    std::sort(candidates.begin(), candidates.end());
    this->candidates = candidates;
    dfs(0, target);

    return this->res;
}

void CombinationSum::dfs(int start, int target) {
    if (target == 0) {
        this->res.push_back(path);
        return;
    }

    for (int i = start; i < this->candidates.size() && target - this->candidates[i] >= 0; ++i) {
        this->path.push_back(this->candidates[i]);
        dfs(i + 1, target - this->candidates[i]);
        this->path.pop_back();
    }
}