//
// Created by 郑巍 on 2020/3/19.
//

#include "ScrambleString.h"

bool ScrambleString::isScramble(std::string s1, std::string s2) {
    if (s1 == s2) {
        return true;
    }

    int len = s1.length();
    int count[26] = {0};
    for (int i = 0; i < len; i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    for (int j = 1; j <= len - 1; ++j) {
        if (isScramble(s1.substr(0, j), s2.substr(0, j)) && isScramble(s1.substr(j), s2.substr(j))) {
            return true;
        }

        if (isScramble(s1.substr(0, j), s2.substr(len - j)) && isScramble(s1.substr(j), s2.substr(0, len - j))) {
            return true;
        }
    }

    return false;
}