//
// Created by 郑巍 on 2020/4/21.
//

#include "InsertionSortList.h"

ListNode* InsertionSortList::insertionSortList(ListNode *head) {
    ListNode *dummpy = new ListNode(0);
    dummpy->next = head;
    ListNode *pre = dummpy, *cur = head;
    while (cur) {
        if ((cur->next) && (cur->next->val < cur->val)) {
            while (pre->next && pre->next->val < cur->next->val) {
                pre = pre->next;
            }

            ListNode *temp = pre->next;
            pre->next = cur->next;
            cur->next = cur->next->next;
            pre->next->next = temp;
            pre = dummpy;
        } else {
            cur = cur->next;
        }
    }

    return dummpy->next;
}