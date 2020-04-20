//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

//#include "WordBreakII/WordBreakII.h"
#include "BinaryTreePreorderTraversal/BinaryTreePreorderTraversal.h"

int main()
{
//    WordBreakII* w = new WordBreakII();
//    vector<string> wordDict = {"apple", "pen", "applepen", "pine", "pineapple"};
//    vector<string> r = w->wordBreak("pineapplepenapple", wordDict);
//    for (int i = 0; i < r.size(); ++i) {
//        std::cout<<r[i]<<std::endl;
//    }
    BinaryTreePreorderTraversal *b = new BinaryTreePreorderTraversal();
    TreeNode t1(1);
    TreeNode t2(2);
    TreeNode t3(3);

    t1.right = &t2;
    t2.left = &t3;

    vector<int> v = b->preorderTraversal(&t1);
    for (int i = 0; i < v.size(); ++i) {
        std::cout<<v[i]<<",";
    }

    std::cout<<std::endl;
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
