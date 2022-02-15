/**
 * @file exercise5.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 5 header
 * @version 2022.2
 * @date 2022-02-11
 *
 * @copyright Copyright (c) 2022
 *
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

/**
 * @brief Task 1: define structure Contact with the following fields: string
 * name, string phone.
 *
 */
struct Contact {
  string name;
  string phone;
};

/**
 * @brief Task 2: define structure Room with the following fields: string
 * building, int number.
 *
 */
struct Room {
  string building;
  int number;
};

/**
 * @brief Task 3: define structure Employee with the following fields: string
 * firstName, string lastName, double salary, bool isFullTime.
 *
 */
struct Employee {
  string firstName;
  string lastName;
  double salary;
  bool isFullTime;
};

/**
 * @brief Task 4: define structure Animal with the following fields: double
 * weight, bool isHungry.
 *
 */
struct Animal {
  double weight;
  bool isHungry;
};

/**
 * @brief Task 5: define structure Game with the following fields: string title,
 * int rating.
 *
 */
struct Game {
  string title;
  int rating;
};

/**
 * @brief Task 6: define structure Song with the following fields: string title,
 * string artist.
 *
 */
struct Song {
  string title;
  string artist;
};

/**
 * @brief Task 7: define structure Company with the following fields: string
 * name, double stockPrice.
 *
 */
struct Company {
  string name;
  double stockPrice;
};

/**
 * @brief Get the Company Stock Price
 *
 * @param Company
 * @return current value of the stock price
 */
double getStockPrice(Company);

/**
 * @brief Set the Company Stock Price
 *
 * @param Company
 * @param new stock price
 *
 */
void setStockPrice(Company &, double);

/**
 * @brief Task 8: define structure Laptop with the following fields:
 * manufacturer, price, and color.
 *
 */
struct Laptop {
  string manufacturer;
  double price;
  string color;
};

/**
 * @brief Initialize Laptop properties
 *
 * @param Laptop
 * @param manufacturer
 * @param price
 * @param color
 *
 */
void initLaptop(Laptop &, string, double, string);

/**
 * @brief Task 9: define structure University with the following private fields:
 * string name, int rating. The structure should have public methods getName,
 * setName, getRating, and setRating.
 *
 */
struct University {
private:
  string name;
  int rating;

public:
  /**
   * @brief Get the Name value
   *
   * @return the current value of a University name
   */
  string getName() const;

  /**
   * @brief Set the Name value
   *
   * @param new name
   */
  void setName(string);

  /**
   * @brief Get the Rating value
   *
   * @return the current value of a University rating
   */
  int getRating() const;

  /**
   * @brief Set the Rating value
   *
   * @param new rating
   */
  void setRating(int);
};

/**
 * @brief Task 10: define structure Student with the fields name, major, and
 * gpa.
 *
 */
struct Student {
  string name;
  string major;
  double gpa;
};

#endif
