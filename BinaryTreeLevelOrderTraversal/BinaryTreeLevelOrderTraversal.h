//
// Created by 郑巍 on 2020/3/26.
//

#ifndef LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H
#define LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class BinaryTreeLevelOrderTraversal {
public:
    std::vector<std::vector<int>> levelOrder(TreeNode* root);
};


#endif //LEETCODE_BINARYTREELEVELORDERTRAVERSAL_H
