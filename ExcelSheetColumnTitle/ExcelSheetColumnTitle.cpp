//
// Created by 郑巍 on 2020/4/29.
//

#include "ExcelSheetColumnTitle.h"

string ExcelSheetColumnTitle::convertToTitle(int n) {
    return n == 0 ? "" : convertToTitle((n - 1) / 26) + (char)(--n % 26 + 'A');
}