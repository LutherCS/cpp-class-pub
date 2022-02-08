/*
 * Exercise 1 test
 */
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#include "../src/exercise1.cpp"

TEST_CASE("Task 1", "[task1]") {
  string expected = "Hello World\n";
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task1();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 2", "[task2]") {
  string expected = "Enter your first name\nHello Roman\n";
  stringstream fakein("Roman");
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *cinbuf = cin.rdbuf();
  cin.rdbuf(fakein.rdbuf());

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task2();
  CHECK(fakeout.str() == expected);

  cin.rdbuf(cinbuf);
  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 3", "[task3]") {
  string expected = "Enter your full name\nYour initials are JD\n";
  stringstream fakein("John Doe");
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *cinbuf = cin.rdbuf();
  cin.rdbuf(fakein.rdbuf());

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task3();
  CHECK(fakeout.str() == expected);

  cin.rdbuf(cinbuf);
  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 4", "[task4]") {
  string expected = "Enter your age\nMajor\n";
  stringstream fakein("22");
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *cinbuf = cin.rdbuf();
  cin.rdbuf(fakein.rdbuf());

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task4();
  CHECK(fakeout.str() == expected);

  cin.rdbuf(cinbuf);
  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 5", "[task5]") {
  string expected = "1804289383 is odd\n";
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task5();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 6", "[task6]") {
  string expected = "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 \n";
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task6();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 7", "[task7]") {
  string expected = "Sum of all numbers between 1 and 100 is 5050\n";
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task7();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 8", "[task8]") {
  string expected = "Sum of all multiples of 253 between 1 and 2018 is 7084\n";
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task8();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 9", "[task9]") {
  string expected =
      "Product of all numbers between 1 and 20 is 2432902008176640000\n";
  char fakeoutArr[1024];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task9();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}

TEST_CASE("Task 10", "[task10]") {
  string expected = "\
    1    2 fuzz    4 buzz fuzz    7    8 fuzz buzz\n\
   11 fuzz   13   14  zzz   16   17 fuzz   19 buzz\n\
 fuzz   22   23 fuzz buzz   26 fuzz   28   29  zzz\n\
   31   32 fuzz   34 buzz fuzz   37   38 fuzz buzz\n\
   41 fuzz   43   44  zzz   46   47 fuzz   49 buzz\n\
 fuzz   52   53 fuzz buzz   56 fuzz   58   59  zzz\n\
   61   62 fuzz   64 buzz fuzz   67   68 fuzz buzz\n\
   71 fuzz   73   74  zzz   76   77 fuzz   79 buzz\n\
 fuzz   82   83 fuzz buzz   86 fuzz   88   89  zzz\n\
   91   92 fuzz   94 buzz fuzz   97   98 fuzz buzz\n\
";
  char fakeoutArr[4096];
  stringstream fakeout(fakeoutArr);

  streambuf *coutbuf = cout.rdbuf();
  cout.rdbuf(fakeout.rdbuf());

  task10();
  CHECK(fakeout.str() == expected);

  cout.rdbuf(coutbuf);
}
