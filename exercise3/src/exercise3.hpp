/*
 * Assignment: Exercise 3
 * Author: Roman Yasinovskyy
 * Date: 2018-04-10
 */
#ifndef EXERCISE3_H
#define EXERCISE3_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

//Assuming the values in the array are grades (0-100), print number of students with 'A', 'B', 'C', 'D' and 'F'.
void task1(int grades[], int size);
//Find the difference between 100 and the largest element of the array and add this difference to every element in the array. Note: after this function call the largest value in the array must be 100.
void task2(int grades[], int size);
//Calculate and return sum of all elements in an array.
int task3(int array[], int size);
//Check if a number is in an array and return true or false
bool task4(int array[], int size, int number);
//Tell if letters of a word are ordered (ie. "buy" would return true, while "bye" - false).
bool task5(string aWord);
//Check if a number is in a vector and return true or false
bool task6(vector<int> list, int number);
//Create a vector of integers of ther specified size, initialize each element of the vector to a random number between 50 and 100, and return the vector.
vector<int> task7(int size);
//Return the number of values in the vector below the threshold.
int task8(vector<int> grades, int threshold);
//Reverse the values in a vector.
vector<int> task9(vector<int> list);
//Implement sieve of Eratosthenes and return a vector that contains all prime numbers between 1 and threshold.
vector<int> task10(int threshold);

#endif
