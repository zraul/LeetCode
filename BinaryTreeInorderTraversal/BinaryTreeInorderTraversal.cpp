//
// Created by 郑巍 on 2020/3/24.
//

#include "BinaryTreeInorderTraversal.h"

std::vector<int> BinaryTreeInorderTraversal::inorderTraversal(TreeNode *root) {
    std::vector<int> vec;
    std::stack<TreeNode *> sta;
    TreeNode* pcur = root;

    while (!sta.empty() || pcur) {
        if (pcur) {
            sta.push(pcur);
            pcur = pcur->left;
        } else {
            TreeNode *node = sta.top();
            vec.push_back(node->val);
            sta.pop();
            pcur = node->right;
        }
    }

    return vec;
}