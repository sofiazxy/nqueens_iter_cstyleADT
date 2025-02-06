# Makefile
# Build rules for EECS 280 project 2

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = --std=c++11 -Wall -Werror -pedantic -g

# Run a regression test
test: Board_tests.exe nqueens.exe 
	./Board_tests.exe
	./nqueens.exe < infile > 8Q_outfile
	diff 8Q_outfile 8Q_outfile.correct


Board_tests.exe: Board.cpp UI.cpp Solver.cpp Board_tests.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@

nqueens.exe: Board.cpp UI.cpp Solver.cpp main.cpp
	$(CXX) $(CXXFLAGS) $^ -o $@


# Disable built-in Makefile rules
.SUFFIXES:

clean:
	rm -rvf *.exe *.out.txt *.out.ppm *.dSYM *.stackdump

# Run style check tools
CPPCHECK ?= cppcheck
CPD ?= /usr/um/pmd-6.0.1/bin/run.sh cpd
OCLINT ?= /usr/um/oclint-0.13/bin/oclint
FILES := \
  Board.cpp \
  UI.cpp \
  Solver.cpp \
  Board_tests.cpp \
  main.cpp
