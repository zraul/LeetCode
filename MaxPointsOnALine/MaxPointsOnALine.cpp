//
// Created by 郑巍 on 2020/4/22.
//

#include "MaxPointsOnALine.h"

int MaxPointsOnALine::maxPoints(vector<vector<int>> &points) {
    int n = points.size(), ans = 0;
    for (int i = 0; i < n; ++i) {
        unordered_map<string, int> counter;
        int dup = 1;
        for (int j = i + 1; j < n; ++j) {
            if (points[j][0] == points[i][0] && points[j][1] == points[i][1]) {
                dup++;
            } else {
                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];
                int g = gcd(dx, dy);
                counter[std::to_string(dx /g) + '_' + std::to_string(dy / g)]++;
            }
        }

        ans = std::max(ans, dup);
        for (auto p : counter) {
            ans = std::max(ans, p.second + dup);
        }
    }

    return ans;
}

// 辗转相除法
int MaxPointsOnALine::gcd(int a, int b) {
    while (b) {
        a = a % b;
        swap(a, b);
    }

    return a;
}