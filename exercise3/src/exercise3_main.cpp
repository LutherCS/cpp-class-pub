/**
 * @file exercise3_main.cpp
 * @author Roman Yasinovskyy
 * @brief Exercise 3 driver
 * @version 2022.2
 * @date 2022-02-09
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise3.hpp"

int main(int argc, char *argv[]) {
  srand(0);
  const int size = 10;
  int grades[] = {76, 91, 65, 70, 55, 78, 82, 87, 95, 60};
  int numArr[size];
  for (int i = 0; i < size; i++) {
    numArr[i] = rand() % 10;
  }
  list<int> numList;
  for (int i = 0; i < size; i++) {
    numList.push_back(rand() % 10);
  }
  vector<int> numVec;
  for (int i = 0; i < size; i++) {
    numVec.push_back(rand() % 10);
  }

  cout << "# Task1" << endl;
  for (int i = 0; i < size; i++) {
    cout << setw(5) << grades[i];
  }
  cout << endl;
  task1(grades, size);

  cout << "# Task2" << endl;
  for (int i = 0; i < size; i++) {
    cout << setw(5) << grades[i];
  }
  cout << endl;
  task2(grades, size);
  for (int i = 0; i < size; i++) {
    cout << setw(5) << grades[i];
  }
  cout << endl;

  cout << "# Task3" << endl;
  for (int i = 0; i < size; i++) {
    cout << setw(5) << numArr[i];
  }
  cout << endl;
  cout << "Sum is " << task3(numList) << endl;

  cout << "# Task4" << endl;
  for (int i = 0; i < size; i++) {
    cout << setw(5) << numArr[i];
  }
  cout << endl;
  cout << "6 in numList: " << boolalpha << task4(numList, 6) << endl;
  cout << "11 in numList: " << boolalpha << task4(numList, 11) << endl;

  cout << "# Task5" << endl;
  cout << "bye is ordered: " << boolalpha << task5("bye") << endl;
  cout << "buy is ordered: " << boolalpha << task5("buy") << endl;

  cout << "# Task6" << endl;
  for (int n : numVec) {
    cout << setw(5) << n;
  }
  cout << endl;
  cout << "6 in numArr: " << boolalpha << task6(numVec, 6) << endl;
  cout << "11 in numArr: " << boolalpha << task6(numVec, 11) << endl;

  cout << "# Task7" << endl;
  vector<int> list7 = task7(size);
  for (int n : list7) {
    cout << setw(5) << n;
  }
  cout << endl;

  cout << "# Task8" << endl;
  cout << "Below 70: " << task8(list7, 70) << endl;

  cout << "# Task9" << endl;
  for (int n : list7) {
    cout << setw(5) << n;
  }
  cout << endl;
  vector<int> list9 = task9(list7);
  for (int n : list9) {
    cout << setw(5) << n;
  }
  cout << endl;

  cout << "# Task10" << endl;
  vector<int> list10 = task10(100);
  for (int n : list10) {
    cout << setw(5) << n;
  }
  cout << endl;

  return 0;
}
