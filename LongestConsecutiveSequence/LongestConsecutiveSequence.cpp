//
// Created by 郑巍 on 2020/4/9.
//

#include "LongestConsecutiveSequence.h"

int LongestConsecutiveSequence::longestConsecutive(std::vector<int> &nums) {
    std::unordered_map<int, int> m;
    int r = 0;
    for (int i : nums) {
        if (m[i]) {
            continue;
        }
        r = std::max(r, m[i] = m[i + m[i + 1]] = m[i - m[i-1]] = m[i + 1] + m[i - 1] + 1);
    }

    return r;
}