#include "Employee.h"

Employee::Employee() : name("No name yet"), ssn("No number yet"), net_pay(0) { }

void Employee::print_check() const {
    cout << "\nERROR: print_check FUNCTION CALLED FOR AN \n"
            << "UNDIFFERENTIATED EMPLOYEE. Aborting the program.\n"
            << "Check with the author of the program about this bug.\n";
    exit(1);
}
