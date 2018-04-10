/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise3.cpp"
 
TEST_CASE( "Sum of all items", "[task3]" ) {
    int array0[] = {};
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {2, 4, 6, 8, 10};
    CHECK( task3(array0, 0) == 0 );
    CHECK( task3(array1, 5) == 25 );
    CHECK( task3(array2, 5) == 30 );
    CHECK_FALSE( task3(array2, 5) == 25 );
}

TEST_CASE( "Find an item in array", "[task4]" ) {
    int array1[] = {1, 3, 5, 7, 9};
    int array2[] = {2, 4, 6, 8, 10};
    CHECK( task4(array1, 5, 7) );
    CHECK_FALSE( task4(array2, 5, 7) );
}

TEST_CASE( "Are the letters ordered", "[task5]" ) {
    CHECK( task5("buy") );
    CHECK_FALSE( task5("bye") );
}

TEST_CASE( "Find an item in vector", "[task6]" ) {
    vector<int> list1 = {1, 3, 5, 7, 9};
    vector<int> list2 = {2, 4, 6, 8, 10};
    CHECK( task6(list1, 7) );
    CHECK_FALSE( task6(list2, 7) );
}

TEST_CASE( "Find items below threshold", "[task8]" ) {
    vector<int> list1 = {1, 3, 5, 7, 9};
    vector<int> list2 = {2, 4, 6, 8, 10};
    CHECK( task8(list1, 7) == 3 );
    CHECK( task8(list2, 1) == 0 );
}

TEST_CASE( "Reverse a vector", "[task9]" ) {
    vector<int> list1 = {1, 3, 5, 7, 9};
    vector<int> list1r = {9, 7, 5, 3, 1};
    vector<int> list2 = {2, 4, 6, 8, 10};
    vector<int> list2r = {10, 8, 6, 4, 2};
    CHECK( task9(list1) == list1r );
    CHECK( task9(list2) == list2r );
    CHECK_FALSE( task9(list1) == list2 );
    CHECK_FALSE( task9(list2) == list1 );
}

TEST_CASE( "Find prime numbers", "[task10]" ) {
    vector<int> list1 = task10(10);
    vector<int> list2 = task10(100);
    CHECK( list1.at(0) == 2 );
    CHECK( list1.at(3) == 7 );
    CHECK( list2.at(5) == 13 );
    CHECK( list2.at(20) == 73 );
}
