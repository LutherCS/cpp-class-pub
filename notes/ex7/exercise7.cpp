#include "exercise7.h"
#include "Schedule.h"

using namespace std;

int main() {
    /* Exercise 7: Classes */
    cout << "Reading a file of Course objects" << endl;
    char *filename = (char*)"schedule.txt";
    Schedule schedule = Schedule(filename);
    cout << schedule << endl;
    cout << "---" << endl;

    return 0;
}
