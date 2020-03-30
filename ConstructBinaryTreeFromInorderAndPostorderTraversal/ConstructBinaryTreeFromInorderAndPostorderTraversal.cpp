//
// Created by 郑巍 on 2020/3/30.
//

#include "ConstructBinaryTreeFromInorderAndPostorderTraversal.h"

TreeNode* ConstructBinaryTreeFromInorderAndPostorderTraversal::buildTree(std::vector<int> &inorder,
                                                                         std::vector<int> &postorder) {
    return create(inorder, postorder, 0, inorder.size() - 1, 0, postorder.size() - 1);
}


TreeNode* ConstructBinaryTreeFromInorderAndPostorderTraversal::create(std::vector<int> &inorder,
                                                                      std::vector<int> &postorder, int is, int ie,
                                                                      int ps, int pe) {
    if (ps > pe) {
        return NULL;
    }

    TreeNode* node = new TreeNode(postorder[pe]);
    int pos;
    for (int i = is; i <= ie; ++i) {
        if (inorder[i] == node->val) {
            pos = i;
            break;
        }
    }

    node->left = create(inorder, postorder, is, pos- 1, ps, ps + pos - is - 1);
    node->right = create(inorder, postorder, pos + 1, ie, pe - ie + pos, pe - 1);

    return node;
}