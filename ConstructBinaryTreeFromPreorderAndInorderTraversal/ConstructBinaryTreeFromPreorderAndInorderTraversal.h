//
// Created by 郑巍 on 2020/3/27.
//

#ifndef LEETCODE_CONSTRUCTBINARYTREEFROMPREORDERANDINORDERTRAVERSAL_H
#define LEETCODE_CONSTRUCTBINARYTREEFROMPREORDERANDINORDERTRAVERSAL_H

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class ConstructBinaryTreeFromPreorderAndInorderTraversal {
public:
    TreeNode* buildTree(std::vector<int>& preorder, std::vector<int>& inorder);

private:
    TreeNode* builTreeHelper(std::vector<int>& preorder, int sp, int ep, std::vector<int>& inorder, int si, int ei);
};


#endif //LEETCODE_CONSTRUCTBINARYTREEFROMPREORDERANDINORDERTRAVERSAL_H
