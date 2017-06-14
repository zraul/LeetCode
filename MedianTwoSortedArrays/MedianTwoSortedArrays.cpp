//
// Created by 郑巍 on 2017/4/18.
//

#include "MedianTwoSortedArrays.h"


// 合并数组方法
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
{
    int m = nums1.size();
    int n = nums2.size();

    vector<int> vec;
    vec.insert(vec.end(), nums1.begin(), nums1.end());
    vec.insert(vec.end(), nums2.begin(), nums2.end());

    sort(vec.begin(), vec.end());
    double median = (n + m) % 2 ?vec[(n + m) / 2]:(vec[(n + m -1) / 2] + vec[(n + m) / 2])/2.0;

    return median;
}
