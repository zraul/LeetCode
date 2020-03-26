//
// Created by 郑巍 on 2020/3/26.
//

#include "SameTree.h"

bool SameTree::isSameTree(TreeNode *p, TreeNode *q) {
    if (p == NULL || q == NULL) {
        return p == q;
    }

    return (p->val == q->val && isSameTree(p->left, q->left)) && isSameTree(p->right, q->right);
}