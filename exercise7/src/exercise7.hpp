/*
 * Assignment: Exercise 7
 * Author: Roman Yasinovskyy
 * Date: 2018-04-24
 */
#ifndef EXERCISE7_H
#define EXERCISE7_H

#include <cmath>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;


class Book {
    private:
        string title;
        string author;
        double price;
    public:
        Book(string, string, double);
        friend ostream& operator<<(ostream&, const Book&);
};


class Room {
    private:
        string building;
        int number;
    public:
        Room(string, int);
        friend ostream& operator<<(ostream&, const Room&);
};


class Employee {
    private:
        string firstName;
        string lastName;
        double salary;
        bool isFullTime;
    public:
        Employee(string, string, double, bool);
        friend ostream& operator<<(ostream&, const Employee&);
};


class Customer {
    private:
        double loan;
        int term;
    public:
        Customer(double,int);
        inline double getLoan() { return this->loan; }
        inline int getTerm() { return this->term; }
        friend ostream& operator<<(ostream&, const Customer&);
};

class Game {
    private:
        string title;
        int rating;
    public:
        Game(string, int);
        inline string getTitle() { /* Return the title value */ }
        inline int getRating() { /* Return the rating value */ }
        friend ostream& operator<<(ostream&, const Game&);
};


class Song {
    private:
        string title;
        string artist;
    public:
        Song(string, string);
        inline string getTitle() { /* Return the title value */ }
        inline string getArtist() { /* Return the artist value */ }
        friend ostream& operator<<(ostream&, const Song&);
};


class Company {
    private:
        string name;
        double stockPrice;
    public:
        Company(string, double);
        inline double getStockPrice() { /* Return the stock price value */ }
        inline void setStockPrice(double stockPrice) { /* Update the stock price value */ }
        friend ostream& operator<<(ostream&, const Company&);
};


class College {
    private:
        string name;
        int rank;
        inline void setRank(int rank) { /* Update rank value */ }
    public:
        College(string, int);
        friend ostream& operator<<(ostream&, const College&);
        friend void changeCollegeRank(College&, int);
};


class Laptop {
    private:
        string manufacturer;
        double price;
        string color;
    public:
        Laptop(string, double, string);
        inline string getManufacturer() { /* Return the manufacturer value */ }
        inline void setManufacturer(string manufacturer) { /* Update the manufacturer value */ }
        inline double getPrice() { /* Return the price value */ }
        inline void setPrice(double price) { /* Update the price value */ }
        inline string getColor() { /* Return the color value */ }
        inline void setColor(string color) { /* Update the color value */ }
        friend ostream& operator<<(ostream&, const Laptop&);
};


class Student {
    private:
        string name;
        string major;
        double gpa;
    public:
        Student(string, string, double);
        friend ostream& operator<<(ostream&, const Student&);
};


class Roster {
    private:
        vector<Student> studentList;
    public:
        Roster(const char*);
        inline vector<Student> getStudentList() { /* Update the studentList vector */ }
        friend ostream& operator<<(ostream&, const Roster&);
};


#endif
