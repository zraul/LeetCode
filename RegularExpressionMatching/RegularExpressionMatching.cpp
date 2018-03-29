//
// Created by 郑巍 on 2017/12/27.
//

#include "RegularExpressionMatching.h"

bool RegularExpressionMatching::isMatch(const char *s, const char *p)
{
    // 判断参数是否合法
    assert(s && p);

    if (*p == '\0')
    {
        return *s == '\0';
    }


    // next char is not *,must match current character
    if (*(p + 1) != '*')
    {
        assert(*p != '*');// 考虑情况'aa', 'a*'
        return ((*p == *s) || (*p == '.' && *s != '\0')) && isMatch(s + 1, p + 1);
    }

    // next char is *
    while ((*p == *s) || (*p == '.' && *s != '\0'))
    {
        if (isMatch(s, p + 2))
        {
            return true;
        }

        s++;
    }


    int m = 0;
    int n = 0;
    vector<vector<bool>> f(m + 1, vector<bool>(n + 1, false));

    // 匹配下一个模式
    return isMatch(s, p + 2);
}