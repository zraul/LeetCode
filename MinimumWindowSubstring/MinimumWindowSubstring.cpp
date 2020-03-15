//
// Created by 郑巍 on 2020/3/14.
//

#include "MinimumWindowSubstring.h"


std::string MinimumWindowSubstring::minWindow(std::string s, std::string t) {
    if (s.empty() || t.empty()) {
        return "";
    }

    std::vector<int> remining(128, 0);
    int required = t.size();
    for (int i = 0; i < required; i++) {
        remining[t[i]]++;
    }

    int min = INT_MAX, start = 0, left = 0, i = 0;
    while (i <= s.size() && start < s.size()) {
        if (required) {
            if (i == s.size()) {
                break;
            }
            remining[s[i]]--;
            if (remining[s[i]] >= 0) {
                required--;
            }
            i++;
        } else {
            if (i - start < min) {
                min = i - start;
                left = start;
            }
            remining[s[start]]++;
            if (remining[s[start]] > 0) {
                required++;
            }
            start++;
        }
    }

    return min == INT_MAX ? "":s.substr(left, min);
}