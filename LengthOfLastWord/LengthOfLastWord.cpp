//
// Created by 郑巍 on 2020/3/6.
//

#include "LengthOfLastWord.h"

int LengthOfLastWord::lengthOfLastWord(std::string s) {
    int len = 0, tail = s.length() - 1;
    while (tail >= 0 && s[tail] == ' ') {
        tail--;
    }

    while (tail >= 0 && s[tail] != ' ') {
        len++;
        tail--;
    }
    return len;
}