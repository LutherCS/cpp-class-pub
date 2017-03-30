#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <time.h>

//Print "Hello World" to the default system output.
void task1();
//Print all numbers between 1 and 100 (inclusive) replacing all multiples of 3 with "foo", multiples of 5 with "bar", multiples of 3 and 5 with "huh".
void task2();
//Calculate and print sum of all multiples of 7 between 1 and 100 (inclusive).
void task3();
//Calculate and print sum and product of all numbers between 1 and 20 (inclusive). Hint: use a proper data type to hold a very large value of the product. 
void task4();
//Ask a user to enter their full name and print the initials (ie. John Doe should yield JD).
void task5();
//Create a static array of 10 elements and initiate each element in it to the cube of its index. (Do it in a loop, not during declaration).
void task6();
//Create an array of 100 random integers between 1 and 100, ask the user for an integer and tell if that number is in the array. Hint: use rand() to generate random numbers.
void task7();
//Create a static array of 10 random elements and write a function that takes an array of integers and its size as parameters and returns sum of its elements (int sumArray(int list[], int size);).
int task8(int[], int);
//Ask a user to enter a word and write a function that tells if letters of a word are ordered (ie. "buy" would return true, while "bye" - false).
bool task9();
//Implement sieve of Eratosthenes and print all prime numbers between 1 and 100.
void task10();
