cmake_minimum_required(VERSION 3.10)
project(LeetCode)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE Debug)

include_directories(.)
include_directories(AddTwoNumbers)
include_directories(LongestSubString)
include_directories(MedianTwoSortedArrays)
include_directories(MergeSortedLists)
include_directories(MyAtoi)
include_directories(PalindromeNumber)
include_directories(RegularExpressionMatching)
include_directories(RemoveDuplicates)
include_directories(ReverseInteger)
include_directories(Two-Sum)
include_directories(ValidSudoku)
include_directories(ZigZag)

add_executable(LeetCode
        AddTwoNumbers/AddTwoNumbers.cpp
        AddTwoNumbers/AddTwoNumbers.h
        LongestSubString/LongestSubString.cpp
        LongestSubString/LongestSubString.h
        MedianTwoSortedArrays/MedianTwoSortedArrays.cpp
        MedianTwoSortedArrays/MedianTwoSortedArrays.h
        MergeSortedLists/MergeSortedLists.cpp
        MergeSortedLists/MergeSortedLists.h
        MyAtoi/MyAtoi.cpp
        MyAtoi/MyAtoi.h
        PalindromeNumber/PalindromeNumber.cpp
        PalindromeNumber/PalindromeNumber.h
        RegularExpressionMatching/RegularExpressionMatching.cpp
        RegularExpressionMatching/RegularExpressionMatching.h
        RemoveDuplicates/RemoveDuplicates.cpp
        RemoveDuplicates/RemoveDuplicates.h
        ReverseInteger/ReverseInteger.cpp
        ReverseInteger/ReverseInteger.h
        Two-Sum/twosum.cpp
        Two-Sum/twosum.h
        ValidSudoku/ValidSudoku.cpp
        ValidSudoku/ValidSudoku.h
        ZigZag/ZigZag.cpp
        ZigZag/ZigZag.h
        common.h
        main.cpp SudokuSolver/SudokuSolver.cpp SudokuSolver/SudokuSolver.h CountAndSay/CountAndSay.cpp CountAndSay/CountAndSay.h CombinationSum/CombinationSum.cpp CombinationSum/CombinationSum.h FirstMissingPositive/FirstMissingPositive.cpp FirstMissingPositive/FirstMissingPositive.h TrappingRainWater/TrappingRainWater.cpp TrappingRainWater/TrappingRainWater.h MultiplyStrings/MultiplyStrings.cpp MultiplyStrings/MultiplyStrings.h WildcardMatching/WildcardMatching.cpp WildcardMatching/WildcardMatching.h JumpGame2/JumpGame2.cpp JumpGame2/JumpGame2.h Permutations/Permutations.cpp Permutations/Permutations.h PermutationsII/PermutationsII.cpp PermutationsII/PermutationsII.h)
