// Solver.hpp

#ifndef SOLVER_HPP
#define SOLVER_HPP

#include "Board.hpp"

// Solver struct definition
struct Solver {
    int isize;
    Board board;
};

// Function prototypes for Solver operations
void Solver_init(Solver* solver, int isize);
bool Solver_solve(Solver* solver);
void Solver_displaySolution(const Solver* solver);

#endif // SOLVER_HPP

