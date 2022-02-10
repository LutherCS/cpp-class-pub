/**
 * @file exercise3_test.cpp
 * @author Roman Yasinovskyy
 * @brief Exercise 3 test
 * @version 2022.2
 * @date 2022-02-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif

#include "../src/exercise3.hpp"

TEST_CASE("Print grades", "[task1]") {
  string expected = "\
A    2\n\
B    2\n\
C    3\n\
D    2\n\
F    1\n\
";
  const int size = 10;
  int grades[] = {76, 91, 65, 70, 55, 78, 82, 87, 95, 60};
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task1(grades, size);
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Update grades", "[task2]") {
  const int size = 10;
  int grades[] = {76, 91, 65, 70, 55, 78, 82, 87, 95, 60};
  int grades_upd[] = {81, 96, 70, 75, 60, 83, 87, 92, 100, 65};

  task2(grades, size);
  for (int i = 0; i < size; i++) {
    CHECK(grades[i] == grades_upd[i]);
  }
}

TEST_CASE("Sum of all items", "[task3]") {
  list<int> list0 = {};
  list<int> list1 = {1, 3, 5, 7, 9};
  list<int> list2 = {2, 4, 6, 8, 10};
  CHECK(task3(list0) == 0);
  CHECK(task3(list1) == 25);
  CHECK(task3(list2) == 30);
  CHECK_FALSE(task3(list2) == 25);
}

TEST_CASE("Find an item in array", "[task4]") {
  list<int> list1 = {1, 3, 5, 7, 9};
  list<int> list2 = {2, 4, 6, 8, 10};
  CHECK(task4(list1, 3));
  CHECK(task4(list2, 4));
  CHECK_FALSE(task4(list1, 6));
  CHECK_FALSE(task4(list2, 7));
}

TEST_CASE("Are the letters ordered", "[task5]") {
  CHECK(task5("buy"));
  CHECK(task5("ahoy"));
  CHECK_FALSE(task5("aloha"));
  CHECK_FALSE(task5("bye"));
}

TEST_CASE("Find an item in vector", "[task6]") {
  vector<int> list1 = {1, 3, 5, 7, 9};
  vector<int> list2 = {2, 4, 6, 8, 10};
  CHECK(task6(list1, 3));
  CHECK(task6(list2, 4));
  CHECK_FALSE(task6(list1, 6));
  CHECK_FALSE(task6(list2, 7));
}

TEST_CASE("Generate grades", "[task7]") {
  const int size = 10;
  vector<int> expected = {83, 86, 77, 65, 93, 85, 86, 92, 99, 71};
  vector<int> result = task7(size);

  CHECK(result == expected);
}

TEST_CASE("Find items below threshold", "[task8]") {
  vector<int> list1 = {1, 3, 5, 7, 9};
  vector<int> list2 = {2, 4, 6, 8, 10};
  CHECK(task8(list1, 0) == 0);
  CHECK(task8(list1, 7) == 3);
  CHECK(task8(list2, 1) == 0);
  CHECK(task8(list2, 10) == 4);
}

TEST_CASE("Reverse a vector", "[task9]") {
  vector<int> list1 = {1, 3, 5, 7, 9};
  vector<int> list1r = {9, 7, 5, 3, 1};
  vector<int> list2 = {2, 4, 6, 8, 10};
  vector<int> list2r = {10, 8, 6, 4, 2};
  CHECK(task9(list1) == list1r);
  CHECK(task9(list2) == list2r);
  CHECK_FALSE(task9(list1) == list2);
  CHECK_FALSE(task9(list2) == list1);
}

TEST_CASE("Find prime numbers", "[task10]") {
  vector<int> list1 = task10(10);
  vector<int> list2 = task10(100);
  CHECK(list1.at(0) == 2);
  CHECK(list1.at(3) == 7);
  CHECK(list2.at(5) == 13);
  CHECK(list2.at(20) == 73);
}
