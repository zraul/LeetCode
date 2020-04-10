//
// Created by 郑巍 on 2020/4/10.
//

#include "PalindromePartitioningII.h"

int PalindromePartitioningII::minCut(std::string s) {
    int n = s.size();
    std::vector<int> cut(n+1, 0);  // number of cuts for the first k characters
    for (int i = 0; i <= n; i++) {
        cut[i] = i-1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; i-j >= 0 && i+j < n && s[i-j]==s[i+j] ; j++) {
            cut[i+j+1] = std::min(cut[i+j+1],1+cut[i-j]);
        }

        for (int j = 1; i-j+1 >= 0 && i+j < n && s[i-j+1] == s[i+j]; j++) {
            cut[i+j+1] = std::min(cut[i+j+1],1+cut[i-j+1]);
        }
    }
    return cut[n];
}