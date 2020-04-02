//
// Created by 郑巍 on 2020/4/2.
//

#include "PopulatingNextRightPointersInEachNodeII.h"

Node* PopulatingNextRightPointersInEachNodeII::connect(Node *root) {
    Node* now;
    Node* tail;
    Node* head;
    now = root;
    head = tail = NULL;

    while (now) {
        if (now->left) {
            if (tail != NULL) {
                tail = tail->next = now->left;
            } else {
                head = tail = now->left;
            }
        }

        if (now->right) {
            if (tail) {
                tail = tail->next = now->right;
            } else {
                head = tail = now->right;
            }
        }

        if (!(now = now->next)) {
            now = head;
            head = tail = NULL;
        }
    }

    return root;
}