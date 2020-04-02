//
// Created by 郑巍 on 2020/4/2.
//

#include "DistinctSubsequences.h"

int DistinctSubsequences::numDistinct(std::string s, std::string t) {
    int m = t.length(), n = s.length();
    std::vector<std::vector<long>> dp(m + 1, std::vector<long> (n + 1, 0));

    for (int j = 0; j <= n; j++) {
        dp[0][j] = 1;
    }

    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= m; i++) {
            dp[i][j] = dp[i][j - 1] + (t[i - 1] == s[j - 1] ? dp[i - 1][j - 1] : 0);
        }
    }

    return dp[m][n];
}