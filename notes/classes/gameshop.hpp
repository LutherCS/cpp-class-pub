#include "bits/stdc++.h"

using namespace std;

#ifndef GAME_H
#define GAME_H

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
        inline string getTitle() const {return this->title;}
        inline string getPlatform() const {return this->platform;}
        inline double getPrice() const {return this->price;}
        void setPrice(double newPrice) {price = newPrice;}

        friend ostream& operator<<(ostream&, const ComputerGame&);
};

#endif