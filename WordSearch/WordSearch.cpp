//
// Created by 郑巍 on 2020/3/16.
//

#include "WordSearch.h"

bool WordSearch::exist(std::vector<std::vector<char>> &board, std::string word) {
    for (int i = 0; i < board.size(); ++i) {
        for (int j = 0; j < board[0].size(); ++j) {
            if (dfs(board, i, j, word)) {
                return true;
            }
        }
    }

    return false;
}

bool WordSearch::dfs(std::vector<std::vector<char>> &board, int i, int j, std::string &word) {
    if (word.size() == 0) {
        return true;
    }

    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[0]) {
        return false;
    }

    char c = board[i][j];
    board[i][j] = '*';
    std::string s = word.substr(1);
    bool ret = dfs(board, i - 1, j, s) || dfs(board, i + 1, j, s) || dfs(board, i, j - 1, s) || dfs(board, i, j + 1, s);
    board[i][j] = c;
    return ret;
}