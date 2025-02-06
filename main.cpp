// main.cpp

#include "Solver.hpp"
#include "UI.hpp"
#include <iostream>

int main() {
    int isize;
    UI ui;
    UI_init(&ui);

    std::cout << "Enter the size of the board (N): " << std::endl;
    std::cin >> isize;

    // Ensure that the size is within the bounds of the maximum size
    const int MAX_SIZE = 100;
    if (isize > MAX_SIZE) {
        std::cout << "Board size too large! Maximum size is " << MAX_SIZE << "." << std::endl;
        return 1;
    }

    Solver solver;
    Solver_init(&solver, isize);

    if (Solver_solve(&solver)) {
        UI_displaySolution(&ui, &solver);
    } else {
        UI_drawMessage(&ui, "No solution found for " + std::to_string(isize) + "-Queens.");
    }

    return 0;
}
