//
// Created by 郑巍 on 2020/3/18.
//

#include "RemoveDuplicatesFromSortedList.h"

ListNode* RemoveDuplicatesFromSortedList::deleteDuplicates(ListNode* head) {
    ListNode* cur = head;
    while (cur) {
        while (cur->next != NULL && cur->val == cur->next->val) {
            cur->next = cur->next->next;
        }
        cur = cur->next;
    }

    return head;
}