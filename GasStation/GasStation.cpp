//
// Created by 郑巍 on 2020/4/15.
//

#include "GasStation.h"

int GasStation::canCompleteCircuit(std::vector<int> &gas, std::vector<int> &cost) {
    int start = 0, total = 0, tank = 0;
    for (int i = 0; i < gas.size(); ++i) {
        if ((tank = tank + gas[i] - cost[i]) < 0) {
            start = i + 1;
            total += tank;
            tank = 0;
        }
    }

    return (total + tank < 0) ? -1 : start;
}