/**
 * @file exercise3.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 3 header
 * @version 2022.2
 * @date 2022-02-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE3_H
#define EXERCISE3_H

#include <array>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <list>
#include <numeric>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

/**
 * @brief Assuming the values in the array are grades (0-100), print number of
 * students with 'A', 'B', 'C', 'D' and 'F'.
 *
 * @param array of grades
 * @param size of the array
 */
void task1(int[], int);

/**
 * @brief Find the difference between 100 and the largest element of the array
 * and add this difference to every element in the array. Note: after this
 * function call the largest value in the array must be 100.
 *
 * @param array of grades
 * @param size of the array
 */
void task2(int[], int);

/**
 * @brief Calculate and return sum of all elements in a list
 *
 * @param list of numbers
 * @return The sum of all items.
 */
int task3(list<int>);

/**
 * @brief Check if a number is in an list and return true or false
 *
 * @param list of numbers
 * @param number to find
 * @return true if the number is in the array
 * @return false otherwise
 */
bool task4(list<int>, int);

/**
 * @brief Tell if letters of a word are ordered (ie. "buy" would return true,
 * while "bye" - false).
 *
 * @param a word to check
 * @return true if the letters are in order
 * @return false otherwise
 */
bool task5(string);

/**
 * @brief Check if a number is in a vector and return true or false
 *
 * @param a vector of numbers
 * @param number to find
 * @return true if the number is in the vector
 * @return false otherwise
 */
bool task6(vector<int>, int);

/**
 * @brief Create a vector of integers of ther specified size, initialize each
 * element of the vector to a random number between 50 and 100, and return the
 * vector.
 *
 * @param size of the vector
 * @return vector of integers
 */
vector<int> task7(int);

/**
 * @brief Check the vector of numbers and return the number of values in the
 * vector below the threshold.
 *
 * @param vector of grades
 * @param threshold
 * @return The number of grades below the threshold.
 */
int task8(vector<int>, int);

/**
 * @brief Reverse the values in a vector.
 *
 * @param vector of numbers
 * @return The reversed vector.
 */
vector<int> task9(vector<int>);

/**
 * @brief Implement sieve of Eratosthenes and return a vector that contains all
 * prime numbers between 1 and threshold.
 *
 * @param threshold
 * @return Prime numbers below the threshold as a vector.
 */
vector<int> task10(int);

#endif
