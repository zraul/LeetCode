//
// Created by 郑巍 on 2020/3/30.
//

#include "BinaryTreeLevelOrderTraversalII.h"

std::vector<std::vector<int>> BinaryTreeLevelOrderTraversalII::levelOrderBottom(TreeNode *root) {
    std::vector<std::vector<int>> result;
    if (root == NULL) {
        return result;
    }

    std::queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int l = q.size();
        std::vector<int> curlayer;

        for (int i = 0; i < l; ++i) {
            TreeNode* cur = q.front();
            q.pop();
            curlayer.push_back(cur->val);
            if (cur->left != NULL) {
                q.push(cur->left);
            }

            if (cur->right != NULL) {
                q.push(cur->right);
            }
        }

        result.push_back(curlayer);
    }

    std::reverse(result.begin(), result.end());
    return result;
}