// Board.cpp

#include "Board.hpp"
#include <iostream>

void Board_init(Board* board, size_t bsize) {
    board->bsize = bsize;
    board->board.resize(bsize, std::vector<size_t>(bsize, 0));  // 2D vector with all 0s
    board->cols.resize(bsize, false);  // Initialize column occupancy to false
}

void Board_placeQueen(Board* board, int row, int col) {
    board->board[row][col] = 1;
    board->cols[col] = true;
}

void Board_removeQueen(Board* board, int row, int col) {
    board->board[row][col] = 0;
    board->cols[col] = false;
}

bool Board_isSafe(const Board* board, int row, int col) {
    // Check the column
    if (board->cols[col]) {
        return false;
    }

    // Check the upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board->board[i][j] == 1) {
            return false;
        }
    }

    // Check the upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < board->bsize; i--, j++) {
        if (board->board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

void Board_display(const Board* board) {
    for (size_t i = 0; i < board->bsize; i++) {
        for (size_t j = 0; j < board->bsize; j++) {
            if (board->board[i][j] == 1) {
                std::cout << "Q ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}
