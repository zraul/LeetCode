//
// Created by 郑巍 on 2020/4/27.
//

#include "MinStack.h"

MinStack::MinStack() {

}

void MinStack::push(int x) {
    s1.push(x);
    if (s2.empty() || x <= getMin()) {
        s2.push(x);
    }
}

void MinStack::pop() {
    if (s1.top() == getMin()) {
        s2.pop();
    }

    s1.pop();
}

int MinStack::top() {
    return s1.top();
}

int MinStack::getMin() {
    return s2.top();
}