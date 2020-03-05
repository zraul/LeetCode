//
// Created by 郑巍 on 2020/3/4.
//

#include "NQueensII.h"

int NQueensII::totalNQueens(int n) {
    std::vector<bool> col(n, true);
    std::vector<bool> anti(2 * n - 1, true);
    std::vector<bool> main(2 * n - 1, true);
    std::vector<int> row(n, 0);
    int count = 0;
    this->dfs(0, row, col, main, anti, count);
    return count;
}

void NQueensII::dfs(int i, std::vector<int> &row, std::vector<bool> &col, std::vector<bool> &main,
                    std::vector<bool> &anti, int &count) {
    if (i == row.size()) {
        count++;
        return;
    }

    for (int j = 0; j < col.size(); j++) {
        if (col[j] && main[i + j] && anti[i + col.size() - 1 - j]) {
            row[i] = j;
            col[j] = main[i + j] = anti[i + col.size() - 1 - j] = false;
            dfs(i + 1, row, col, main, anti, count);
            col[j] = main[i + j] = anti[i + col.size() - 1 - j] = true;
        }
    }
}

int NQueensII::bitTotalNQueens(int n) {
    int count = 0;
    dfs(n, 0, 0, 0, 0, count);
    return count;
}

void NQueensII::dfs(int n, int row, int col, int ld, int rd, int& count) {
    if (row >= n) {
        count++;
        return;
    }

    int bits = ~(col|ld|rd) & ((1<<n) - 1);
    while (bits > 0) {
        int pick = bits & -bits;
        dfs(n, row + 1, col|pick, (ld|pick)<<1, (rd|pick)>>1, count);
        bits &= bits - 1;
    }
}