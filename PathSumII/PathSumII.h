//
// Created by 郑巍 on 2020/4/1.
//

#ifndef LEETCODE_PATHSUMII_H
#define LEETCODE_PATHSUMII_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL) {}
};

class PathSumII {
public:
    std::vector<std::vector<int>> pathSum(TreeNode* root, int sum);

private:
    void help(TreeNode* root, int sum, std::vector<std::vector<int>>& result, std::vector<int> soluttion);
};


#endif //LEETCODE_PATHSUMII_H
