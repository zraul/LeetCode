//
// Created by 郑巍 on 2019/12/9.
//

#ifndef LEETCODE_COMBINATIONSUM_H
#define LEETCODE_COMBINATIONSUM_H


#include <vector>

class CombinationSum {
public:
    std::vector<std::vector<int>> combinationSum(std::vector<int>& candidates, int target);
    std::vector<std::vector<int>> combinationSum2(std::vector<int>& candidates, int target);
private:
    std::vector<int> candidates;
    std::vector<std::vector<int>> res;
    std::vector<int> path;
    void combinationsum(std::vector<int>& candidates, int target, std::vector<std::vector<int>>& res, std::vector<int>& combination, int begin);
    void dfs(int start, int target);
};


#endif //LEETCODE_COMBINATIONSUM_H
