//
// Created by 郑巍 on 2020/4/1.
//

#ifndef LEETCODE_PATHSUM_H
#define LEETCODE_PATHSUM_H

#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class PathSum {
public:
    bool hasPathSum(TreeNode* root, int sum);
};


#endif //LEETCODE_PATHSUM_H
