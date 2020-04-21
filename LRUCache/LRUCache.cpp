//
// Created by 郑巍 on 2020/4/21.
//

#include "LRUCache.h"

LRUCache::LRUCache(int capacity) {
    this->capacity = capacity;
}

int LRUCache::get(int key) {
    if (cache.find(key) == cache.end()) {
        return -1;
    }

    items.splice(items.begin(), items, cache[key]);

    return cache[key]->second;
}

void LRUCache::put(int key, int value) {
    if (cache.find(key) == cache.end()) {
        if (items.size() == capacity) {
            cache.erase(items.back().first);
            items.pop_back();
        }

        items.push_front(std::make_pair(key, value));
        cache[key] = items.begin();
    } else {
        cache[key]->second = value;
        items.splice(items.begin(), items, cache[key]);
    }
}