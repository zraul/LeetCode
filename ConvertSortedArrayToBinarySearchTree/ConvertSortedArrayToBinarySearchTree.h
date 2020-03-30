//
// Created by 郑巍 on 2020/3/30.
//

#ifndef LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
#define LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H

#include <iostream>
#include <vector>
#include <queue>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class ConvertSortedArrayToBinarySearchTree {
public:
    TreeNode* sorterArrayToBST(std::vector<int>& nums);
};


#endif //LEETCODE_CONVERTSORTEDARRAYTOBINARYSEARCHTREE_H
