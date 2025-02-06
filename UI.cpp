// UI.cpp

#include "UI.hpp"
#include <iostream>

void UI_init(UI* ui) {
    std::cout << "Welcome to the N-Queens Solver!" << std::endl;
}

void UI_drawMessage(UI* ui, const std::string& message) {
    std::cout << message << std::endl;
}

void UI_displaySolution(UI* ui, const Solver* solver) {
    Board_display(&solver->board);
}
