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
        main.cpp SudokuSolver/SudokuSolver.cpp SudokuSolver/SudokuSolver.h CountAndSay/CountAndSay.cpp CountAndSay/CountAndSay.h CombinationSum/CombinationSum.cpp CombinationSum/CombinationSum.h FirstMissingPositive/FirstMissingPositive.cpp FirstMissingPositive/FirstMissingPositive.h TrappingRainWater/TrappingRainWater.cpp TrappingRainWater/TrappingRainWater.h MultiplyStrings/MultiplyStrings.cpp MultiplyStrings/MultiplyStrings.h WildcardMatching/WildcardMatching.cpp WildcardMatching/WildcardMatching.h JumpGame2/JumpGame2.cpp JumpGame2/JumpGame2.h Permutations/Permutations.cpp Permutations/Permutations.h PermutationsII/PermutationsII.cpp PermutationsII/PermutationsII.h RotateImage/RotateImage.cpp RotateImage/RotateImage.h GroupAnagrams/GroupAnagrams.cpp GroupAnagrams/GroupAnagrams.h Powxn/Powxn.cpp Powxn/Powxn.h NQueens/NQueens.cpp NQueens/NQueens.h NQueensII/NQueensII.cpp NQueensII/NQueensII.h MaximumSubarray/MaximumSubarray.cpp MaximumSubarray/MaximumSubarray.h SprialMatrix/SprialMatrix.cpp SprialMatrix/SprialMatrix.h RottingOranges/RottingOranges.cpp RottingOranges/RottingOranges.h DistributeCandiesToPeople/DistributeCandiesToPeople.cpp DistributeCandiesToPeople/DistributeCandiesToPeople.h JumpGame/JumpGame.cpp JumpGame/JumpGame.h MergeIntervals/MergeIntervals.cpp MergeIntervals/MergeIntervals.h InsertInterval/InsertInterval.cpp InsertInterval/InsertInterval.h LengthOfLastWord/LengthOfLastWord.cpp LengthOfLastWord/LengthOfLastWord.h SpiralMatrixII/SpiralMatrixII.cpp SpiralMatrixII/SpiralMatrixII.h PermutationSequence/PermutationSequence.cpp PermutationSequence/PermutationSequence.h RotateList/RotateList.cpp RotateList/RotateList.h UniquePaths/UniquePaths.cpp UniquePaths/UniquePaths.h UniquePathsII/UniquePathsII.cpp UniquePathsII/UniquePathsII.h MinimumPathSum/MinimumPathSum.cpp MinimumPathSum/MinimumPathSum.h ValidNumber/ValidNumber.cpp ValidNumber/ValidNumber.h PlusOne/PlusOne.cpp PlusOne/PlusOne.h AddBinary/AddBinary.cpp AddBinary/AddBinary.h TextJustification/TextJustification.cpp TextJustification/TextJustification.h Sqrtx/Sqrtx.cpp Sqrtx/Sqrtx.h ClimbingStairs/ClimbingStairs.cpp ClimbingStairs/ClimbingStairs.h SimplifyPath/SimplifyPath.cpp SimplifyPath/SimplifyPath.h EditDistance/EditDistance.cpp EditDistance/EditDistance.h SetMatrixZeroes/SetMatrixZeroes.cpp SetMatrixZeroes/SetMatrixZeroes.h Searcha2DMatrix/Searcha2DMatrix.cpp Searcha2DMatrix/Searcha2DMatrix.h SortColors/SortColors.cpp SortColors/SortColors.h MinimumWindowSubstring/MinimumWindowSubstring.cpp MinimumWindowSubstring/MinimumWindowSubstring.h Combinations/Combinations.cpp Combinations/Combinations.h Subsets/Subsets.cpp Subsets/Subsets.h WordSearch/WordSearch.cpp WordSearch/WordSearch.h RemoveDuplicatesII/RemoveDuplicatesII.cpp RemoveDuplicatesII/RemoveDuplicatesII.h SearchInRotatedSortedArrayII/SearchInRotatedSortedArrayII.cpp SearchInRotatedSortedArrayII/SearchInRotatedSortedArrayII.h RemoveDuplicatesFromSortedListII/RemoveDuplicatesFromSortedListII.cpp RemoveDuplicatesFromSortedListII/RemoveDuplicatesFromSortedListII.h RemoveDuplicatesFromSortedList/RemoveDuplicatesFromSortedList.cpp RemoveDuplicatesFromSortedList/RemoveDuplicatesFromSortedList.h LargestRectangleInHistogram/LargestRectangleInHistogram.cpp LargestRectangleInHistogram/LargestRectangleInHistogram.h MaximalRectangle/MaximalRectangle.cpp MaximalRectangle/MaximalRectangle.h PartitionList/PartitionList.cpp PartitionList/PartitionList.h ScrambleString/ScrambleString.cpp ScrambleString/ScrambleString.h MergeSortedArray/MergeSortedArray.cpp MergeSortedArray/MergeSortedArray.h GrayCode/GrayCode.cpp GrayCode/GrayCode.h SubsetsII/SubsetsII.cpp SubsetsII/SubsetsII.h DecodeWays/DecodeWays.cpp DecodeWays/DecodeWays.h ReverseLinkedListII/ReverseLinkedListII.cpp ReverseLinkedListII/ReverseLinkedListII.h RestoreIPAddresses/RestoreIPAddresses.cpp RestoreIPAddresses/RestoreIPAddresses.h BinaryTreeInorderTraversal/BinaryTreeInorderTraversal.cpp BinaryTreeInorderTraversal/BinaryTreeInorderTraversal.h UniqueBinarySearchTreesII/UniqueBinarySearchTreesII.cpp UniqueBinarySearchTreesII/UniqueBinarySearchTreesII.h UniqueBinarySearchTrees/UniqueBinarySearchTrees.cpp UniqueBinarySearchTrees/UniqueBinarySearchTrees.h)
