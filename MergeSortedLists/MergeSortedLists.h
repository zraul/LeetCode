//
// Created by 郑巍 on 2017/6/14.
//

#ifndef LEETCODE_MERGESORTEDLISTS_H
#define LEETCODE_MERGESORTEDLISTS_H

#include "../common.h"

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL)
    {

    }
};

class MergeSortedLists {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists);
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};


#endif //LEETCODE_MERGESORTEDLISTS_H
