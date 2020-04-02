//
// Created by 郑巍 on 2020/4/2.
//

#ifndef LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODEII_H
#define LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODEII_H

#include <iostream>
#include <vector>

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node(): val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val): val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next):val(_val), right(_right), left(_left), next(_next) {}
};

class PopulatingNextRightPointersInEachNodeII {
public:
    Node* connect(Node* root);
};


#endif //LEETCODE_POPULATINGNEXTRIGHTPOINTERSINEACHNODEII_H
