//
// Created by 郑巍 on 2020/3/27.
//

#ifndef LEETCODE_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H
#define LEETCODE_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class BinaryTreeZigzagLevelOrderTraversal {
public:
    std::vector<std::vector<int>> zigzagLevelOrder(TreeNode* root);
};


#endif //LEETCODE_BINARYTREEZIGZAGLEVELORDERTRAVERSAL_H
