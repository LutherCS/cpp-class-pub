/*
 * Assignment: Exercise 4
 * Author: Roman Yasinovskyy
 * Date: 2018-04-11
 */
#ifndef EXERCISE4_H
#define EXERCISE4_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

// Read a matrix from the file
int** readMatrixFromFile(const char* fileInStr, int &rows, int &cols);
// Print a matrix
void printMatrix(int** matrix, int rows, int cols);
//Write a matrix to the file
void writeMatrix(int **matrix, int rows, int cols, const char* fileOutStr);
//Multiply two matrices
void multiplyMatrices(int** matrix1, int** matrix2, int** &result, int rows, int col_row, int cols);
//Delete a matrix
void deleteMatrix(int** matrix, int rows, int cols);

#endif
