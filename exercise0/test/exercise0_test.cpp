/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise0.cpp"
 
TEST_CASE( "Numbers are added", "[adder]" ) {
    REQUIRE( adder(0, 1) == 1 );
    REQUIRE( adder(-1, 1) == 0 );
    REQUIRE( adder(1, 2) == 3 );
}
