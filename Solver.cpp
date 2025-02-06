// Solver.cpp

#include "Solver.hpp"
#include <iostream>
#include <vector>

void Solver_init(Solver* solver, int isize) {
    solver->isize = isize;
    Board_init(&solver->board, isize);
}

bool Solver_solve(Solver* solver) {
    std::vector<int> positions(solver->isize, -1);  // To store the column for each row
    int row = 0;  // Starting from the first row

    // Iterate until we either find a solution or exhaust all possibilities
    while (row >= 0) {
        bool found = false;

        // Try all columns for the current row
        for (int col = positions[row] + 1; col < solver->isize; ++col) {
            if (Board_isSafe(&solver->board, row, col)) {
                // Place the queen
                positions[row] = col;
                Board_placeQueen(&solver->board, row, col);

                // Move to the next row
                found = true;
                row++;
                positions[row] = -1;  // Reset the column for this row
                break;
            }
        }

        // Backtracking: If no valid column found, go back to the previous row
        if (!found) {
            if (row > 0) {
                row--;
                int col = positions[row];
                Board_removeQueen(&solver->board, row, col);
            } else {
                // No solution found, return
                return false;
            }
        }

        // If we've placed queens in all rows, return true
        if (row == solver->isize) {
            return true;
        }
    }
    return false;
}

void Solver_displaySolution(const Solver* solver) {
    Board_display(&solver->board);
}
