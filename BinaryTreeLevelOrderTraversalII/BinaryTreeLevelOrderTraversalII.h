//
// Created by 郑巍 on 2020/3/30.
//

#ifndef LEETCODE_BINARYTREELEVELORDERTRAVERSALII_H
#define LEETCODE_BINARYTREELEVELORDERTRAVERSALII_H

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class BinaryTreeLevelOrderTraversalII {
public:
    std::vector<std::vector<int>> levelOrderBottom(TreeNode* root);
};


#endif //LEETCODE_BINARYTREELEVELORDERTRAVERSALII_H
