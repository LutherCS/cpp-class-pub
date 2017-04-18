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

#ifndef COMPUTERGAME_H
#define COMPUTERGAME_H

class ComputerGame {
    private:
        string title;
        string platform;
        double price;
    public:
        static int counter;
        ComputerGame();
        ComputerGame(string, string, double);
        ~ComputerGame();
        inline const string getTitle() const { return title; }
        inline void setTitle(string title_) { title = title_; }
        inline string getPlatform() const { return platform; }
        inline void setPlatform(string platform_) { platform = platform_; }
        inline double getPrice() const { return price; }
        inline void setPrice(double price_) { price = price_; }
        friend ostream& operator<<(ostream&, const ComputerGame&);
};

ComputerGame::ComputerGame() {
    title = "Unknown";
    platform = "Unknown";
    price = -1;
}

ComputerGame::ComputerGame(string title_, string platform_, double price_) {
    title = title_;
    platform = platform_;
    price = price_;
}

ComputerGame::~ComputerGame() {
    //cout << "Class ComputerGame destructor has been called" << endl;
    counter++;
}

ostream& operator<<(ostream& os, const ComputerGame& cg) {
    os << cg.title << " for " << cg.platform << " costs $" << fixed << setprecision(2) << cg.price;
    return os;
}

vector<ComputerGame> readFile(char* filename) {
    vector<ComputerGame > result;
    ifstream fin(filename);
    if (!fin.is_open()) {
        cerr << "ERROR: Could not open " << filename << endl;
        exit(1);
    }
    while (!fin.eof()) {
        string title, platform;
        double price;
        getline(fin, title, '|');
        getline(fin, platform, '|');
        fin >> price;
        fin.clear();
        fin.ignore(__INT_MAX__, '\n');
        result.push_back(ComputerGame(title, platform, price));
    }

    return result;
}

#endif
