//
// Created by 郑巍 on 2020/3/27.
//

#include "BinaryTreeZigzagLevelOrderTraversal.h"

std::vector<std::vector<int>> BinaryTreeZigzagLevelOrderTraversal::zigzagLevelOrder(TreeNode *root) {
    std::vector<std::vector<int>> result;
    if (root == NULL) {
        return result;
    }


    std::queue<TreeNode*> nodesQueue;
    nodesQueue.push(root);
    bool left2Right = true;

    while (!nodesQueue.empty()) {
        int size = nodesQueue.size();
        std::vector<int> row(size);
        for (int i = 0; i < size; ++i) {
            TreeNode* node = nodesQueue.front();
            nodesQueue.pop();

            int index = (left2Right) ? i : (size - 1 - i);
            row[index] = node->val;
            if (node->left) {
                nodesQueue.push(node->left);
            }

            if (node->right) {
                nodesQueue.push(node->right);
            }
        }
        left2Right = !left2Right;
        result.push_back(row);
    }

    return result;
}