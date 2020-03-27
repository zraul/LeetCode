//
// Created by 郑巍 on 2020/3/27.
//

#include "MaximumDepthofBinaryTree.h"

int MaximumDepthofBinaryTree::maxDepth(TreeNode *root) {
    return root == NULL ? 0 : std::max(maxDepth(root -> left), maxDepth(root -> right)) + 1;
}