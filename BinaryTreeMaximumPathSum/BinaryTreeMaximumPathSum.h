//
// Created by 郑巍 on 2020/4/8.
//

#ifndef LEETCODE_BINARYTREEMAXIMUMPATHSUM_H
#define LEETCODE_BINARYTREEMAXIMUMPATHSUM_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class BinaryTreeMaximumPathSum {
public:
    int maxPathSum(TreeNode* root);

private:
    int help(TreeNode* root, int& sum);
};


#endif //LEETCODE_BINARYTREEMAXIMUMPATHSUM_H
