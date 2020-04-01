//
// Created by 郑巍 on 2020/4/1.
//

#include "FlattenBinaryTreeToLinkedList.h"

void FlattenBinaryTreeToLinkedList::flatten(TreeNode *root) {
    TreeNode* tmp = root;
    while (tmp) {
        if (tmp->left) {
            TreeNode* pre = tmp->left;
            while (pre->right) {
                pre = pre->right;
            }

            pre->right = tmp->right;
            tmp->right = tmp->left;
            tmp->left = NULL;
        }

        tmp = tmp->right;
    }
}