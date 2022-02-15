/**
 * @file exercise4_test.cpp
 * @author Roman Yasinovskyy
 * @brief Exercise 4 test
 * @version 2022.2
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef CATCH_CONFIG_MAIN
#define CATCH_CONFIG_MAIN
#include "../../catch2/catch.hpp"
#endif

#include "../src/exercise4.hpp"

TEST_CASE("Matrices are multiplied", "[multiply]") {
  const int row1_in = 2, col1_in = 4, row2_in = 4, col2_in = 1;
  int matrix1_in[2][4] = {{1, 8, 6, 1}, {2, 0, 2, 2}};
  int matrix2_in[4][1] = {{0}, {2}, {5}, {3}};
  int matrix3_out[2][1] = {{49}, {16}};

  int row1, col1, row2, col2;
  int **matrix1 = readMatrixFromFile("../data/exercise4_in_m1.txt", row1, col1);
  int **matrix2 = readMatrixFromFile("../data/exercise4_in_m2.txt", row2, col2);
  int **matrix3;
  multiplyMatrices(matrix1, matrix2, matrix3, row1_in, col1_in, col2_in);

  SECTION("Checking Matrix 1") {
    REQUIRE(row1 == row1_in);
    REQUIRE(col1 == col1_in);
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        CHECK(matrix1[i][j] == matrix1_in[i][j]);
      }
    }
  }

  SECTION("Checking Matrix 2") {
    REQUIRE(row2 == row2_in);
    REQUIRE(col2 == col2_in);
    for (int i = 0; i < row2; i++) {
      for (int j = 0; j < col2; j++) {
        CHECK(matrix2[i][j] == matrix2_in[i][j]);
      }
    }
  }

  SECTION("Multiply matrices") {
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col2; j++) {
        CHECK(matrix3[i][j] == matrix3_out[i][j]);
      }
    }
  }

  SECTION("Delete matrices") {
    deleteMatrix(matrix1, row1, col1);
    CHECK(matrix1 == nullptr);
    deleteMatrix(matrix2, row2, col2);
    CHECK(matrix2 == nullptr);
  }
}
