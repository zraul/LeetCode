//
// Created by 郑巍 on 2020/4/2.
//

#include "PopulatingNextRightPointersInEachNode.h"

Node* PopulatingNextRightPointersInEachNode::connect(Node *root) {
    Node* pre = root, *cur;
    while (pre) {
        cur = pre;
        while (cur && cur->left) {
            cur->left->next = cur->right;
            if (cur->next) {
                cur->right->next = cur->next->left;
            }
            cur = cur->next;
        }
        pre = pre->next;
    }

    return root;
}