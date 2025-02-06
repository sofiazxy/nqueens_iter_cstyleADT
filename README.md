Hey There! This is the C Style ADT solution of the N Queen Problem. The solution has the Board struct, the Solver struct and the UI struct. Even though, a modular approach to this problem may seem pedantic and even a bit of a stretch, it does demonstrate usefulness for the standpoint of implemeting procedural and data abstraction. 

I think this a great learning (and teaching) tool for understanding the elements of how to define structs and then associate behaviors of functions with each of these structs. 
main.cpp is the driver program.
 
The solution uses a 1 D vector for backtracking to consider available columns on previous rows and a 2D vector for the board.

The makefile can create two executables - nqueens.exe and board_tests.exe
board_tests.cpp file uses the unit_test_framework for testcase development.

Finally, the regression testing that occurs when you invoke the make command runs both these exes, and provides an input of 8 that is redirected from an input file into the nqueens exe. The output from the program is rediretced to an output file and this output is diffed against the correct output file.

The next iteration (its still early to say recursion!) of the journey, is to take a look at the solution to this problem with cpp classes. Stay tuned!

The final version of this will be a recursive solution to this problem using classes.

And one last thing - this implementation only provides one soltuion to the N Queen problem, if a solution exists. For providing all possible solutions, we can build upon this exisitng framework.

Enjoy!
