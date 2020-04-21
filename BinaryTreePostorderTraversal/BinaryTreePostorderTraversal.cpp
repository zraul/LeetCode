//
// Created by 郑巍 on 2020/4/21.
//

#include "BinaryTreePostorderTraversal.h"

vector<int> BinaryTreePostorderTraversal::postorderTraversal(TreeNode *root) {
    vector<int> nodes;
    stack<TreeNode*> tree;

    TreeNode* last = NULL;
    while (root || !tree.empty()) {
        if (root) {
            tree.push(root);
            root = root->left;
        } else {
            TreeNode *node = tree.top();
            if (node->right && last != node->right) {
                root = node->right;
            } else {
                nodes.push_back(node->val);
                last = node;
                tree.pop();
            }
        }
    }

    return nodes;
}