//
// Created by 郑巍 on 2019/12/10.
//

/*
 * Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
Note:Your algorithm should run in O(n) time and uses constant extra space.
 */

#ifndef LEETCODE_FIRSTMISSINGPOSITIVE_H
#define LEETCODE_FIRSTMISSINGPOSITIVE_H


#include <vector>

class FirstMissingPositive {
public:
    int firstMissingPositive(std::vector<int>& nums);
};


#endif //LEETCODE_FIRSTMISSINGPOSITIVE_H
