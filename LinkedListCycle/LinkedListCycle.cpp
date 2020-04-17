//
// Created by 郑巍 on 2020/4/17.
//

#include "LinkedListCycle.h"

bool LinkedListCycle::hasCycle(ListNode *head) {
    ListNode* fast = head;
    while (head) {
        head = head->next;
        if (fast->next && fast->next->next) {
            fast = fast->next->next;
        } else {
            return false;
        }

        if (fast == head) {
            return true;
        }
    }

    return false;
}