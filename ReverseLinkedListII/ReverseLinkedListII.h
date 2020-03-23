//
// Created by 郑巍 on 2020/3/23.
//

#ifndef LEETCODE_REVERSELINKEDLISTII_H
#define LEETCODE_REVERSELINKEDLISTII_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x):val(x), next(NULL) {}
};

class ReverseLinkedListII {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n);
};


#endif //LEETCODE_REVERSELINKEDLISTII_H
