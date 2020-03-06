//
// Created by 郑巍 on 2020/3/6.
//

#include "InsertInterval.h"

//std::vector<std::vector<int>> InsertInterval::insert(std::vector<std::vector<int>> &intervals,
//                                                     std::vector<int> &newInterval) {
//    std::vector<std::vector<int>> res;
//    int i = 0;
//    while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
//        res.push_back(intervals[i++]);
//    }
//
//    while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
//        newInterval[0] = std::min(newInterval[0], intervals[i][0]);
//        newInterval[1] = std::max(newInterval[1], intervals[i][1]);
//        i++;
//    }
//
//    res.push_back(newInterval);
//    while (i < intervals.size()) {
//        res.push_back(intervals[i++]);
//    }
//
//    return res;
//}

std::vector<std::vector<int>> InsertInterval::insert(std::vector<std::vector<int>> &intervals,
                                                     std::vector<int> &newInterval) {
    std::vector<std::vector<int>> res;
    int i = 0;
    for (; i < intervals.size() && intervals[i][0] <= newInterval[1]; i++) {
        if (intervals[i][1] < newInterval[0]) {
            res.push_back(intervals[i]);
        } else {
            newInterval[0] = std::min(newInterval[0], intervals[i][0]);
            newInterval[1] = std::max(newInterval[1], intervals[i][1]);
        }
    }

    res.push_back(newInterval);
    res.insert(std::end(res), std::begin(intervals) + i, std::end(intervals));
    return res;
}