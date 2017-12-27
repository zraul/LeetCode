cmake_minimum_required(VERSION 3.7)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp common.h Two-Sum/twosum.cpp Two-Sum/twosum.h AddTwoNumbers/AddTwoNumbers.cpp AddTwoNumbers/AddTwoNumbers.h LongestSubString/LongestSubString.cpp LongestSubString/LongestSubString.h MedianTwoSortedArrays/MedianTwoSortedArrays.cpp MedianTwoSortedArrays/MedianTwoSortedArrays.h ZigZag/ZigZag.cpp ZigZag/ZigZag.h ReverseInteger/ReverseInteger.cpp ReverseInteger/ReverseInteger.h MyAtoi/MyAtoi.cpp MyAtoi/MyAtoi.h RemoveDuplicates/RemoveDuplicates.cpp RemoveDuplicates/RemoveDuplicates.h MergeSortedLists/MergeSortedLists.cpp MergeSortedLists/MergeSortedLists.h PalindromeNumber/PalindromeNumber.cpp PalindromeNumber/PalindromeNumber.h)
add_executable(LeetCode ${SOURCE_FILES})