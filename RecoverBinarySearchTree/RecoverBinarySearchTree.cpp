//
// Created by 郑巍 on 2020/3/25.
//

#include "RecoverBinarySearchTree.h"

void RecoverBinarySearchTree::recoverTree(TreeNode *root) {
    help(root);
    std::swap(first->val, second->val);
}

void RecoverBinarySearchTree::help(TreeNode *root) {
    if(root==NULL)  {
        return;
    }
    help(root->left);

    if(first==NULL && preVal >= root->val) {
        first=prev;
    }
    if(first!=NULL && preVal >= root->val) {
        second=root;
    }
    prev=root;
    preVal = prev->val;
    help(root->right);
}