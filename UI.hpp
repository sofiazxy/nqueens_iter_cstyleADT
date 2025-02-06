// UI.hpp

#ifndef UI_HPP
#define UI_HPP

#include "Solver.hpp"
#include <string>

// UI struct definition
struct UI {
    // No specific members needed for UI in this design
};

// Function prototypes for UI operations
void UI_init(UI* ui);
void UI_drawMessage(UI* ui, const std::string& message);
void UI_displaySolution(UI* ui, const Solver* solver);

#endif // UI_HPP
