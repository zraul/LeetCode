//
// Created by 郑巍 on 2020/3/24.
//

#ifndef LEETCODE_UNIQUEBINARYSEARCHTREESII_H
#define LEETCODE_UNIQUEBINARYSEARCHTREESII_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class UniqueBinarySearchTreesII {
public:
    std::vector<TreeNode *> generateTrees(int n);
private:
    std::vector<TreeNode *> generateTrees(int start, int end);
};


#endif //LEETCODE_UNIQUEBINARYSEARCHTREESII_H
