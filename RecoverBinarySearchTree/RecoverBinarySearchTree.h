//
// Created by 郑巍 on 2020/3/25.
//

#ifndef LEETCODE_RECOVERBINARYSEARCHTREE_H
#define LEETCODE_RECOVERBINARYSEARCHTREE_H

#include <iostream>


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class RecoverBinarySearchTree {
public:
    void recoverTree(TreeNode* root);
private:
    TreeNode* first = NULL;
    TreeNode* second = NULL;
    TreeNode* prev = NULL;
    long preVal = LONG_MIN;
    void help(TreeNode* root);
};


#endif //LEETCODE_RECOVERBINARYSEARCHTREE_H
