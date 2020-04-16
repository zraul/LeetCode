//
// Created by 郑巍 on 2020/4/16.
//

#ifndef LEETCODE_COPYLISTWITHRANDOMPOINTER_H
#define LEETCODE_COPYLISTWITHRANDOMPOINTER_H

#include <iostream>
#include <vector>

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class CopyListWithRandomPointer {
public:
    Node* copyRandomList(Node* head);
};


#endif //LEETCODE_COPYLISTWITHRANDOMPOINTER_H
