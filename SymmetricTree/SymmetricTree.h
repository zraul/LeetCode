//
// Created by 郑巍 on 2020/3/26.
//

#ifndef LEETCODE_SYMMETRICTREE_H
#define LEETCODE_SYMMETRICTREE_H

#include <iostream>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class SymmetricTree {
public:
    bool isSymmetric(TreeNode* root);
private:
    bool isSymmetric(TreeNode* p, TreeNode* q);
};


#endif //LEETCODE_SYMMETRICTREE_H
