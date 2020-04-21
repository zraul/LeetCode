//
// Created by 郑巍 on 2020/4/21.
//

#ifndef LEETCODE_INSERTIONSORTLIST_H
#define LEETCODE_INSERTIONSORTLIST_H

#include <iostream>
#include <vector>

using std::vector;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL) {}
};

class InsertionSortList {
public:
    ListNode *insertionSortList(ListNode *head);
};


#endif //LEETCODE_INSERTIONSORTLIST_H
