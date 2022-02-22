/**
 * @file exercise7.hpp
 * @author Roman Yasinovskyy
 * @brief Exercise 7 header
 * @version 2022.2
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE7_H
#define EXERCISE7_H

#include <cmath>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <vector>

using namespace std;

/**
 * @brief Class Room
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Book {
private:
  string title;
  string author;
  double price;

public:
  Book(string, string, double);
  friend ostream &operator<<(ostream &, const Book &);
};

/**
 * @brief Class Room
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Room {
private:
  string building;
  int number;

public:
  Room(string, int);
  friend ostream &operator<<(ostream &, const Room &);
};

/**
 * @brief Class Employee
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Employee {
private:
  string firstName;
  string lastName;
  double salary;
  bool isFullTime;

public:
  Employee(string, string, double, bool);
  friend ostream &operator<<(ostream &, const Employee &);
};

/**
 * @brief Class Customer
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Customer {
private:
  double loan;
  int term;

public:
  Customer(double, int);
  inline double getLoan() { return loan; }
  inline int getTerm() { return term; }
  friend ostream &operator<<(ostream &, const Customer &);
};

/**
 * @brief Class Game
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Game {
private:
  string title;
  int rating;

public:
  Game(string, int);
  inline string getTitle() { return title; }
  inline int getRating() { return rating; }
  friend ostream &operator<<(ostream &, const Game &);
};

/**
 * @brief Class Song
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Song {
private:
  string title;
  string artist;

public:
  Song(string, string);
  inline string getTitle() { return title; }
  inline string getArtist() { return artist; }
  friend ostream &operator<<(ostream &, const Song &);
};

/**
 * @brief Class Company
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Company {
private:
  string name;
  double stockPrice;

public:
  Company(string, double);
  inline double getStockPrice() { return stockPrice; }
  inline void setStockPrice(double stockPrice) {
    this->stockPrice = stockPrice;
  }
  friend ostream &operator<<(ostream &, const Company &);
};

/**
 * @brief Class College
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 * NOTE: `changeCollegeRank` is already implemented
 */
class College {
private:
  string name;
  int rank;
  inline void setRank(int rank) { this->rank = rank; }

public:
  College(string, int);
  friend ostream &operator<<(ostream &, const College &);
  friend void changeCollegeRank(College &, int);
};

/**
 * @brief Class Laptop
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 * TODO: Implement getters and setters for the data members to return or change
 * their values, respectively
 */
class Laptop {
private:
  string manufacturer;
  double price;
  string color;

public:
  Laptop(string, double, string);
  inline string getManufacturer() { return this->manufacturer; }
  inline void setManufacturer(string manufacturer) {
    this->manufacturer = manufacturer;
  }
  inline double getPrice() { return this->price; }
  inline void setPrice(double price) { this->price = price; }
  inline string getColor() { return this->color; }
  inline void setColor(string color) { this->color = color; }
  friend ostream &operator<<(ostream &, const Laptop &);
};

/**
 * @brief Class Student
 *
 * TODO: Implement the constructor
 * TODO: Override operator `<<` to send data members to the specified stream
 */
class Student {
private:
  string name;
  string major;
  double gpa;

public:
  Student(string, string, double);
  friend ostream &operator<<(ostream &, const Student &);
};

/**
 * @brief Class Roster
 *
 * TODO: Implement the constructor as follows:
 *  - Open the file
 *  - Read name, major, and gpa in each line
 *  - Create an object of type Student from each line
 *  - Push a new object to the studentList
 *  - Close the file
 * NOTE: Operator `<<` to send data members to the specified stream
 */
class Roster {
private:
  vector<Student> studentList;

public:
  Roster(const char *);
  inline vector<Student> getStudentList() { return this->studentList; }
  friend ostream &operator<<(ostream &, const Roster &);
};

#endif
