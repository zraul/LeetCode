//
// Created by 郑巍 on 2020/3/25.
//

#include "ValidateBinarySearchTree.h"

bool ValidateBinarySearchTree::isValidBST(TreeNode *root) {
    TreeNode* prev = NULL;
    return validate(root, prev);
}

bool ValidateBinarySearchTree::validate(TreeNode *node, TreeNode *&prev) {
    if (node == NULL) {
        return true;
    }

    if (!validate(node->left, prev)) {
        return false;
    }

    if (prev != NULL && prev->val >= node->val) {
        return false;
    }
    prev = node;
    return validate(node->right, prev);
}