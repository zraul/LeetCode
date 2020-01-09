//
// Created by 郑巍 on 2020/1/3.
//

#include <unordered_map>
#include "GroupAnagrams.h"

std::vector<std::vector<std::string>> GroupAnagrams::gropuAnagrams(std::vector<std::string> &strs) {
    std::unordered_map<std::string, std::vector<std::string>> mp;
    for (std::string s: strs) {
        std::string t = s;
        std::sort(t.begin(), t.end());
        mp[t].push_back(s);
    }

    std::vector<std::vector<std::string>> anagrams;
    for (auto p : mp) {
        anagrams.push_back(p.second);
    }

    return anagrams;
}