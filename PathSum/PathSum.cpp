//
// Created by 郑巍 on 2020/4/1.
//

#include "PathSum.h"

bool PathSum::hasPathSum(TreeNode *root, int sum) {
    if (root == NULL) {
        return false;
    }

    if (root->val == sum && root->left == NULL && root->right == NULL) {
        return true;
    }

    return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
}