//
// Created by 郑巍 on 2020/3/18.
//

#include "RemoveDuplicatesFromSortedListII.h"

ListNode* RemoveDuplicatesFromSortedListII::deleteDuplicates(ListNode *head) {
    if (head == NULL) {
        return  NULL;
    }

    if (head->next == NULL) {
        return head;
    }

    int val  = head->val;
    ListNode* tmp = head->next;

    if (tmp->val != val) {
        head->next = deleteDuplicates(tmp);
        return head;
    } else {
        while (tmp && tmp->val == val) {
            tmp = tmp->next;
        }

        return deleteDuplicates(tmp);
    }
}