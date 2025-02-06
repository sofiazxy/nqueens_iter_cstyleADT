// Board.hpp

#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>

// Board struct definition
struct Board {
    size_t bsize;
    std::vector<std::vector<size_t>> board;  // 2D vector for the board
    std::vector<bool> cols;               // Vector for column occupancy
};

// Function prototypes for Board operations
void Board_init(Board* board, size_t bsize);
void Board_placeQueen(Board* board, int row, int col);
void Board_removeQueen(Board* board, int row, int col);
bool Board_isSafe(const Board* board, int row, int col);
void Board_display(const Board* board);

#endif // BOARD_HPP
