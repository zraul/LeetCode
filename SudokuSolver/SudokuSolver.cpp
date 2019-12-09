//
// Created by 郑巍 on 2019/12/4.
//

#include "SudokuSolver.h"

bool SudokuSolver::set(int i, int j, int v) {
    cell& c = this->cells[i][j];
    if (c.value == v) {
        return true;
    }

    if (c.constraints[v]) {
        return false;
    }

    c.constraints = std::bitset<10>(0x3FE);
    c.constraints.reset(v);
    c.numPossibilities = 1;
    c.value = v;

    for (int k = 0; k < 9; ++k) {
        if (i != k && !this->updateConstraints(k, j, v)) {
            return false;
        }

        if (j != k && !this->updateConstraints(i, k, v)) {
            return false;
        }

        int ix = (i / 3) * 3 + k / 3;
        int jx = (j / 3) * 3 + k % 3;

        if (ix != i && jx != j && !this->updateConstraints(ix, jx, v)) {
            return false;
        }
    }

    return true;
}

bool SudokuSolver::updateConstraints(int i, int j, int excludedValue) {
    cell& c = this->cells[i][j];
    if (c.constraints[excludedValue]) {
        return true;
    }

    if (c.value == excludedValue) {
        return false;
    }

    c.constraints.set(excludedValue);
    if (--c.numPossibilities > 1) {
        return true;
    }

    for (int v = 1; v <= 9; ++v) {
        if (!c.constraints[v]) {
            return set(i, j, v);
        }
    }
}

bool SudokuSolver::findValuesForEmptyCells() {
    this->bt.clear();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (!this->cells[i][j].value) {
                this->bt.push_back(std::make_pair(i, j));
            }
        }
    }

    std::sort(this->bt.begin(), this->bt.end(), [this](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return this->cells[a.first][a.second].numPossibilities < this->cells[b.first][b.second].numPossibilities;
    });

    return this->backtrack(0);
}

bool SudokuSolver::backtrack(int k) {
    if (k >= this->bt.size()) {
        return true;
    }

    int i = this->bt[k].first;
    int j = this->bt[k].second;
    if (this->cells[i][j].value) {
        return this->backtrack(k + 1);
    }

    auto constraints = this->cells[i][j].constraints;
    std::array<std::array<cell, 9>, 9> snapshot(this->cells);
    for (int v = 1; v <= 9; v++) {
        if (!constraints[v]) {
            if (this->set(i, j, v)) {
                if (this->backtrack(k + 1)) {
                    return true;
                }
            }
            this->cells = snapshot;
        }
    }

    return false;
}

void SudokuSolver::solveSudoku(std::vector<std::vector<char>> &board) {
    this->cells = std::array<std::array<cell, 9>, 9>();
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (board[i][j] != '.' && !this->set(i, j, board[i][j] - '0')){
                return;
            }
        }
    }

    if (!this->findValuesForEmptyCells()) {
        return;
    }

    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (this->cells[i][j].value) {
                board[i][j] = this->cells[i][j].value + '0';
            }
        }
    }
}