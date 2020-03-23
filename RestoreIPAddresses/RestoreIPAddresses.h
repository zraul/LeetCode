//
// Created by 郑巍 on 2020/3/23.
//

#ifndef LEETCODE_RESTOREIPADDRESSES_H
#define LEETCODE_RESTOREIPADDRESSES_H

#include <iostream>
#include <vector>


class RestoreIPAddresses {
public:
    std::vector<std::string> restoreIpAddresses(std::string s);
private:
    void dfs(std::string s, int start, int step, std::string ip, std::vector<std::string>& result);
};


#endif //LEETCODE_RESTOREIPADDRESSES_H
