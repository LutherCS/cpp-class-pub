#ifndef EXERCISE6_H
#define EXERCISE6_H

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
    /*
     * Add members of the structure here
     * */

    /* 
     * Display game properties (title, publisher, platform, release year, price) on the standard output (console)
     * */
    void print();
};

struct State {
    /*
     * Add members of the structure here
     * */
};

struct GameInCart {
    /*
     * Add members of the structure here
     * */
    /*
     * Display game properties (title, platform, price, quantity) on the standard output (console)
     * */
    void print();
    /*
     * Save game properties (title, platform, price, quantity) to the file (fout)
     * */
    void save(ofstream &fout);
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

#endif