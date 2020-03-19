//
// Created by 郑巍 on 2020/3/19.
//

#include "PartitionList.h"

ListNode* PartitionList::partition(ListNode *head, int x) {
    ListNode left(0), right(0);
    ListNode *l = &left;
    ListNode *r = &right;

    while (head) {
        ListNode* &ref = head->val < x ? l:r;
        ref->next = head;
        ref = ref->next;

        head = head->next;
    }

    l->next = right.next;
    r->next = NULL;
    return left.next;
}