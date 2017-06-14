//
// Created by 郑巍 on 2017/4/14.
//

#include "twosum.h"

//   two sum
//    vector<int> num;
//    num.push_back(2);
//    num.push_back(7);
//    num.push_back(11);
//    num.push_back(15);
//
//    vector<int> result = twoSum(num, 17);
//    for (int i = 0; i < result.size(); ++i) {
//        cout<<result[i]<<endl;
//    }

vector<int> twoSum(vector<int> &numbers, int target)
{
    map<int, int> hash;
    vector<int> result;


    for (int i = 0; i < numbers.size(); ++i)
    {
        int number2Find = target - numbers[i];
        if (hash.find(number2Find) != hash.end())
        {
            result.push_back(hash[number2Find]);
            result.push_back(i);
            return result;
        }

        // 未查找到数据则存入map中
        hash[numbers[i]] = i;
    }

    return result;
}
