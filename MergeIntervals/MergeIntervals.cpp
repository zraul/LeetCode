//
// Created by 郑巍 on 2020/3/5.
//

#include "MergeIntervals.h"


std::vector<std::vector<int>> MergeIntervals::merge(std::vector<std::vector<int>> &intervals) {
    if (intervals.size() <= 1) {
        return intervals;
    }
    std::vector<std::vector<int>> ans;
    int u = 0, v = 0;
    std::sort(intervals.begin(), intervals.end());
    while (v < intervals.size()) {
        if (intervals[v][0] > intervals[u][1]) {
            ans.emplace_back(intervals[u]);
            u = v;
        } else if (intervals[v][1] <= intervals[u][1]) {
            ++v;
        } else {
            intervals[u][1] = intervals[v][1];
            ++v;
        }
    }

    ans.emplace_back(intervals[u]);
    return ans;
}