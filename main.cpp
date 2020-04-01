//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

#include "FlattenBinaryTreeToLinkedList/FlattenBinaryTreeToLinkedList.h"

int main()
{
//    TreeNode l1(3);
//    TreeNode l2(9);
//    TreeNode l3(20);
//    TreeNode l4(15);
//    TreeNode l5(7);
//
//    l1.left = &l2;
//    l1.right = &l3;
//    l3.left = &l4;
//    l3.right = &l5;

    TreeNode l1(1);
    TreeNode l2(2);
    TreeNode l3(5);
    TreeNode l4(3);
    TreeNode l5(4);
    TreeNode l6(5);

    l1.left = &l2;
    l1.right = &l3;
    l2.left = &l4;
    l3.left = &l5;
    l3.right = &l6;

    FlattenBinaryTreeToLinkedList* p = new FlattenBinaryTreeToLinkedList();
    p->flatten(&l1);
}



//    std::vector<std::vector<char>> board = {{'5','3','.','.','7','.','.','.','.'},
//                                            {'6','.','.','1','9','5','.','.','.'},
//                                            {'.','9','8','.','.','.','.','6','.'},
//                                            {'8','.','.','.','6','.','.','.','3'},
//                                            {'4','.','.','8','.','3','.','.','1'},
//                                            {'7','.','.','.','2','.','.','.','6'},
//                                            {'.','6','.','.','.','.','2','8','.'},
//                                            {'.','.','.','4','1','9','.','.','5'},
//                                            {'.','.','.','.','8','.','.','7','9'}};
//
//    SudokuSolver* solver = new SudokuSolver();
//    solver->solveSudoku(board);
//
//   for (int i = 0; i < 9; i++) {
//       std::cout<<"-----------------"<<std::endl;
//       for (int j = 0; j < 9; ++j) {
//           std::cout<<board[i][j];
//           if (j != 8) {
//               std::cout<<'|';
//           }
//       }
//       std::cout<<std::endl;
//   }
