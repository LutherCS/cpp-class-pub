/*
 * Assignment: Exercise 1
 * Author: Roman Yasinovskyy
 * Date: 2018-04-03
 */
#ifndef EXERCISE1_H
#define EXERCISE1_H

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

//Print "Hello World" to the default system output
void task1();
//Ask the user to enter their first name and print "Hello USERNAME"
void task2();
//Ask a user to enter their full name and print the initials (ie. John Doe should yield JD)
void task3();
//Ask a user to enter their age and print "Minor" (if age is less than 21) or "Major" (if age is 21+)
void task4();
//Generate a random number, print it, and print whether it's odd or even
void task5();
//Print all numbers between 1 and 20 (inclusive).
void task6();
//Calculate and print sum of all numbers between 1 and 100 (inclusive).
void task7();
//Calculate and print sum of all multiples of 253 between 1 and 2018 (inclusive).
void task8();
//Calculate and print sum and product of all numbers between 1 and 20 (inclusive). Hint: use a proper data type to hold a very large value of the product. 
void task9();
//Print all numbers between 1 and 100 (inclusive) replacing all multiples of 3 with "fuzz", multiples of 5 with "buzz", multiples of 3 and 5 with "zzz".
void task10();

#endif
