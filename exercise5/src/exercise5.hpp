/*
 * Assignment: Exercise 5
 * Author: Roman Yasinovskyy
 * Date: 2018-04-16
 */
#ifndef EXERCISE5_H
#define EXERCISE5_H

#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

/*
 * Task 1
 * Create a structure Contact with the following fields: string name, string phone.
 * */
struct Contact {
    string name;
    string phone;
};

/*
 * Task 2
 * Create a structure Room with the following fields: string building, int number.
 * */
struct Room {
    string building;
    int number;
};

/*
 * Task 3
 * Create a structure Employee with the following fields: string firstName, string lastName, double salary, bool isFullTime.
 * */
struct Employee {
    string firstName;
    string lastName;
    double salary;
    bool isFullTime;
};

/*
 * Task 4
 * Create a structure Animal with the following fields: double weight, bool isHungry.
 * */
struct Animal {
    double weight;
    bool isHungry;
};

/*
 * Task 5
 * Create a structure Game with the following fields: string title, int rating.
 * */
struct Game {
    string title;
    int rating;
};

/*
 * Task 6
Create a structure Song with the following fields: string title, string artist.
*/
struct Song {
    string title;
    string artist;
};

/*
 * Task 7
 * Create a structure Company with the following fields: string name, double stockPrice.
 * */
struct Company {
    string name;
    double stockPrice;
};

double getStockPrice(Company);
void setStockPrice(Company&, double);

/*
 * Task 8
 * Create a structure Laptop with the following fields: manufacturer, price, and color.
 * */
struct Laptop {
    string manufacturer;
    double price;
    string color;
};

void initLaptop(Laptop&, string, double, string);

/*
 * Task 9
 * Create a structure University with the following private fields: string name, int rating.
 * The structure should have public methods getName, setName, getRating, and setRating.
 * */
struct University {
    private:
        string name;
        int rating;
    public:
        string getName() const;
        void setName(string);
        int getRating() const;
        void setRating(int);
};

/*
 * Task 10
 * Create a structure Student with the fields name, major, and gpa.
 * */
struct Student {
    string name;
    string major;
    double gpa;
};

#endif
