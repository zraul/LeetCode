//
// Created by 郑巍 on 2020/4/10.
//

#ifndef LEETCODE_PALINDROMEPARTITIONING_H
#define LEETCODE_PALINDROMEPARTITIONING_H

#include <iostream>
#include <vector>

class PalindromePartitioning {
public:
    std::vector<std::vector<std::string>> partition(std::string s);

private:
    void dfs(int index, std::string& s, std::vector<std::string>& path, std::vector<std::vector<std::string>>& ret);
    bool isPalindrome(const std::string& s, int start, int end);
};


#endif //LEETCODE_PALINDROMEPARTITIONING_H
