/*
 * Assignment: Exercise 2
 * Author: Roman Yasinovskyy
 * Date: 2018-04-04
 */
#ifndef EXERCISE2_H
#define EXERCISE2_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Take name as a parameter and return "Hello, <name>"
string task1(string);

//Take full name as a parameter and return initials
string task2(string);

//Takes age as a parameter and return boolean true if less than 21
bool task3(int);

//Take number as a parameter and return boolean true if it's odd, false otherwise
bool task4(int);

//Take number (n) as a parameter and return sum of all numbers between 1 and n (inclusive)
int task5(int);

//Take number (n) as a parameter and simulate coin flips until there are n heads in a row. Return number of flips. Initialise randomizer as follows: srand(0);
int task6(int);

//Take two numbers (m and n) as parameters and return number of multiples of 10 between m and n (inclusive)
int task7(int, int);

//Take a string and two numbers (m and n) as parameters and return a substring between m and n (inclusive)
string task8(string, int, int);

//Take 3 numbers (a, b, c) as parameters and return their average
float task9(int, int, int);

//Take 3 numbers (a, b, c) as parameters and return the greatest of them
float task10(float, float, float);

#endif
