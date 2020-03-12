//
// Created by 郑巍 on 2020/3/12.
//

#include "TextJustification.h"

std::vector<std::string> TextJustification::fullJustify(std::vector<std::string> &words, int maxWidth) {
    std::vector<std::string> res;
    for (int i = 0, k, l; i < words.size(); i+= k) {
        // maxWidth - k表示当前空格数量
        for (k = l = 0; i + k < words.size() && l + words[i + k].size() <= maxWidth - k; k++) {
            l += words[i + k].size();
        }

        std::string tmp = words[i];
        for (int j = 0; j < k - 1; ++j) {
            if (i +k >= words.size()) {
                tmp += " ";
            } else {
                tmp += std::string((maxWidth - l) / (k - 1) + (j < (maxWidth - l) % (k - 1)), ' ');
            }
            tmp += words[i + j + 1];
        }

        tmp += std::string(maxWidth - tmp.size(), ' ');
        res.push_back(tmp);
    }

    return res;
}