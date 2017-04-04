#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <cmath>

using namespace std;

//Define a function that takes an integer number (n) as a parameter and prints the result of coin flips ("Heads" or "Tails" with equal probability) until there are n "Heads" in a row. Seed the randomizer in the main() function.
void task1(int);
//Define a function that takes an array of integers and a number as parameters and returns boolean true if the number provided is larger than every element of the array.
bool task2(int[], int, int);
//Define a function that takes an array of integers and its size as parameters and prints number of values below 75.
int task3(int[], int);
//Define a function that takes an array of integers and its size as parameters, finds the difference between 100 and the largest element of the array and adds this difference to every element in the array. Print the array before and after the function call. (Note: after this function call the largest value in the array must be 100.)
void task4(int[], int);
//Define a function that takes an array of integers and its size as parameters and, assuming the values are grades (0-100), prints number of students with 'A', 'B', 'C', 'D' and 'F'.
void task5(int[], int);
//Define a function that creates a vector of double values and asks a user to start entering numbers. Keep asking and adding numbers to the vector until the user enters 0, then stop and print all the values in the vector. Use function push_back() to add a number to a vector.
void task6();
//Define a function that takes an integer as a parameter, creates a vector of integers of the specified size, initializes each element of the vector to a random number between 50 and 100, and returns the vector. Print the vector in the main function.
vector<int> task7(int);
//Define a function that takes a vector of integer values as a parameter and returns the number of values in the vector below 75. You may use the vector created at the previous step.
int task8(vector<int>);
//Define a function that generates a 2-dimensional array of size 10x10 (matrix, number of rows, and number of columns are paramenters). Initialize values in the array to the values in the multiplication table of size 10. (e.g. values in the intersections must start with 1 (1x1) and go all the way up to 100). Print the array.
void task9(int[10][10], int, int);
//Calculate and print the sum of values in each row and each column of the matrix generated at the previous step. The matrix, number of rows, and number of columns are paramenters.
void task10(int[10][10], int, int);
