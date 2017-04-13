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

struct Game {
    string title;
    string publisher;
    string platform;
    int year;
    double price;
    // Display game properties (title, publisher, platform, release year, price) on the standard output (console)
    void print() {
        //TODO: Display game info
        //Sample output: Battlefield 4       Electronic Arts     PS4       2013      $ 18.32
    }
};

struct State {
    string code;
    double taxRate;
    string name;
};

struct GameInCart {
    Game game;
    int qty;
    // Display game properties (title, platform, price, quantity) on the standard output (console)
    void print() {
        //TODO: Display Game-in-cart info
        //Sample output: Battlefield 4       PS4       $ 18.32         1
    }
    // Save game properties (title, platform, price, quantity) to the file (fout)
    void save(ofstream &fout) {
        //TODO: Save Game-in-cart info to a file
        //Sample output: Battlefield 4       PS4       $ 18.32         1
    }
};

// Print n characters c
void printNChars(char c, int n);
// Print n characters c to a file
void printNChars(ofstream &fout, char c, int n);
// Read state information into a vector
void readStates(ifstream &fileIn, vector<State> &states);
// Read the inventory into a vector
void readInventory(ifstream &fileIn, vector<Game> &inventory);
// Display inventory
void displayInventory(vector<Game> inventory);
// Display the shopping cart
double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout);
// Read an integer within the pecified boundaries
int readANumber(int lower_bound, int upper_bound);
// Read the state code
void readState(vector<State> &states, double &salesTax);