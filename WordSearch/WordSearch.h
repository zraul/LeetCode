//
// Created by 郑巍 on 2020/3/16.
//

#ifndef LEETCODE_WORDSEARCH_H
#define LEETCODE_WORDSEARCH_H

#include <iostream>
#include <vector>

class WordSearch {
public:
    bool exist(std::vector<std::vector<char>>& board, std::string word);

private:
    bool dfs(std::vector<std::vector<char>>& board, int i, int j, std::string& word);
};


#endif //LEETCODE_WORDSEARCH_H
