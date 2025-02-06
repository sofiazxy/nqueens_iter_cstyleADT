/* Board_tests.cpp
 *
 * Unit tests for the Board 
 *
 * by Sofia Saleem
 * sofias@umich.edu
 * 2021-03-12
 */

#include "Board.hpp"
#include "unit_test_framework.hpp"
#include <sstream>
using namespace std;

// THESE TEST CASES AFRE VERY BASIC.
// YOU NEED TO WRITE YOUR OWN COMPREHENSIVE TEST CASES 
/*
TEST(test_init_board) {
   
}
*/

TEST(test_left_diagonal_clear) {
Board b;
Board_init(&b, 5);
Board_placeQueen(&b, 0, 0);
ASSERT_TRUE(Board_isSafe(&b, 1, 2));
ASSERT_FALSE(Board_isSafe(&b,1, 1));
Board_placeQueen(&b,1, 2);
ASSERT_TRUE(Board_isSafe(&b, 4, 3));
ASSERT_FALSE(Board_isSafe(&b, 2, 3));
ASSERT_FALSE(Board_isSafe(&b, 3, 4));
}
TEST(test_right_diagonal_clear) {
Board b;
Board_init(&b, 8);
Board_placeQueen(&b,0, 4);
ASSERT_TRUE(Board_isSafe(&b, 1, 2));
ASSERT_FALSE(Board_isSafe(&b, 1, 3));

Board_placeQueen(&b,5, 2);
ASSERT_TRUE(Board_isSafe(&b, 7, 7));
ASSERT_FALSE(Board_isSafe(&b, 6, 3));
ASSERT_FALSE(Board_isSafe(&b, 7, 4));
}

TEST_MAIN()
