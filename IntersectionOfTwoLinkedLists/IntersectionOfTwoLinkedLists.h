//
// Created by 郑巍 on 2020/4/27.
//

#ifndef LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H
#define LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};

class IntersectionOfTwoLinkedLists {
public:
    ListNode *GetIntersectionNode(ListNode *headA, ListNode *headB);
};


#endif //LEETCODE_INTERSECTIONOFTWOLINKEDLISTS_H
