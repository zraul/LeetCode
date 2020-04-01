//
// Created by 郑巍 on 2020/3/31.
//

#include "BalancedBinaryTree.h"

bool BalancedBinaryTree::isBalanced(TreeNode *root) {
    return dfsHeight(root) != -1;
}

int BalancedBinaryTree::dfsHeight(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = dfsHeight(root->left);
    if (leftHeight == -1) {
        return -1;
    }

    int rightHeight = dfsHeight(root->right);
    if (rightHeight == -1) {
        return -1;
    }

    if (std::abs(leftHeight - rightHeight) > 1) {
        return -1;
    }

    return std::max(leftHeight, rightHeight) + 1;
}