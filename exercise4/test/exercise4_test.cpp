/* 
 * This is an actual test file
 */
#include "catch.hpp"
#include "../src/exercise4.cpp"

TEST_CASE( "Matrices are multiplied", "[multiplyMatrices]" ) {
    const int r1 = 2, c1 = 4, r2 = 4, c2 = 1;
    int matrix1_in[2][4] = {{1, 8, 6, 1}, {2, 0, 1, 8}};
    int matrix2_in[4][1] = {{0}, {2}, {5}, {3}};
    int matrix3_out[2][1] = {{49}, {29}};
    int** matrix1 = new int*[r1];
    int** matrix2 = new int*[r2];
    int** matrix3 = new int*[r1];

    for (int i = 0; i < r1; i++) {
        matrix1[i] = new int[c1];
        for (int j = 0; j < c1; j++) {
            matrix1[i][j] = matrix1_in[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            CHECK( matrix1[i][j] == matrix1_in[i][j] );
        }
    }
    for (int i = 0; i < r2; i++) {
        matrix2[i] = new int[c2];
        for (int j = 0; j < c2; j++) {
            matrix2[i][j] = matrix2_in[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            CHECK( matrix2[i][j] == matrix2_in[i][j] );
        }
    }
    multiplyMatrices(matrix1, matrix2, matrix3, r1, c1, c2);
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            CHECK( matrix3[i][j] == matrix3_out[i][j] );
        }
    }
    deleteMatrix(matrix1, r1, c1);
    CHECK_FALSE ( **matrix1 );
    deleteMatrix(matrix2, r2, c2);
    CHECK_FALSE ( **matrix2 );
}
