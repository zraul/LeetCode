//
// Created by 郑巍 on 2020/4/21.
//

#ifndef LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H

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

class BinaryTreePostorderTraversal {
public:
    vector<int> postorderTraversal(TreeNode *root);
};


#endif //LEETCODE_BINARYTREEPOSTORDERTRAVERSAL_H
