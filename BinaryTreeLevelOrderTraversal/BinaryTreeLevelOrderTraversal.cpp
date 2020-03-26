//
// Created by 郑巍 on 2020/3/26.
//

#include "BinaryTreeLevelOrderTraversal.h"

std::vector<std::vector<int>> BinaryTreeLevelOrderTraversal::levelOrder(TreeNode *root) {
    std::vector<std::vector<int>> result;
    if (root == NULL) {
        return result;
    }
    std::queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);

    std::vector<int> cur_vec;
    while (!q.empty()) {
        TreeNode* t = q.front();
        q.pop();
        if (t == NULL) {
            result.push_back(cur_vec);
            cur_vec.resize(0);
            if (q.size() > 0) {
                q.push(NULL);
            }
        } else {
            cur_vec.push_back(t->val);
            if (t->left) {
                q.push(t->left);
            }

            if (t->right) {
                q.push(t->right);
            }
        }
    }

    return result;
}