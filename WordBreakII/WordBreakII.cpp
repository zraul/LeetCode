//
// Created by 郑巍 on 2020/4/17.
//

#include "WordBreakII.h"

vector<string> WordBreakII::wordBreak(string s, vector<string> &wordDict) {
    if (s.size() == 0 || wordDict.size() == 0) {
        return vector<string>();
    }

    unordered_set<string> wordSet(wordDict.begin(), wordDict.end());
    vector<pair<bool, vector<string>>> wordStore(s.size() + 1, {false, vector<string>()});

    wordStore[0].first = true;
    for (int i = 1; i <= s.size(); ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (wordStore[j].first && wordSet.find(s.substr(j, i - j)) != wordSet.end()) {
                wordStore[j].second.push_back(s.substr(j, i - j));
                wordStore[i].first = true;
            }
        }
    }

    vector<string> res;
    queue<pair<int, string>> q;

    for (int i = 0; wordStore[s.size()].first && i < wordStore[0].second.size(); i++) {
        q.push({wordStore[0].second[i].size(), wordStore[0].second[i]});
    }

    while (!q.empty()) {
        pair<int, string> p = q.front();
        q.pop();

        if (p.first == s.size()) {
            res.push_back(p.second);
            continue;
        }

        for (int i = 0; i < wordStore[p.first].second.size(); ++i) {
            string str = p.second + " " + wordStore[p.first].second[i];
            int index = p.first + wordStore[p.first].second[i].size();
            q.push({index, str});
        }
    }

    return res;
}