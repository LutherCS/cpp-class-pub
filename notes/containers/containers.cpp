/**
 *
 */

#include <bits/stdc++.h>
using namespace std;

int largeNumbers(int numbers[], int size, int threshold) {
  int counter = 0;
  for (int i = 0; i < size; i++) {
    if (numbers[i] > threshold) {
      counter += 1;
    }
  }
  return counter;
}

int largeNumbers(vector<int> numbers, int threshold) {
  int counter = 0;
  for (int item : numbers) {
    if (item > threshold) {
      counter += 1;
    }
  }
  return counter;
}

int largeNumbers(list<int> numbers, int threshold) {
  int counter = 0;
  for (auto it = numbers.begin(); it != numbers.end(); ++it) {
    if (*it > threshold) {
      counter += 1;
    }
  }
  return counter;
}

int main() {
  int numnum = 10;
  int arrayOfNumbers[] = {2, 5, 12, 3, 6, 200, 99, 0, 253, 2};
  vector<int> vectorOfNums;

  // cout << vectorOfNums.size() << endl;
  for (int i = 0; i < numnum; ++i) {
    vectorOfNums.push_back(arrayOfNumbers[i]);
    // cout << vectorOfNums.size() << " ";
  }
  // cout << endl;

  list<int> listOfNums;
  for (int i = 0; i < numnum; ++i) {
    listOfNums.push_back(arrayOfNumbers[i]);
    // cout << listOfNums.size() << " ";
  }
  //   cout << endl;

  int result = largeNumbers(arrayOfNumbers, numnum, 100);
  cout << result << endl;
  assert(result == 2);

  result = largeNumbers(vectorOfNums, 100);
  cout << result << endl;
  assert(result == 2);

  result = largeNumbers(listOfNums, 100);
  cout << result << endl;
  assert(result == 2);
}
