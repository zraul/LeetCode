//
// Created by 郑巍 on 2019/12/9.
//

#include "CountAndSay.h"

std::string CountAndSay::countAndSay(int n) {
    std::string s1 = "1";
    for (int i = 0; i < n-1; ++i) {
        std::string buffer;
        for (int index = 0; index < s1.size(); ++index) {
            int cnt = 1;
            while (index + 1 < s1.size() && s1[index + 1] == s1[index]) {
                index++;
                cnt++;
            }

            buffer.push_back(cnt + '0');
            buffer.push_back(s1[index]);
        }

        s1 = buffer;
    }

    return s1;
}