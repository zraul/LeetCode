//
// Created by 郑巍 on 2020/4/9.
//

#include "SumRootToLeafNumbers.h"

int SumRootToLeafNumbers::sumNumbers(TreeNode *root) {
    if (!root) {
        return 0;
    }

    int sum = 0;
    dfs(root, 0, sum);
    return sum;
}

void SumRootToLeafNumbers::dfs(TreeNode* node, int currentSum, int& sum) {
    currentSum = currentSum * 10 + node->val;
    if (!node->left && !node->right) {
        sum += currentSum;
    }

    if (node->left) {
        dfs(node->left, currentSum, sum);
    }

    if (node->right) {
        dfs(node->right, currentSum, sum);
    }
}