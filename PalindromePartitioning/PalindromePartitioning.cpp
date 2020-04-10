//
// Created by 郑巍 on 2020/4/10.
//

#include "PalindromePartitioning.h"

std::vector<std::vector<std::string>> PalindromePartitioning::partition(std::string s) {
    std::vector<std::vector<std::string>> ret;
    if (s.empty()) {
        return ret;
    }

    std::vector<std::string> path;
    dfs(0, s, path, ret);

    return ret;
}

void PalindromePartitioning::dfs(int index, std::string &s, std::vector <std::string> &path,
                                 std::vector <std::vector<std::string>> &ret) {
    if (index == s.size()) {
        ret.push_back(path);
        return;
    }

    for (int i = index; i < s.size(); ++i) {
        if (isPalindrome(s, index, i)) {
            path.push_back(s.substr(index, i - index + 1));
            dfs(i  +1, s, path, ret);
            path.pop_back();
        }
    }
}


bool PalindromePartitioning::isPalindrome(const std::string &s, int start, int end) {
    while (start <= end) {
        if (s[start++] != s[end--]) {
            return false;
        }
    }

    return true;
}
