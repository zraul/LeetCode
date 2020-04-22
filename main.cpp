//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

//#include "InsertionSortList/InsertionSortList.h"
#include "EvaluateReversePolishNotation/EvaluateReversePolishNotation.h"

int main()
{
//    WordBreakII* w = new WordBreakII();
//    vector<string> wordDict = {"apple", "pen", "applepen", "pine", "pineapple"};
//    vector<string> r = w->wordBreak("pineapplepenapple", wordDict);
//    for (int i = 0; i < r.size(); ++i) {
//        std::cout<<r[i]<<std::endl;
//    }
    EvaluateReversePolishNotation *m = new EvaluateReversePolishNotation();

    vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    std::cout<<m->evalRPN(tokens)<<std::endl;
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
