//
// Created by 郑巍 on 2020/4/29.
//

#include "FractionToRecurringDecimal.h"

string FractionToRecurringDecimal::fractionToDecimal(int numerator, int denominator) {
    if (!numerator) {
        return "0";
    }

    string ans;
    if (numerator > 0 ^ denominator > 0) {
        ans += '-';
    }

    long n = std::labs(numerator), d = std::labs(denominator), r = n % d;
    ans += std::to_string(n / d);
    if (!r) {
        return ans;
    }

    ans += '.';
    unordered_map<long, int> rs;
    while (r) {
        if (rs.find(r) != rs.end()) {
            ans.insert(rs[r], "(");
            ans += ')';
            break;
        }

        rs[r] = ans.size();
        r *= 10;
        ans += std::to_string(r / d);
        r %= d;
    }

    return ans;
}