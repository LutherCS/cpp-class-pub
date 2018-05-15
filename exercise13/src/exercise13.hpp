/*
 * Assignment: Exercise 13
 * Author: Roman Yasinovskyy
 * Date: 2018-05-06
 */
#ifndef EXERCISE13_H
#define EXERCISE13_H

#include <cstring>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

// A team with the most appearances in the final
string mostAppearances(string);
// A team with the fewest appearances in the final
string fewestAppearances(string);
// A team with the most wins in the final
string mostWins(string);
// A team with the fewest wins in the final
string fewestWins(string);
// A team with the most losses in the final
string mostLosses(string);
// A team with the fewest losses in the final
string fewestLosses(string);
// A team with the longest sequence of appearances
string longestAppearancesSequence(string);
// A team with the longest sequence of wins
string longestWinningSequence(string);
// A team with the longest sequence of losses
string longestLosingSequence(string);
// The 2nd most successful team
string secondBest(string);

#endif
