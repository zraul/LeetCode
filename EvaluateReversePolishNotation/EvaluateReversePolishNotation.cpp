//
// Created by 郑巍 on 2020/4/22.
//

#include "EvaluateReversePolishNotation.h"

int EvaluateReversePolishNotation::evalRPN(vector<string> &tokens) {
    unordered_map<string, std::function<int (int, int)>> map = {
            {"+", [] (int a, int b) { return a + b;}},
            {"-", [] (int a, int b) { return a - b;}},
            {"*", [] (int a, int b) { return a * b;}},
            {"/", [] (int a, int b) { return a / b;}},
    };

    stack<int> stack;
    for (string& s : tokens) {
        if (!map.count(s)) {
            stack.push(std::stoi(s));
        } else {
            int op1 = stack.top();
            stack.pop();
            int op2 = stack.top();
            stack.pop();
            stack.push(map[s](op2, op1));
        }
    }

    return stack.top();
}