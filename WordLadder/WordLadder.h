//
// Created by 郑巍 on 2020/4/9.
//

#ifndef LEETCODE_WORDLADDER_H
#define LEETCODE_WORDLADDER_H

#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

class WordLadder {
public:
    int ladderLength(std::string beginWord, std::string endWord, std::vector<std::string>& wordList);
};


#endif //LEETCODE_WORDLADDER_H
