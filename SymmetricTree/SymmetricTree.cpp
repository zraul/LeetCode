//
// Created by 郑巍 on 2020/3/26.
//

#include "SymmetricTree.h"

bool SymmetricTree::isSymmetric(TreeNode *root) {
    if (root == NULL) {
        return true;
    }

    return isSymmetric(root->left, root->right);
}

bool SymmetricTree::isSymmetric(TreeNode *p, TreeNode *q) {
    if (!p && !q) {
        return true;
    } else if (!p || !q) {
        return false;
    }

    if (p->val != q->val) {
        return false;
    }

    return isSymmetric(p->left, q->right) && isSymmetric(p->right, q->left);
}