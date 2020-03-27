//
// Created by 郑巍 on 2020/3/27.
//

#include "ConstructBinaryTreeFromPreorderAndInorderTraversal.h"

TreeNode* ConstructBinaryTreeFromPreorderAndInorderTraversal::buildTree(std::vector<int> &preorder,
                                                                        std::vector<int> &inorder) {
    return builTreeHelper(preorder,0,preorder.size(),inorder,0,inorder.size());
}

TreeNode* ConstructBinaryTreeFromPreorderAndInorderTraversal::builTreeHelper(std::vector<int>& preorder, int sp, int ep, std::vector<int>& inorder, int si, int ei) {
    if (sp == ep) {
        return nullptr;
    }

     TreeNode* root = new TreeNode(preorder[sp]);

    int dis = find(inorder.begin()+si,inorder.begin()+ei,preorder[sp]) - inorder.begin() - si;

    root->left = builTreeHelper(preorder,sp+1,sp+1+dis,inorder,si,si+dis);
    root->right = builTreeHelper(preorder,sp+1+dis,ep,inorder,si+dis+1,ei);

    return root;
}