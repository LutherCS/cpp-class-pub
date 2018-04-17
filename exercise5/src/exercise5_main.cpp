#include "exercise5.hpp"

int main() {
    srand(253);
    cout << "Exercise 5: Structures" << endl;
    cout << "\nTask 1" << endl;
    /*
     * Task 1
     * Declare and initialize a variable of type Contact and print its values.
     * */
    //TODO
    cout << contact1->name << ": " << contact1->phone << endl;
    cout << contact2.name << ": " << contact2.phone << endl;

    delete contact1;

    cout << "\nTask 2" << endl;
    /* 
     * Task 2
     * Declare and initialize a variable of type Room and print its values.
     * */
    //TODO
    cout << room1->building << " " << room1->number << endl;
    cout << room2.building << " " << room2.number << endl;

    delete room1;

    cout << "\nTask 3" << endl;
    /*
     * Task 3
     * Declare and initialize a variable of type Employee and print its values.
     * The output should depend on the full-time/part-time status
     * */
    //TODO

    delete employee1;

    cout << "\nTask 4" << endl;
    /*
     * Task 4
     * Declare and initialize a variable of type Animal and print its values.
     * Weight should be a random number up to 1000
     * */
    double weight1, weight2;
    weight1 = rand() % 1000;
    weight2 = rand() % 1000;
    //TODO

    delete animal1;
    
    cout << "\nTask 5" << endl;
    /*
     * Task 5
     * Declare and initialize a variable of type Game and print its values.
     * Declare and initialize a variable of type Game in the main function and print its values.
     * Change the value of rating and print them again.
     * */
    //TODO
    cout << game1->title << " has a rating of " << game1->rating << endl;
    cout << game2.title << " has a rating of " << game2.rating << endl;
    //TODO
    cout << game1->title << " has a rating of " << game1->rating << endl;
    cout << game2.title << " has a rating of " << game2.rating << endl;

    delete game1;

    cout << "\nTask 6" << endl;
    /*
     * Task 6
     * Declare and initialize a vector of 3 Songs.
     * Print the values of all songs.
     * */
    //TODO

    cout << "\nTask 7" << endl;
    /*
     * Task 7
     * Declare and instantiate a variable of type Company.
     * Use function setStockPrice() to change the value of stockPrice.
     * Use function getStockPrice() to print the value of stockPrice.
     * */
    //TODO
    cout << company1->name << " stock price: " << getStockPrice(*company1) << endl;
    //TODO
    cout << company1->name << " stock price: " << getStockPrice(*company1) << endl;

    delete company1;

    cout << "\nTask 8" << endl;
    /*
     * Task 8
     * Declare and initialize a variable of type Laptop and print its values.
     * */
    //TODO
   
    cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs " << fixed << laptop1->price << endl;
    //TODO
    cout << laptop1->color << " laptop by " << laptop1->manufacturer << " costs " << fixed << laptop1->price << endl;

    cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs " << fixed << laptop2.price << endl;
    //TODO
    cout << laptop2.color << " laptop by " << laptop2.manufacturer << " costs " << fixed << laptop2.price << endl;


    delete laptop1;

    cout << "\nTask 9" << endl;
    /*
     * Task 9
     * Declare and instantiate a variable of type University.
     * Change the value of rating and print it.
     * Use functions, rather 
     * */
    University university1;
    cout << university1.getName() << " has a rating of " << university1.getRating() << endl;
    university1.setName("Luther College");
    university1.setRating(100);
    cout << university1.getName() << " has a rating of " << university1.getRating() << endl;

    cout << "\nTask 10" << endl;
    /*
     * Task 10
     * Declare and populate a vector of students.
     * Read student data from the provided exercise5_in.txt 
     * Store it in the vector and print information about all students (Name, Major, GPA).
     * */
    vector<Student> roster = vector<Student>();
    //TODO

    for (Student student: roster) {
        cout << left << setw(10) << student.name << setw(15) << student.major << fixed << student.gpa << endl;
    }

    return 0;
}
