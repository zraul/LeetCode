//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

#include "RestoreIPAddresses/RestoreIPAddresses.h"

int main()
{
    RestoreIPAddresses* r = new RestoreIPAddresses();
    std::vector<std::string> ip = r->restoreIpAddresses("25525511135");
    for (int i = 0; i < ip.size(); ++i) {
        std::cout<<ip[i]<<std::endl;
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
