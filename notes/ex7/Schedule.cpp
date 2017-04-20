#include "Schedule.h"

Schedule::Schedule(char* filename) {
    ifstream fin(filename);
    if (!fin.is_open()) {
        cerr << "ERROR: Could not open " << filename << endl;
        exit(1);
    }
    while (!fin.eof()) {
        string department, title, instructor;
        int number, day, month, year;
        double credits;
        char letter;
        getline(fin, department, '-');
        fin >> number;
        fin.clear();
        fin.ignore(__INT_MAX__, '-');
        fin.get(letter);
        letter = (char)letter;
        fin.clear();
        fin.ignore(__INT_MAX__, '|');
        Section section = Section(department, number, letter);
        getline(fin, title, '|');
        fin >> month;
        fin.clear();
        fin.ignore(__INT_MAX__, '/');
        fin >> day;
        fin.clear();
        fin.ignore(__INT_MAX__, '/');
        fin >> year;
        fin.clear();
        fin.ignore(__INT_MAX__, '-');
        Date startDate = Date(day, month, year);
        fin >> month;
        fin.clear();
        fin.ignore(__INT_MAX__, '/');
        fin >> day;
        fin.clear();
        fin.ignore(__INT_MAX__, '/');
        fin >> year;
        fin.clear();
        fin.ignore(__INT_MAX__, '|');
        Date endDate = Date(day, month, year);
        getline(fin, instructor, '|');
        fin >> credits;
        fin.clear();
        fin.ignore(__INT_MAX__, '\n');
        schedule.push_back(Course(section, title, startDate, endDate, instructor, credits));
    }
}

Schedule::~Schedule() {
    //cout << "Class Schedule destructor has been called" << endl;
}

ostream& operator<<(ostream& os, const Schedule& s) {
    for (int i = 0; i < s.schedule.size(); i++) {
        cout << s.schedule.at(i) << endl;
    }
    
    return os;
}
