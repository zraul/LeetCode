//
// Created by 郑巍 on 2020/4/1.
//

#include "PathSumII.h"

std::vector<std::vector<int>> PathSumII::pathSum(TreeNode *root, int sum) {
    std::vector<std::vector<int>> result;
    std::vector<int> solution;
    help(root, sum, result, solution);
    return result;
}

void PathSumII::help(TreeNode *root, int sum, std::vector<std::vector<int>> &result, std::vector<int> soluttion) {
    if (root == NULL) {
        return;
    }

    if (!root->left && !root->right && root->val == sum) {
        soluttion.push_back(root->val);
        result.push_back(soluttion);
        return;
    }

    soluttion.push_back(root->val);
    if (root->left) {
        help(root->left, sum-root->val, result, soluttion);
    }

    if (root->right) {
        help(root->right, sum-root->val, result, soluttion);
    }
}