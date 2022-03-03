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
  virtual inline void print() const = 0;
};

class Book : public LibraryItem {
private:
  string title;
  int pages;

public:
  Book(string barCode, string dueDate, string title, int pages);
  inline void print() const {
    cout << "Book title: " << title << endl;
  }
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
  inline void print() const {
    cout << "Power cable supports " << wattage << "W" << endl;
  }
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