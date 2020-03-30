//
// Created by 郑巍 on 2020/3/30.
//

#include "ConvertSortedArrayToBinarySearchTree.h"

TreeNode* ConvertSortedArrayToBinarySearchTree::sorterArrayToBST(std::vector<int> &nums) {
    if (nums.size() == 0) {
        return NULL;
    }

    if (nums.size() == 1) {
        return new TreeNode(nums[0]);
    }

    int middle = nums.size() / 2;
    TreeNode* root = new TreeNode(nums[middle]);
    std::vector<int> leftInts(nums.begin(), nums.begin() + middle);
    std::vector<int> rightInts(nums.begin() + middle + 1, nums.end());

    root->left = sorterArrayToBST(leftInts);
    root->right = sorterArrayToBST(rightInts);

    return root;
}