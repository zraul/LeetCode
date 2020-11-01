//
// Created by wei on 2020/11/1.
//

#include "ExcelSheetColumnNumber.h"

int ExcelSheetColumnNumber::titleToNumber(std::string s) {
    int result = 0;
    for (int i = 0; i < s.size(); i++) {
        result = result * 26 + (s.at(i) - 'A' + 1);
    }

    return result;
}