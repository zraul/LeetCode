//
// Created by 郑巍 on 2020/3/9.
//

#include "RotateList.h"

ListNode* RotateList::rotateRight(ListNode *head, int k) {
    if (!head) {
        return head;
    }

    int len = 1;
    ListNode *newH = NULL;
    ListNode *tail = head;

    while (tail->next) {
        tail = tail->next;
        len++;
    }

    tail->next = head;
    if (k %= len) {
        for (auto i = 0; i < len - k; i++) {
            tail = tail->next;
        }
    }

    newH = tail->next;
    tail->next = NULL;
    return newH;
}