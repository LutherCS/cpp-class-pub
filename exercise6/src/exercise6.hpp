/**
 * @file exercise6.hpp
 * @author
 * @brief Exercise 6 header
 * @version 2022.2
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#ifndef EXERCISE6_H
#define EXERCISE6_H

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
 * @brief Structure Game to store game properties: title, publisher, platform,
 * release year, and price
 *
 * TODO: Implement this structure
 */
struct Game {

  /**
   * @brief Display game properties (title, publisher, platform, release year,
   * price) on the standard output (console)
   *
   * TODO: Implement this function
   */
  void print() {}
};

/**
 * @brief Structure to store State properties: code (two letters), tax rate, and
 * name
 *
 * TODO: Implement this structure
 */
struct State {};

/**
 * @brief Structure to store games in cart and its properties: game and quantity
 *
 * TODO: Implement this structure
 */
struct GameInCart {
  /**
   * @brief Display game properties (title, platform, price, quantity) on the
   * standard output (console)
   *
   * TODO: Implement this function
   *
   */
  void print() {}
  /**
   * @brief Save game properties (title, platform, price, quantity) to the file
   * (fout)
   *
   * @param fout
   * TODO: Implement this function
   */
  void save(ofstream &fout) {}
};

/**
 * @brief Print n characters c
 *
 * @param c
 * @param n
 * TODO: Implement this function
 */
void printNChars(char c, int n);
/**
 * @brief Print n characters c to a file
 *
 * @param fout
 * @param c
 * @param n
 * TODO: Implement this function
 */
void printNChars(ofstream &fout, char c, int n);
/**
 * @brief Read state information into a vector
 *
 * @param fileIn
 * @param states
 * TODO: Implement this function
 */
void readStates(ifstream &fileIn, vector<State> &states);
/**
 * @brief Read the inventory into a vector
 *
 * @param fileIn
 * @param inventory
 * TODO: Implement this function
 */
void readInventory(ifstream &fileIn, vector<Game> &inventory);
/**
 * @brief Display inventory
 *
 * @param inventory
 * TODO: Implement this function
 */
void displayInventory(vector<Game> inventory);
/**
 * @brief Display the shopping cart
 *
 * @param cart
 * @param salesTax
 * @param fout
 * @return double
 * TODO: Implement this function
 */
double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout);
/**
 * @brief Read an integer within the specified boundaries
 *
 * @param lower_bound
 * @param upper_bound
 * @return int
 * TODO: Implement this function
 */
int readANumber(int lower_bound, int upper_bound);
/**
 * @brief Read the state code
 *
 * @param states
 * @param salesTax
 * TODO: Implement this function
 */
void readState(vector<State> &states, double &salesTax);

#endif
