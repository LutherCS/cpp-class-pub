/**
 * @file exercise5_main.cpp
 * @author
 * @brief Exercise 5 driver
 * @version 2022.2
 * @date
 *
 * @copyright Copyright (c) 2022
 *
 */
#include "exercise5.hpp"

int main() {
  srand(253);
  cout << "Exercise 5: Structures" << endl;
  cout << "\nTask 1" << endl;
  /*
   * Task 1
   * TODO: Declare and initialize variables of type Contact and print their
   * values.
   * */
  cout << contact1->name << ": " << contact1->phone << endl;
  cout << contact2.name << ": " << contact2.phone << endl;

  // TODO: Do you need the following line?
  delete contact1;

  cout << "\nTask 2" << endl;
  /*
   * Task 2
   * TODO: Declare and initialize variables of type Room and print their values.
   * */
  cout << room1->building << " " << room1->number << endl;
  cout << room2.building << " " << room2.number << endl;

  // TODO: Do you need the following line?
  delete room1;

  cout << "\nTask 3" << endl;
  /*
   * Task 3
   * TODO: Declare and initialize a variable of type Employee and print its
   * values. The output should depend on the full-time/part-time status
   * */

  // TODO: Do you need the following line?
  delete employee1;

  cout << "\nTask 4" << endl;
  /*
   * Task 4
   * TODO: Declare and initialize a variable of type Animal and print its
   * values. Weight should be a random number up to 1000
   * */
  double weight1, weight2;
  weight1 = rand() % 1000;
  weight2 = rand() % 1000;

  // TODO: Do you need the following line?
  delete animal1;

  cout << "\nTask 5" << endl;
  /*
   * Task 5
   * TODO: Declare and initialize variables of type Game and print their values.
   * TODO: Change the value of rating and print them again.
   * */
  cout << game1->title << " has a rating of " << game1->rating << endl;
  cout << game2.title << " has a rating of " << game2.rating << endl;
  cout << game1->title << " has a rating of " << game1->rating << endl;
  cout << game2.title << " has a rating of " << game2.rating << endl;

  // TODO: Do you need the following line?
  delete game1;

  cout << "\nTask 6" << endl;
  /*
   * Task 6
   * TODO: Declare and initialize a vector of 3 Songs.
   * TODO: Print the values of all songs.
   * */

  cout << "\nTask 7" << endl;
  /*
   * Task 7
   * TODO: Declare and instantiate a variable of type Company.
   * TODO: Use function setStockPrice() to change the value of stockPrice.
   * TODO: Use function getStockPrice() to print the value of stockPrice.
   * */
  cout << company1->name << " stock price: " << getStockPrice(*company1)
       << endl;
  cout << company1->name << " stock price: " << getStockPrice(*company1)
       << endl;

  // TODO: Do you need the following line?
  delete company1;

  cout << "\nTask 8" << endl;
  /*
   * Task 8
   * TODO: Declare and initialize variables of type Laptop and print their
   * values.
   * */
  cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs "
       << fixed << laptop1->price << endl;
  cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs "
       << fixed << laptop1->price << endl;

  cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs "
       << fixed << laptop2.price << endl;
  cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs "
       << fixed << laptop2.price << endl;

  // TODO: Do you need the following line?
  delete laptop1;

  cout << "\nTask 9" << endl;
  /*
   * Task 9
   * TODO: Declare and instantiate a variable of type University.
   * TODO: Change the value of rating and print it.
   * NOTE: Use functions, rather directly accessing the members of the structure
   * */
  University university1;
  cout << university1.getName() << " has a rating of "
       << university1.getRating() << endl;
  university1.setName("Luther College");
  university1.setRating(100);
  cout << university1.getName() << " has a rating of "
       << university1.getRating() << endl;

  cout << "\nTask 10" << endl;
  /*
   * Task 10
   * TODO: Declare and populate a vector of students.
   * TODO: Read student data from the provided exercise5_in.txt
   * TODO: Store it in the vector and print information about all students
   * (Name, Major, GPA).
   * */
  vector<Student> roster = vector<Student>();

  for (Student student : roster) {
    cout << left << setw(10) << student.name << setw(15) << student.major
         << fixed << student.gpa << endl;
  }

  return 0;
}
