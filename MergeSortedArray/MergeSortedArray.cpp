//
// Created by 郑巍 on 2020/3/20.
//

#include "MergeSortedArray.h"

void MergeSortedArray::merge(std::vector<int> &nums1, int m,std::vector<int> &nums2, int n) {
    int i = m - 1, j = n - 1, tar = m + n - 1;
    while (j >= 0) {
        nums1[tar--] = (i >= 0) && (nums1[i] > nums2[j]) ? nums1[i--] : nums2[j--];
    }
}