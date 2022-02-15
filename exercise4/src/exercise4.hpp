/**
 * @file exercise4.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 4 header
 * @version 2022.2
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE4_H
#define EXERCISE4_H

#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

/**
 * @brief Read a matrix from file
 *
 * @param fileInStr: name of the file
 * @param rows: rows in the matrix
 * @param cols: columns in each row
 * @return int**: pointer to the first element
 */
int **readMatrixFromFile(const char *fileInStr, int &rows, int &cols);

/**
 * @brief Print matrix
 *
 * @param matrix: pointer to the first element
 * @param rows: rows in the matrix
 * @param cols: columns in each row
 */
void printMatrix(int **matrix, int rows, int cols);

/**
 * @brief Write matrix to a file
 *
 * @return int**: pointer to the first element
 * @param rows: rows in the matrix
 * @param cols: columns in each row
 * @param fileOutStr: name of the file
 */
void writeMatrix(int **matrix, int rows, int cols, const char *fileOutStr);

/**
 * @brief Multiply two matrices
 *
 * @param matrix1: pointer to the first element of the first matrix
 * @param matrix2: pointer to the first element of the second matrix
 * @param result: pointer to the first element of the resulting matrix
 * @param rows: number of rows in the first matrix
 * @param col_row: number of columns in the first matrix (same as rows in the
 * second)
 * @param cols: number of columns in the second matrix
 */
void multiplyMatrices(int **matrix1, int **matrix2, int **&result, int rows,
                      int col_row, int cols);

/**
 * @brief Delete a matrix
 *
 * @return int**: pointer to the first element
 * @param rows: rows in the matrix
 * @param cols: columns in each row
 */
void deleteMatrix(int **&matrix, int rows, int cols);

#endif
