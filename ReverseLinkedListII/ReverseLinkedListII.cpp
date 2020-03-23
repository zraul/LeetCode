//
// Created by 郑巍 on 2020/3/23.
//

#include "ReverseLinkedListII.h"

ListNode* ReverseLinkedListII::reverseBetween(ListNode *head, int m, int n) {
    ListNode* dumppy = new ListNode(0), *pre = dumppy, *cur;
    dumppy->next = head;
    for (int i = 0; i < m - 1; ++i) {
        pre = pre->next;
    }

    cur = pre->next;
    for (int j = 0; j < n - m; ++j) {
        ListNode* temp = pre->next;
        pre->next = cur->next;
        cur->next = cur->next->next;
        pre->next->next = temp;
    }

    return dumppy->next;
}