//
// Created by 郑巍 on 2020/3/30.
//

#ifndef LEETCODE_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H
#define LEETCODE_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class ConstructBinaryTreeFromInorderAndPostorderTraversal {
public:
    TreeNode* buildTree(std::vector<int>& inorder, std::vector<int>& postorder);

private:
    TreeNode* create(std::vector<int>& inorder, std::vector<int>& postorder, int is, int ie, int ps, int pe);
};


#endif //LEETCODE_CONSTRUCTBINARYTREEFROMINORDERANDPOSTORDERTRAVERSAL_H
