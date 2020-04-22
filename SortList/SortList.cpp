//
// Created by 郑巍 on 2020/4/22.
//

#include "SortList.h"

ListNode* SortList::sortList(ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    ListNode *slow = head;
    ListNode *fast = head;
    ListNode *pre = head;

    while (fast != NULL && fast->next != NULL) {
        pre = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    pre->next = NULL;

    return merge(sortList(head), sortList(slow));
}

ListNode* SortList::merge(ListNode *l1, ListNode *l2) {
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    ListNode temp(0);
    ListNode *cur = &temp;

    while (l1 != NULL && l2 != NULL) {
        if (l1->val < l2->val) {
            cur->next = l1;
            l1 = l1->next;
        } else {
            cur->next = l2;
            l2 = l2->next;
        }

        cur = cur->next;
    }

    if (l1 != NULL) {
        cur->next = l1;
    } else {
        cur->next = l2;
    }

    return temp.next;
}