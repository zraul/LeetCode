//
// Created by 郑巍 on 2020/4/17.
//

#ifndef LEETCODE_LINKEDLISTCYCLE_H
#define LEETCODE_LINKEDLISTCYCLE_H

#include <iostream>
#include <vector>

using std::vector;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x): val(x), next(NULL) {}
};

class LinkedListCycle {
public:
    bool hasCycle(ListNode* head);
};


#endif //LEETCODE_LINKEDLISTCYCLE_H
