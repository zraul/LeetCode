//
// Created by 郑巍 on 2020/4/15.
//

#ifndef LEETCODE_CLONEGRAPH_H
#define LEETCODE_CLONEGRAPH_H

#include <iostream>
#include <vector>
#include <unordered_map>

class Node {
public:
    int val;
    std::vector<Node*> neighbors;

    Node() {
        val = 0;
        neighbors = std::vector<Node*>();
    }

    Node(int _val) {
        val = _val;
        neighbors = std::vector<Node*>();
    }

    Node(int _val, std::vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class CloneGraph {
public:
    Node* cloneGraph(Node* node);

private:
    std::unordered_map<Node*, Node*> result;
};


#endif //LEETCODE_CLONEGRAPH_H
