//
// Created by 郑巍 on 2020/4/20.
//

#ifndef LEETCODE_REORDERLIST_H
#define LEETCODE_REORDERLIST_H

#include <iostream>
#include <vector>

using std::vector;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(NULL) {}
};

class ReorderList {
public:
    void reorderList(ListNode* head);
};


#endif //LEETCODE_REORDERLIST_H
