//
// Created by 郑巍 on 2020/4/23.
//

#include "ReverseWordsInAString.h"

string ReverseWordsInAString::reverseWords(string s) {
    string result;
    int pos = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == ' ') {
            if (i > pos) {
                result = s.substr(pos, i - pos) + " " + result;
            }
            pos = i + 1;
        } else if (i == s.size() - 1) {
            result = s.substr(pos, s.size() - pos) + " " + result;
        }
    }

    return result.substr(0, result.size() - 1);
}
