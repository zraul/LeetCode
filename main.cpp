//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

#include "PopulatingNextRightPointersInEachNodeII/PopulatingNextRightPointersInEachNodeII.h"

int main()
{
    Node* n2 = new Node(4);
    Node* n3 = new Node(5);
    Node* n4 = new Node(7);
    Node* n5 = new Node(2, n2, n3, NULL);
    Node* n6 = new Node(3, NULL, n4,NULL);
    Node* n1 = new Node(1, n5, n6, NULL);

    PopulatingNextRightPointersInEachNodeII* p = new PopulatingNextRightPointersInEachNodeII();
    Node* nn = p->connect(n1);
    std::cout<<"dddddd"<<std::endl;
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
