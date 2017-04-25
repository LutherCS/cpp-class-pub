#include "exercise8.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

int main() {
    HourlyEmployee joe;
    joe.set_name("Mighty Joe");
    joe.set_ssn("123-45-6789");
    joe.set_rate(20.50);
    joe.set_hours(40);
    cout << "Check for " << joe.get_name() << " for " << joe.get_hours() << " hours.\n";
    joe.print_check();
    cout << endl;

    SalariedEmployee boss("Mr. Big Shot", "987-65-4321", 10500.50);
    cout << "Check for " << boss.get_name() << endl;
    boss.print_check();

    return 0;
}
