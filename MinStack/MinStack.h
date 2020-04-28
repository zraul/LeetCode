//
// Created by 郑巍 on 2020/4/27.
//

#ifndef LEETCODE_MINSTACK_H
#define LEETCODE_MINSTACK_H

#include <iostream>
#include <stack>

using std::stack;

class MinStack {
private:
    stack<int> s1;
    stack<int> s2;
public:
    MinStack();
    void push(int x);
    void pop();
    int top();
    int getMin();
};


#endif //LEETCODE_MINSTACK_H
