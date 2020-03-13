//
// Created by 郑巍 on 2020/3/13.
//

#include "SimplifyPath.h"

std::string SimplifyPath::simplifyPath(std::string path) {
    std::string res, tmp;
    std::vector<std::string> stk;
    std::stringstream ss(path);
    while (getline(ss, tmp, '/')) {
        if (tmp == "" or tmp == ".") {
            continue;
        }

        if (tmp == ".." and !stk.empty()) {
            stk.pop_back();
        } else if (tmp != "..") {
            stk.push_back(tmp);
        }
    }

    for (auto str:stk) {
        res += "/" + str;
    }

    return res.empty() ? "/" : res;
}