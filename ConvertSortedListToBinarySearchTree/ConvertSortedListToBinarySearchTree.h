//
// Created by 郑巍 on 2020/3/31.
//

#ifndef LEETCODE_CONVERTSORTEDLISTTOBINARYSEARCHTREE_H
#define LEETCODE_CONVERTSORTEDLISTTOBINARYSEARCHTREE_H

#include <iostream>
#include <vector>
#include <queue>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(NULL) {}
};

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x):val(x), left(NULL), right(NULL){}
};

class ConvertSortedListToBinarySearchTree {
public:
    TreeNode* sortedListToBST(ListNode* head);

private:
    TreeNode* sortedListToBST(ListNode* head, ListNode* tail);
};


#endif //LEETCODE_CONVERTSORTEDLISTTOBINARYSEARCHTREE_H
