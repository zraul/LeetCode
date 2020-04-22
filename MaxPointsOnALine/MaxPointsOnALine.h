//
// Created by 郑巍 on 2020/4/22.
//

#ifndef LEETCODE_MAXPOINTSONALINE_H
#define LEETCODE_MAXPOINTSONALINE_H

#include <iostream>
#include <vector>
#include <unordered_map>

using std::vector;
using std::swap;
using std::unordered_map;
using std::string;

class MaxPointsOnALine {
public:
    int maxPoints(vector<vector<int>>& points);
    int gcd(int a, int b);
};


#endif //LEETCODE_MAXPOINTSONALINE_H
