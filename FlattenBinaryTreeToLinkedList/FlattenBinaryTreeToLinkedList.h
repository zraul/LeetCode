//
// Created by 郑巍 on 2020/4/1.
//

#ifndef LEETCODE_FLATTENBINARYTREETOLINKEDLIST_H
#define LEETCODE_FLATTENBINARYTREETOLINKEDLIST_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class FlattenBinaryTreeToLinkedList {
public:
    void flatten(TreeNode* root);
};


#endif //LEETCODE_FLATTENBINARYTREETOLINKEDLIST_H
