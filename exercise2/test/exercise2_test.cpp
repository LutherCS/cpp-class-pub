/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise2.cpp"
 
TEST_CASE( "Task 1", "[task1]" ) {
    CHECK( task1("Roman Yasinovskyy") == "Hello, Roman Yasinovskyy" );
    CHECK( task1("Roman") == "Hello, Roman" );
    CHECK( task1("Luther") == "Hello, Luther" );
    CHECK( task1("") == "Hello, " );
}

TEST_CASE( "Task 2", "[task2]" ) {
    CHECK( task2("Roman Yasinovskyy") == "RY" );
    CHECK( task2("John F Kennedy") == "JFK" );
    CHECK( task2("Edson  Arantes  do  Nascimento") == "EAdN" );
    CHECK( task2("") == "" );
}

TEST_CASE( "Task 3", "[task3]" ) {
    CHECK( task3(1) );
    CHECK( task3(0) );
    CHECK_FALSE( task3(253) );
    CHECK_FALSE( task3(2018) );
}

TEST_CASE( "Task 4", "[task4]" ) {
    CHECK( task4(1) );
    CHECK( task4(-1) );
    CHECK_FALSE( task4(0) );
    CHECK_FALSE( task4(2018) );
}

TEST_CASE( "Task 5", "[task5]" ) {
    CHECK( task5(-1) == 0 );
    CHECK( task5(0) == 0 );
    CHECK( task5(253) == 32131 );
    CHECK( task5(2018) == 2037171 );
}

TEST_CASE( "Task 6", "[task6]" ) {
    CHECK( task6(0) == 0 );
    CHECK( task6(1) == 2 );
    CHECK( task6(3) == 18 );
    CHECK( task6(10) == 531 );
}

TEST_CASE( "Task 7", "[task7]" ) {
    CHECK( task7(0, 1) == 1 );
    CHECK( task7(10, 10) == 1 );
    CHECK( task7(1861, 2018) == 15 );
    CHECK( task7(2018, 1861) == 0 );
}

TEST_CASE( "Task 8", "[task8]" ) {
    CHECK( task8("Roman", 1, 0) == "" );
    CHECK( task8("Roman", 0, 0) == "R" );
    CHECK( task8("Luther", 0, 1) == "Lu" );
    CHECK( task8("Luther", 2, 4) == "the" );
}

TEST_CASE( "Task 9", "[task9]" ) {
    CHECK( task9(2, 5, 3) == Approx ( 3.33 ).margin( 0.01 ) );
    CHECK( task9(1, 2, 1) == Approx ( 1.33 ).margin( 0.01 ) );
    CHECK( task9(-1, 0, 1) == 0 );
    CHECK( task9(0, 0, 0) == 0 );
}

TEST_CASE( "Task 10", "[task10]" ) {
    CHECK( task10(2.5, 5.3, 3.2) == Approx( 5.3 ) );
    CHECK( task10(1, 2, 3) == 3 );
    CHECK( task10(2, 3, 1) == 3 );
    CHECK( task10(3, 1, 2) == 3 );
}
