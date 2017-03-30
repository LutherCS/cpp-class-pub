#include "exercise1.h"

using namespace std;

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    int arr[] = {1, 2, 3};
    task8(arr, 3);
    task9();
    task10();    

    return 0;
}

void task1() {    
    cout << "# Task1" << endl;
    cout << "Hello World" << endl;
}

void task2() {
    cout << "# Task2" << endl;
    for (int i = 1; i <=100; i++) {
        cout << setw(5);
        if (i % 3 == 0 and i % 5 == 0) {
            cout << "huh";
        } else if (i % 5 == 0) {
            cout << "bar";
        } else if (i % 3 == 0) {
            cout << "foo";
        } else {
            cout << i;
        }
        if (i % 25 == 0)
            cout << endl;
    }
}

void task3() {
    cout << "# Task3" << endl;
}

void task4() {
    cout << "Task4" << endl;
}

void task5() {
    cout << "Task5" << endl;
}

void task6() {
    cout << "Task6" << endl;
}

void task7() {
    cout << "Task7" << endl;
	srand(time(0));
	int arr[100];
	for (int i = 0; i < 100; i++){
		arr[i] = rand() % 100;
	}
}

int task8(int arr[], int arr_size) {
    cout << "Task8" << endl;
	int sum = 0;

	return sum;
}

bool task9() {
    cout << "Task9" << endl;

    return true;
}

void task10() {
    cout << "Task10" << endl;
}
