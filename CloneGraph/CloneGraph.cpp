//
// Created by 郑巍 on 2020/4/15.
//

#include "CloneGraph.h"

Node* CloneGraph::cloneGraph(Node *node) {
    if (!node) {
        return NULL;
    }

    if (result.find(node) == result.end()) {
        result[node] = new Node(node->val, {});
        for (Node* neighbor: node->neighbors) {
            result[node]->neighbors.push_back(cloneGraph(neighbor));
        }
    }

    return result[node];
}