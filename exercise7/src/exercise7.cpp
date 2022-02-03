#include "exercise7.hpp"


Book::Book(string title, string author, double price) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Book& b) {
    // TODO: Send data members to the stream os
    return os;
}


Room::Room(string building, int number) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Room& r) {
    // TODO: Send data members to the stream os
    return os;
}


Employee::Employee(string firstName, string lastName, double salary, bool isFullTime) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Employee& e) {
    // TODO: Send data members to the stream os
    return os;
}


Customer::Customer(double loan, int term) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Customer& c) {
    // TODO: Send data members to the stream os
    return os;
}


Game::Game(string title, int rating) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Game& g) {
    // TODO: Send data members to the stream os
    return os;
}


Song::Song(string title, string artist) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Song& s) {
    // TODO: Send data members to the stream os
    return os;
}


Company::Company(string name, double stockPrice) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Company& c) {
    // TODO: Send data members to the stream os
    return os;
}


College::College(string name, int rank) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const College& c) {
    // TODO: Send data members to the stream os
    return os;
}

void changeCollegeRank(College& college, int rank) {
    /* This function is fully implemented */
    college.setRank(rank);
}


Laptop::Laptop(string manufacturer, double price, string color) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Laptop& l) {
    // TODO: Send data members to the stream os
    return os;
}


Student::Student(string name, string major, double gpa) {
    // TODO: Initialize data members
}

ostream& operator<<(ostream& os, const Student& s) {
    // TODO: Send data members to the stream os
    return os;
}


Roster::Roster(const char* filename) {
    /* TODO:
     * Open the file
     * Read name, major, and gpa in each line
     * Create an object of type Student from each line
     * Push a new object to the studentList
     * Close the file
     */
}

ostream& operator<<(ostream& os, const Roster& r) {
    /* This function is fully implemented */
    for (uint i = 0; i < r.studentList.size(); i++) {
        cout << r.studentList.at(i) << endl;
    }
    return os;
}
