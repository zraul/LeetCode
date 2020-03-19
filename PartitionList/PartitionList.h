//
// Created by 郑巍 on 2020/3/19.
//

#ifndef LEETCODE_PARTITIONLIST_H
#define LEETCODE_PARTITIONLIST_H

#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(NULL){}
};

class PartitionList {
public:
    ListNode* partition(ListNode* head, int x);
};


#endif //LEETCODE_PARTITIONLIST_H
