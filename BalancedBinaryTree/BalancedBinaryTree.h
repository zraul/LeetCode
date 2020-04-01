//
// Created by 郑巍 on 2020/3/31.
//

#ifndef LEETCODE_BALANCEDBINARYTREE_H
#define LEETCODE_BALANCEDBINARYTREE_H

#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class BalancedBinaryTree {
public:
    bool isBalanced(TreeNode* root);

private:
    int dfsHeight(TreeNode* root);
};


#endif //LEETCODE_BALANCEDBINARYTREE_H
