//
// Created by 郑巍 on 2020/4/9.
//

#ifndef LEETCODE_SUMROOTTOLEAFNUMBERS_H
#define LEETCODE_SUMROOTTOLEAFNUMBERS_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class SumRootToLeafNumbers {
public:
    int sumNumbers(TreeNode* root);
private:
    void dfs(TreeNode* node, int currentSum, int &sum);
};


#endif //LEETCODE_SUMROOTTOLEAFNUMBERS_H
