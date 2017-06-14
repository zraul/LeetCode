//
// Created by 郑巍 on 2017/4/14.
//

#ifndef LEETCODE_ADDTWONUMBERS_H
#define LEETCODE_ADDTWONUMBERS_H

#include "../common.h"

struct ListNode
{
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {};
    ListNode():next(NULL) {};
};


ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

#endif //LEETCODE_ADDTWONUMBERS_H
