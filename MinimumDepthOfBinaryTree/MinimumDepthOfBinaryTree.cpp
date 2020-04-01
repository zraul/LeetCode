//
// Created by 郑巍 on 2020/3/31.
//

#include "MinimumDepthOfBinaryTree.h"

int MinimumDepthOfBinaryTree::minDepth(TreeNode *root) {
    if (root == NULL) {
        return 0;
    }

    std::queue<TreeNode*> q;
    q.push(root);
    int i = 0;
    while (!q.empty()) {
        i++;
        int k = q.size();
        for (int j = 0; j < k; ++j) {
            TreeNode* r = q.front();
            if (r->left) {
                q.push(r->left);
            }

            if (r->right) {
                q.push(r->right);
            }

            q.pop();
            if (r->left == NULL && r->right == NULL) {
                return i;
            }
        }
    }
}