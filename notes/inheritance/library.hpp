#include "bits/stdc++.h"

using namespace std;

class LibraryItem {
private:
  string barCode;
  string dueDate;

public:
  LibraryItem(string barCode, string dueDate);
  string getDueDate() const { return dueDate; }

  friend ostream &operator<<(ostream &, const LibraryItem &li);
  inline void print() const {
    cout << "Item #" << barCode << " is due on " << dueDate << endl;
  }
};

class Book : public LibraryItem {
private:
  string title;
  int pages;

public:
  Book(string barCode, string dueDate, string title, int pages);
};

class Cable : public LibraryItem {
private:
  int length;

public:
  Cable(string barCode, string dueDate, int length);
  void setLength(int newLength) { length = newLength; }
};

class PowerCable : public Cable {
private:
  int wattage;

public:
  PowerCable(string barCode, string dueDate, int wattage);
};

class DataCable : public Cable {
private:
  int bandwith;

public:
  DataCable(string barCode, string dueDate, int bandwith);
  friend ostream &operator<<(ostream &, const DataCable &dt);
  inline void print() const {
    cout << "Data cable has bandwith of " << bandwith << endl;
  }
};