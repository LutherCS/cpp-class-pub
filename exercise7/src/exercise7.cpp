/**
 * @file exercise7.cpp
 * @author 
 * @brief Exercise 7 implementation
 * @version 2022.2
 * @date 2022-02-22
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise7.hpp"
Book::Book(string title, string author, double price) {}

ostream &operator<<(ostream &os, const Book &b) { return os; }

Room::Room(string building, int number) {}

ostream &operator<<(ostream &os, const Room &r) { return os; }

Employee::Employee(string firstName, string lastName, double salary,
                   bool isFullTime) {}

ostream &operator<<(ostream &os, const Employee &e) { return os; }

Customer::Customer(double loan, int term) {}

ostream &operator<<(ostream &os, const Customer &c) { return os; }

Game::Game(string title, int rating) {}

ostream &operator<<(ostream &os, const Game &g) { return os; }

Song::Song(string title, string artist) {}

ostream &operator<<(ostream &os, const Song &s) { return os; }

Company::Company(string name, double stockPrice) {}

ostream &operator<<(ostream &os, const Company &c) { return os; }

College::College(string name, int rank) {}

ostream &operator<<(ostream &os, const College &c) { return os; }

void changeCollegeRank(College &college, int rank) { college.setRank(rank); }

Laptop::Laptop(string manufacturer, double price, string color) {}

ostream &operator<<(ostream &os, const Laptop &l) { return os; }

Student::Student(string name, string major, double gpa) {}

ostream &operator<<(ostream &os, const Student &s) { return os; }

Roster::Roster(const char *filename) {}

ostream &operator<<(ostream &os, const Roster &r) {
  for (uint i = 0; i < r.studentList.size(); i++) {
    cout << r.studentList.at(i) << endl;
  }
  return os;
}
