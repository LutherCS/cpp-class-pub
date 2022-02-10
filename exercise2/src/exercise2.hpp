/**
 * @file exercise2.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 2 header
 * @version 2022.2
 * @date 2022-02-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE2_H
#define EXERCISE2_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>

using namespace std;

/**
 * @brief Take name as a parameter and concatenate it with *Hello*
 *
 * @return Hello, name
 */
string task1(string);

/**
 * @brief Take full name as a parameter and extract initials
 *
 * @return Initials of the name
 */
string task2(string);

/**
 * @brief Takes age as a parameter and checks if it's less than 21
 *
 * @return true if less than 21
 * @return false if greater than or equal to 21
 */
bool task3(int);

/**
 * @brief Take number (n) as a parameter checks if it's odd
 *
 * @return true if odd
 * @return false otherwise
 */
bool task4(int);

/**
 * @brief Take number (n) as a parameter and compute sum of all positive numbers
 * up to n
 *
 * @return The sum of all positive numbers up to n
 */
int task5(int);

/**
 * @brief Take number (n) as a parameter and simulate coin flips until there are
 * (n) heads in a row. Return number of flips. Seed the randomizer as follows:
 * srand(0);
 *
 * @return Number of flips until there are (n) heads in a row
 */
int task6(int);

/**
 * @brief Take two numbers (m and n) as parameters and return number of
 * multiples of 10 between m and n (inclusive)
 *
 * @return The number of multiples of 10 between m and n (inclusive)
 */
int task7(int, int);

//
/**
 * @brief Take a string and two numbers (m and n) as parameters and find a
 * substring between m and n (inclusive)
 *
 * @return A substring of (s) between indexes m and n (inclusive)
 */
string task8(string, int, int);

/**
 * @brief Take 3 numbers (a, b, c) as parameters and return their average
 *
 * @return The mean of 3 numbers
 */
float task9(int, int, int);

/**
 * @brief Take 3 numbers (a, b, c) as parameters and return the greatest of them
 *
 * @return The greatest of 3 numbers
 */
float task10(float, float, float);

#endif
