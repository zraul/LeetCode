//
// Created by 郑巍 on 2020/4/8.
//

#ifndef LEETCODE_WORDLADDERII_H
#define LEETCODE_WORDLADDERII_H

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>

class WordLadderII {
public:
    std::vector<std::vector<std::string>> findLadders(std::string beginWord, std::string endWord, std::vector<std::string>& wordList);

private:
    void bfs(std::string& beginWord, std::string& endWord, std::unordered_set<std::string>& d,
            std::unordered_map<std::string, std::vector<std::string>>& neighbors, std::unordered_map<std::string, int>& dist);

    void dfs(std::string& curr, std::string& endWord, std::unordered_map<std::string,
            std::vector<std::string>>& neighbors, std::unordered_map<std::string, int>& dist,
            std::vector<std::string>& path, std::vector<std::vector<std::string>>& res);
};


#endif //LEETCODE_WORDLADDERII_H
