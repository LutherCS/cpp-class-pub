#include "exercise9.hpp"
#include "HourlyEmployee.hpp"
#include "SalariedEmployee.hpp"


void readCompanyFromFile(string filename) {
    vector<SalariedEmployee> se_vec = vector<SalariedEmployee>();
    vector<HourlyEmployee> he_vec = vector<HourlyEmployee>();
    ifstream infile(filename.c_str());
    while (!infile.eof()) {
        // Create either an Hourly or a Salaried employee from each line
    }
    cout << "Salaried Employees" << endl;
    for (SalariedEmployee se: se_vec) {
        cout << se << endl;
    }
    cout << "Hourly Employees" << endl;
    for (HourlyEmployee he: he_vec) {
        cout << he << endl;
    }
    infile.close();
}

int main() {
    cout << "-------------" << endl;
    cout << "Hourly employee example" << endl;
    HourlyEmployee hEmp1 = HourlyEmployee("Angry Aardvark", "Accounting", 11.25, 40);
    HourlyEmployee hEmp2 = hEmp1;
    hEmp2.setDepartment("Acquisitions");
    hEmp2.setHours(50);
    cout << hEmp1 << endl;
    cout << hEmp2 << endl;
    cout << "-------------" << endl;
    cout << "Salaried employee example" << endl;
    SalariedEmployee *sEmp1 = new SalariedEmployee("Brave Beaver", "Bakery", 52000);
    SalariedEmployee *sEmp2 = new SalariedEmployee(*sEmp1);
    sEmp2->setDepartment("Section B");
    sEmp2->setSalary(62000);
    cout << *sEmp1 << endl;
    cout << *sEmp2 << endl;

    cout << "-------------" << endl;
    cout << "Reading from file" << endl;
    readCompanyFromFile("data/exercise9_in.txt");
    cout << "-------------" << endl;

    return 0;
}
