//
// Created by 郑巍 on 2020/4/20.
//

#include "ReorderList.h"

void ReorderList::reorderList(ListNode *head) {
//    if (head == NULL || head->next == NULL || head->next->next == NULL) {
//        return;
//    }
//
//    ListNode *p = head;
//    ListNode *q = head;
//
//    while (p && q && q->next && q->next->next) {
//        p = p->next;
//        q = q->next->next;
//    }
//
//
//    ListNode *mid = p->next;
//    p->next = NULL;
//    p = head;
//
//    ListNode *q1 = mid, *q2, *q3;
//    if (mid->next) {
//        q1 = mid;
//        q2 = mid->next;
//        while (q2) {
//            q3 = q2->next;
//            q2->next = q1;
//            q1 = q2;
//            q2 = q3;
//        }
//
//        mid->next = NULL;
//    }
//
//    q = q1;
//    ListNode *s = p;
//    p = p->next;
//    while (p && q) {
//        s->next = q;
//        s = s->next;
//        q = q->next;
//
//        s->next = p;
//        s = s->next;
//        p = p->next;
//    }
//
//    if (p) {
//        s->next = p;
//    }
//    if (q) {
//        s->next = q;
//    }
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return;
    }

    vector<ListNode*> nodevec;
    ListNode* cur = head;
    while (cur != NULL) {
        nodevec.push_back(cur);
        cur = cur->next;
    }

    int pre = 0;
    int last = nodevec.size() - 1;
    int mid = nodevec.size() / 2;
    cur = new ListNode(-1);
    while (pre <= mid) {
        cur->next = nodevec[pre++];
        cur = cur->next;
        if (last > mid) {
            cur->next = nodevec[last--];
            cur = cur->next;
        }
    }

    cur->next = NULL;
}