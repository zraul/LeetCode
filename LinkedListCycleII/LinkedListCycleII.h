//
// Created by 郑巍 on 2020/4/20.
//

#ifndef LEETCODE_LINKEDLISTCYCLEII_H
#define LEETCODE_LINKEDLISTCYCLEII_H

#include <iostream>
#include <vector>

using std::vector;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(NULL) {}
};

class LinkedListCycleII {
public:
    ListNode* detectCycle(ListNode* head);
};


#endif //LEETCODE_LINKEDLISTCYCLEII_H
