//
// Created by 郑巍 on 2020/4/8.
//

#include "BinaryTreeMaximumPathSum.h"

int BinaryTreeMaximumPathSum::maxPathSum(TreeNode *root) {
    int sum = INT_MIN;
    help(root, sum);
    return sum;
}

int BinaryTreeMaximumPathSum::help(TreeNode *root, int& sum) {
    if (!root) {
        return 0;
    }

    int left = std::max(0, help(root->left, sum));
    int right = std::max(0, help(root->right, sum));

    sum = std::max(sum, left + right + root->val) ;
    return std::max(left, right) + root->val;
}