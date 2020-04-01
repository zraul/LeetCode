//
// Created by 郑巍 on 2020/3/31.
//

#ifndef LEETCODE_MINIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_MINIMUMDEPTHOFBINARYTREE_H

#include <iostream>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class MinimumDepthOfBinaryTree {
public:
    int minDepth(TreeNode* root);
};


#endif //LEETCODE_MINIMUMDEPTHOFBINARYTREE_H
