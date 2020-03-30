//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

#include "BinaryTreeLevelOrderTraversalII/BinaryTreeLevelOrderTraversalII.h"

int main()
{
    TreeNode l1(3);
    TreeNode l2(9);
    TreeNode l3(20);
    TreeNode l4(15);
    TreeNode l5(7);

    l1.left = &l2;
    l1.right = &l3;
    l3.left = &l4;
    l3.right = &l5;

    BinaryTreeLevelOrderTraversalII *b = new BinaryTreeLevelOrderTraversalII();
    std::vector<std::vector<int>> v = b->levelOrderBottom(&l1);

    for (int i = 0; i < v.size(); ++i) {
        for (int j = 0; j < v[i].size(); ++j) {
            std::cout<<v[i][j]<<",";
        }

        std::cout<<std::endl;
    }
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
