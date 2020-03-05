//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"


#include "DistributeCandiesToPeople/DistributeCandiesToPeople.h"

int main()
{
    DistributeCandiesToPeople *d = new DistributeCandiesToPeople();
    std::vector<int> n = d->distributeCandies(7, 4);
    std::vector<int> m = d->distributeCandies(10, 3);
    for (int i = 0; i < n.size(); ++i) {
        std::cout<<n[i]<<",";
    }
    std::cout<<std::endl;

    for (int i = 0; i < m.size(); ++i) {
        std::cout<<m[i]<<",";
    }
    return 0;
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
