//
// Created by 郑巍 on 2020/4/21.
//

#ifndef LEETCODE_LRUCACHE_H
#define LEETCODE_LRUCACHE_H

#include <iostream>
#include <unordered_map>
#include <list>

using std::unordered_map;
using std::list;
using std::iterator;
using std::pair;


class LRUCache {
public:
    LRUCache(int capacity);
    int get(int key);
    void put(int key, int value);

private:
    list<pair<int, int>> items;
    unordered_map<int, list<pair<int, int>>::iterator> cache;
    int capacity;
};


#endif //LEETCODE_LRUCACHE_H
