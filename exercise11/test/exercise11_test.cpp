/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise11.cpp"


TEST_CASE ( "Iterative Fibonacci", "[fiboIte]" ) {
    CHECK ( fiboIte(1) == 1 );
    CHECK ( fiboIte(5) == 5 );
    CHECK ( fiboIte(10) == 55 );
    CHECK ( fiboIte(20) == 6765 );
}

TEST_CASE ( "Recursive Fibonacci", "[fiboRec]" ) {
    CHECK ( fiboRec(1) == 1 );
    CHECK ( fiboRec(5) == 5 );
    CHECK ( fiboRec(10) == 55 );
    CHECK ( fiboRec(20) == 6765 );
}

TEST_CASE ( "Iterative Factorial", "[factIte]" ) {
    CHECK ( factIte(1) == 1 );
    CHECK ( factIte(5) == 120 );
    CHECK ( factIte(10) == 3628800 );
    CHECK ( factIte(20) == 2432902008176640000 );
}

TEST_CASE ( "Recursive Factorial", "[factRec]" ) {
    CHECK ( factRec(1) == 1 );
    CHECK ( factRec(5) == 120 );
    CHECK ( factRec(10) == 3628800 );
    CHECK ( factRec(20) == 2432902008176640000 );
}

TEST_CASE ( "Base Conversion", "[convert]" ) {
    CHECK ( convert(253, 2) == "11111101" );
    CHECK ( convert(253, 5) == "2003" );
    CHECK ( convert(253, 8) == "375" );
    CHECK ( convert(3735928559, 16) == "DEADBEEF" );
}

TEST_CASE ( "Add 3", "[add3]" ) {
    CHECK ( add3(1, 2, 3) == 6 );
    CHECK ( add3(1.5, 1.2, 1.3) == 4.0 );
    CHECK ( add3<string>("Luther", " ", "College") == "Luther College" );
    CHECK ( add3(10000000000, 20000000000, 30000000000) == 60000000000 );
}

TEST_CASE ( "Add N", "[addN]" ) {
    CHECK ( addN(3) == 3 );
    CHECK ( addN(1.5, 1.2, 1.3) == 4.0 );
    CHECK ( addN<string>("Hello ", "students", " ", "of ", "CS253") == "Hello students of CS253" );
    CHECK ( addN(10000000000, 20000000000, 30000000000, 40000000000) == 100000000000 );
}

TEST_CASE ( "Max 3", "[max3]" ) {
    CHECK ( max3(1, 2, 3) == 3 );
    CHECK ( max3(3, 2, 1) == 3 );
    CHECK ( max3(1.5, 1.2, 1.3) == 1.5 );
    CHECK ( max3('1', '2', 'a') == 'a' );
}

TEST_CASE ( "Max N", "[maxN]" ) {
    CHECK ( maxN(3) == 3 );
    CHECK ( maxN(1, 2) == 2 );
    CHECK ( maxN(1, 2, 3, 5, 4) == 5 );
    CHECK ( maxN('1', '2', 'a', '3') == 'a' );
}

TEST_CASE ( "Average N", "[avgN]" ) {
    CHECK ( avgN(1) == Approx ( 1.0 ).margin( 0.01 ) );
    CHECK ( avgN(1, 2) == Approx ( 1.5 ).margin( 0.01 ) );
    CHECK ( avgN(30000000000, 30000000000, 40000000000) == Approx ( 33333333333.3 ).margin( 0.01 ) );
    CHECK ( avgN(1.1, 2.2, 3.3, 4.4) == Approx ( 2.75 ).margin( 0.01 ) );
}
