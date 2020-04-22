//
// Created by 郑巍 on 2020/4/22.
//

#ifndef LEETCODE_SORTLIST_H
#define LEETCODE_SORTLIST_H

#include <iostream>
#include <vector>

using std::vector;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL) {}
};

class SortList {
public:
    ListNode* sortList(ListNode* head);
    ListNode* merge(ListNode *l1, ListNode *l2);
};


#endif //LEETCODE_SORTLIST_H
