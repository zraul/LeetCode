//
// Created by 郑巍 on 2020/3/18.
//

#ifndef LEETCODE_REMOVEDUPLICATESFROMSORTEDLIST_H
#define LEETCODE_REMOVEDUPLICATESFROMSORTEDLIST_H

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class RemoveDuplicatesFromSortedList {
public:
    ListNode* deleteDuplicates(ListNode* head);
};


#endif //LEETCODE_REMOVEDUPLICATESFROMSORTEDLIST_H
