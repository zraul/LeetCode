//
// Created by 郑巍 on 2020/4/17.
//

#include "WordBreak.h"

bool WordBreak::wordBreak(string s, vector<string> &wordDict) {
    set<string> st;
    for (auto &str:wordDict) {
        st.insert(str);
    }

    std::vector<bool> dp(s.size());
    dp[0] = st.find(s.substr(0, 1)) != st.end();
    for (int i = 1; i < s.length(); ++i) {
        if (st.find(s.substr(0, i + 1)) != st.end()) {
            dp[i] = true;
        } else {
            dp[i] = false;
            for (int j = 0; j < i; ++j) {
                if (dp[j] && st.find(s.substr(j + 1, i - j)) != st.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
    }

    return dp[s.size() - 1];
}