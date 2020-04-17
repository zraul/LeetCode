//#include "Two-Sum/twosum.h"
//#include "RemoveDuplicates/RemoveDuplicates.h"
//#include "PalindromeNumber/PalindromeNumber.h"
//#include "RegularExpressionMatching/RegularExpressionMatching.h"

//#include "WordBreakII/WordBreakII.h"
#include "LinkedListCycle/LinkedListCycle.h"

int main()
{
//    WordBreakII* w = new WordBreakII();
//    vector<string> wordDict = {"apple", "pen", "applepen", "pine", "pineapple"};
//    vector<string> r = w->wordBreak("pineapplepenapple", wordDict);
//    for (int i = 0; i < r.size(); ++i) {
//        std::cout<<r[i]<<std::endl;
//    }
    LinkedListCycle* l = new LinkedListCycle();
    ListNode l1(3);
    ListNode l2(2);
    ListNode l3(0);
    ListNode l4(4);

    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l4;
    l4.next = &l2;

    std::cout<<l->hasCycle(&l1)<<std::endl;
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
