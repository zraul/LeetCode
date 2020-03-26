//
// Created by 郑巍 on 2020/3/26.
//

#ifndef LEETCODE_SAMETREE_H
#define LEETCODE_SAMETREE_H

#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class SameTree {
public:
    bool isSameTree(TreeNode* p, TreeNode* q);
};


#endif //LEETCODE_SAMETREE_H
