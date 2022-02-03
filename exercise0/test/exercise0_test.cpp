/* 
 * This tells Catch to provide a main()
 * Only do this in one cpp file
 */
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#include "../src/exercise0.cpp"
 
TEST_CASE( "Numbers are added", "[adder]" ) {
    REQUIRE( adder(0, 1) == 1 );
    REQUIRE( adder(-1, 1) == 0 );
    REQUIRE( adder(1, 2) == 3 );
}
