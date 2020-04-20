//
// Created by 郑巍 on 2020/4/20.
//

#ifndef LEETCODE_BINARYTREEPREORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEPREORDERTRAVERSAL_H

#include <iostream>
#include <vector>
#include <stack>

using std::vector;
using std::stack;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class BinaryTreePreorderTraversal {
public:
    vector<int> preorderTraversal(TreeNode *root);
};


#endif //LEETCODE_BINARYTREEPREORDERTRAVERSAL_H
