//
// Created by 郑巍 on 2020/3/24.
//

#ifndef LEETCODE_BINARYTREEINORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEINORDERTRAVERSAL_H

#include <iostream>
#include <vector>
#include <stack>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class BinaryTreeInorderTraversal {
public:
    std::vector<int> inorderTraversal(TreeNode* root);
};


#endif //LEETCODE_BINARYTREEINORDERTRAVERSAL_H
