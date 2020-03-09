//
// Created by 郑巍 on 2020/3/9.
//

#ifndef LEETCODE_ROTATELIST_H
#define LEETCODE_ROTATELIST_H

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x):val(x), next(NULL) {}
};

class RotateList {
public:
    ListNode* rotateRight(ListNode* head, int k);
};


#endif //LEETCODE_ROTATELIST_H
