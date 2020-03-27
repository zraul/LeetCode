//
// Created by 郑巍 on 2020/3/27.
//

#ifndef LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
#define LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class MaximumDepthofBinaryTree {
public:
    int maxDepth(TreeNode* root);
};


#endif //LEETCODE_MAXIMUMDEPTHOFBINARYTREE_H
