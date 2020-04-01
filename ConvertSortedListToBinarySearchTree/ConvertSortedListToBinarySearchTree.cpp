//
// Created by 郑巍 on 2020/3/31.
//

#include "ConvertSortedListToBinarySearchTree.h"

TreeNode* ConvertSortedListToBinarySearchTree::sortedListToBST(ListNode *head) {
    return sortedListToBST(head, NULL);
}

TreeNode* ConvertSortedListToBinarySearchTree::sortedListToBST(ListNode *head, ListNode *tail) {
    if (head == tail) {
        return  NULL;
    }

    if (head->next == tail) {
        TreeNode* root = new TreeNode(head->val);
        return root;
    }

    ListNode* mid = head, *tmp = head;
    while (tmp != tail && tmp->next != tail) {
        mid = mid->next;
        tmp = tmp->next->next;
    }

    TreeNode* root = new TreeNode(mid->val);
    root->left = sortedListToBST(head, mid);
    root->right = sortedListToBST(mid->next, tail);
    return root;
}