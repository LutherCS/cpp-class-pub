/*
 * Assignment: Exercise 11
 * Author: Roman Yasinovskyy
 * Date: 2018-05-08
 */
#ifndef EXERCISE11_H
#define EXERCISE11_H

#include <cstring>
#include <iostream>

using namespace std;

long long fiboIte(long long);

long long fiboRec(long long);

long long factIte(long long);

long long factRec(long long);

string convert(long long, int);

template <typename T>
T add3(T, T, T);

template <typename T>
T addN(T);

template <typename T, typename ... Targs>
T addN(T, Targs ...);

template <typename T>
T max3(T, T, T);

template <typename T>
T maxN(T);

template <typename T>
T maxN(T, T);

template <typename T, typename ...Targs>
T maxN(T, Targs ...);

template <typename T, typename ...Targs>
double avgN(T, Targs ...);

#endif
