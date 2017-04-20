#include "exercise7.h"
#include "Book.h"
#include "Room.h"
#include "Employee.h"
#include "Customer.h"
#include "Game.h"
#include "Song.h"
#include "Company.h"
#include "College.h"
#include "Laptop.h"
#include "Student.h"
#include "Roster.h"

using namespace std;

void changeCollegeRank(College& college, int rank) {
    college.setRank(rank);
}

int main() {
    /* Exercise 7: Classes done right */
    cout << "\nTask 1: Book" << endl;
    cout << "---" << endl;
    Book b11 = Book("Introduction to C++", "John Doe", 89.99);
    cout << "Expected: " << "Introduction to C++ by John Doe costs $89.99" << endl;
    cout << "Observed: " << b11 << endl;
    cout << "---" << endl;
    Book *b12 = new Book("OOP with C++", "Jane Doe", 59.99);
    cout << "Expected: " << "OOP with C++ by Jane Doe costs $59.99" << endl;
    cout << "Observed: " << *b12 << endl;
    cout << "---" << endl;

    cout << "\nTask 2: Room" << endl;
    cout << "---" << endl;
    Room r21 = Room("Olin", 202);
    cout << "Expected: " << "Olin 202" << endl;
    cout << "Observed: " << r21 << endl;
    cout << "---" << endl;
    Room *r22 = new Room("Main", 123);
    cout << "Expected: " << "Main 123" << endl;
    cout << "Observed: " << *r22 << endl;
    cout << "---" << endl;

    cout << "\nTask 3: Employee" << endl;
    cout << "---" << endl;
    Employee e31 = Employee("Alice", "Anderson", 50000, true);
    cout << "Expected: " << "Alice Anderson earns $50000.00 and works full-time" << endl;
    cout << "Observed: " << e31 << endl;
    cout << "---" << endl;
    Employee *e32 = new Employee("Bob", "Black", 30000, false);
    cout << "Expected: " << "Bob Black earns $30000.00 and works part-time" << endl;
    cout << "Observed: " << *e32 << endl;
    cout << "---" << endl;

    cout << "\nTask 4: Customer" << endl;
    cout << "---" << endl;
    Customer c41 = Customer(50000, 36);
    cout << "Expected: " << "Loan: $50000.00; Term: 36 months" << endl;
    cout << "Observed: " << c41 << endl;
    cout << "---" << endl;
    cout << "Expected: " << 50000.00 << endl;
    cout << "Observed: " << c41.getLoan() << endl;
    cout << "---" << endl;
    cout << "Expected: " << 36 << endl;
    cout << "Observed: " << c41.getTerm() << endl;
    cout << "---" << endl;
    Customer *c42 = new Customer(20000, 12);
    cout << "Expected: " << "Loan: $20000.00; Term: 12 months" << endl;
    cout << "Observed: " << *c42 << endl;
    cout << "---" << endl;
    cout << "Expected: " << 20000.00 << endl;
    cout << "Observed: " << c42->getLoan() << endl;
    cout << "---" << endl;
    cout << "Expected: " << 12 << endl;
    cout << "Observed: " << c42->getTerm() << endl;
    cout << "---" << endl;

    cout << "\nTask 5: Game" << endl;
    cout << "---" << endl;
    Game g51 = Game("FIFA 2017", 8);
    cout << "Expected: " << "The rating of FIFA 2017 is 8" << endl;
    cout << "Observed: " << g51 << endl;
    cout << "---" << endl;
    cout << "Expected: " << "FIFA 2017" << endl;
    cout << "Observed: " << g51.getTitle() << endl;
    cout << "---" << endl;
    cout << "Expected: " << 8 << endl;
    cout << "Observed: " << g51.getRating() << endl;
    cout << "---" << endl;
    Game *g52 = new Game("Thief", 10);
    cout << "Expected: " << "The rating of Thief is 10" << endl;
    cout << "Observed: " << *g52 << endl;
    cout << "---" << endl;
    cout << "Expected: " << "Thief" << endl;
    cout << "Observed: " << g52->getTitle() << endl;
    cout << "---" << endl;
    cout << "Expected: " << 10 << endl;
    cout << "Observed: " << g52->getRating() << endl;
    cout << "---" << endl;

    cout << "\nTask 6: Song" << endl;
    cout << "---" << endl;
    vector<Song> chart;
    ifstream fileIn;
    fileIn.open("top3.txt");
    if (fileIn.fail()) {
        cerr << "ERROR: Could not open top3.txt" << endl;
        exit(1);
    }
    while (!fileIn.eof()) {
        string artist, title;
        getline(fileIn, artist, '|');
        getline(fileIn, title, '\n');
        chart.push_back(Song(title, artist));
    }
    cout << "Expected: Content of the top3.txt" << endl;
    cout << "Observed: " << endl;
    for (int i = 0; i < chart.size(); i++) {
        cout << chart.at(i) << endl;
    }
    cout << "---" << endl;
    cout << "Expected: " << "Shape Of You by Ed Sheeran" << endl;
    cout << "Observed: " << chart.at(0).getTitle() << " by " << chart.at(0).getArtist() << endl; 
    cout << "---" << endl;
    fileIn.close();

    cout << "\nTask 7: Company" << endl;
    cout << "---" << endl;
    Company c71 = Company("Apple", 141.03);
    cout << "Expected: " << "Apple's stock price is $141.03" << endl;
    cout << "Observed: " << c71 << endl;
    cout << "---" << endl;
    cout << "Expected: " << 141.03 << endl;
    cout << "Observed: " << c71.getStockPrice() << endl;
    cout << "---" << endl;
    c71.setStockPrice(c71.getStockPrice() + 0.15);
    cout << "Expected: " << "Apple's stock price is $141.18" << endl;
    cout << "Observed: " << c71 << endl;
    cout << "---" << endl;
    Company *c72 = new Company("Google", 840);
    cout << "Expected: " << "Google's stock price is $840.00" << endl;
    cout << "Observed: " << *c72 << endl;
    cout << "---" << endl;
    cout << "Expected: " << 840.00 << endl;
    cout << "Observed: " << c72->getStockPrice() << endl;
    cout << "---" << endl;
    c72->setStockPrice(c72->getStockPrice() + 10.48);
    cout << "Expected: " << "Google's stock price is $850.48" << endl;
    cout << "Observed: " << *c72 << endl;
    cout << "---" << endl;

    cout << "\nTask 8: College" << endl;
    cout << "---" << endl;
    College c81 = College("Luther College", 2);
    cout << "Expected: " << "Luther College is ranked #2" << endl;
    cout << "Observed: " << c81 << endl;
    cout << "---" << endl;
    changeCollegeRank(c81, 1);
    cout << "Expected: " << "Luther College is ranked #1" << endl;
    cout << "Observed: " << c81 << endl;
    cout << "---" << endl;
    College *c82 = new College("Iowa State", 50);
    cout << "Expected: " << "Iowa State is ranked #50" << endl;
    cout << "Observed: " << *c82 << endl;
    cout << "---" << endl;
    changeCollegeRank(*c82, 10);
    cout << "Expected: " << "Iowa State is ranked #10" << endl;
    cout << "Observed: " << *c82 << endl;
    cout << "---" << endl;

    cout << "\nTask 9: Laptop" << endl;
    cout << "---" << endl;
    Laptop c91 = Laptop("IBM", 800, "Black");
    cout << "Expected: " << "Black laptop by IBM costs $800.00" << endl;
    cout << "Observed: " << c91 << endl;
    cout << "---" << endl;
    cout << "Expected: " << "IBM" << endl;
    cout << "Observed: " << c91.getManufacturer() << endl;
    cout << "---" << endl;
    cout << "Expected: " << 800.00<< endl;
    cout << "Observed: " << c91.getPrice() << endl;
    cout << "---" << endl;
    cout << "Expected: " << "Black" << endl;
    cout << "Observed: " << c91.getColor() << endl;
    cout << "---" << endl;
    c91.setManufacturer("Lenovo");
    c91.setPrice(600);
    c91.setColor("Gray");
    cout << "Expected: " << "Gray laptop by Lenovo costs $600.00" << endl;
    cout << "Observed: " << c91 << endl;
    cout << "---" << endl;
    Laptop *c92 = new Laptop("Dell", 1200, "Red");
    cout << "Expected: " << "Red Laptop by Dell costs $1200.00" << endl;
    cout << "Observed: " << *c92 << endl;
    cout << "---" << endl;

    cout << "\nTask 10: Roster" << endl;
    cout << "---" << endl;
    Roster *r10 = new Roster("roster.txt");
    cout << "Expected: " << "Alice (3.00) majors in Anthropology" << endl;
    cout << "Observed: " << r10->getStudentList().at(0) << endl;
    cout << "---" << endl;
    cout << "Expected: Roster based on the content of the roster.txt" << endl;
    cout << "Observed: " << *r10;
    cout << "---" << endl;

    return 0;
}
