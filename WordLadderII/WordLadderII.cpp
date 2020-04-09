//
// Created by 郑巍 on 2020/4/8.
//

#include "WordLadderII.h"

std::vector<std::vector<std::string>> WordLadderII::findLadders(std::string beginWord, std::string endWord,
                                                                std::vector<std::string> &wordList) {
    std::vector<std::vector<std::string>> res;
    std::unordered_set<std::string> d(wordList.begin(), wordList.end());

    if (d.count(endWord) == 0) {
        return res;
    }
    std::unordered_map<std::string, std::vector<std::string>> neighbors;
    std::unordered_map<std::string, int> dist;

    bfs(beginWord, endWord, d, neighbors, dist);
    std::vector<std::string> path;
    dfs(beginWord, endWord, neighbors, dist, path, res);
    return res;
}

void WordLadderII::bfs(std::string &beginWord, std::string &endWord, std::unordered_set<std::string> &d,
                       std::unordered_map<std::string, std::vector<std::string>> &neighbors,
                       std::unordered_map<std::string, int> &dist) {
    std::queue<std::string> q;
    q.push(beginWord);
    dist[beginWord] = 0;
    int lvl = 1;
    while (!q.empty()) {
        int q_size = q.size();
        std::unordered_set<std::string> visited;
        for (int i = 0; i < q_size; ++i) {
            auto curr = q.front();
            q.pop();
            std::string nxt = curr;
            for (int j = 0; j < nxt.size(); ++j) {
                auto tmp = nxt[j];
                for (char c = 'a'; c <= 'z'; c++) {
                    nxt[j] = c;
                    if (d.count(nxt) != 0) {
                        neighbors[curr].push_back(nxt);
                        visited.insert(nxt);
                        if (dist.count(nxt) == 0) {
                            dist[nxt] = lvl;
                            q.push(nxt);
                        }
                    }
                }
                nxt[j] = tmp;
            }
        }
        lvl++;
        for (std::string w: visited) {
            d.erase(w);
        }
    }
}


void WordLadderII::dfs(std::string &curr, std::string &endWord, std::unordered_map<std::string,
        std::vector<std::string>> &neighbors, std::unordered_map<std::string, int> &dist,
                       std::vector<std::string> &path, std::vector<std::vector<std::string>> &res) {
    path.push_back(curr);
    if (curr == endWord) {
        res.push_back(path);
        return;
    }

    for (auto nxt: neighbors[curr]) {
        if (dist[nxt] == dist[curr] + 1) {
            dfs(nxt, endWord, neighbors, dist, path, res);
            path.pop_back();
        }
    }
}