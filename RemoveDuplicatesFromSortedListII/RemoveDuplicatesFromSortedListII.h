//
// Created by 郑巍 on 2020/3/18.
//

#ifndef LEETCODE_REMOVEDUPLICATESFROMSORTEDLISTII_H
#define LEETCODE_REMOVEDUPLICATESFROMSORTEDLISTII_H

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(NULL){}
};

class RemoveDuplicatesFromSortedListII {
public:
    ListNode* deleteDuplicates(ListNode* head);
};


#endif //LEETCODE_REMOVEDUPLICATESFROMSORTEDLISTII_H
