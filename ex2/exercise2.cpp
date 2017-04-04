#include "exercise2.h"

using namespace std;

int main() {
    cout << "Class:" << "\t\t" << "CS253" << endl;
    cout << "Assignment:" << "\t" << "Exercise 2" << endl;
    cout << "Name:" << "\t\t" << "John Doe" << endl;
    srand(time(0));
    cout << "\n# Arrays and vectors" << endl;
    const int size = 10;
	int my_arr[size];
    vector<int> my_vec(size);
	for (int i = 0; i < size; i++) {
        int n = rand() % 100;
		my_arr[i] = my_vec[i] = n;
	}
    cout << endl;
    //task1();
    //task2();
    //task3();
    //task4();
    //task5();
    //task6();
    //task7();
    //task8();
    //task9();
    //task10();
    cout << "Done" << endl;

    return 0;
}

void task1(int n) {    
    cout << "# Task1" << endl;
}

bool task2(int arr[], int size, int target) {
    cout << "# Task2" << endl;
    return true;
}

int task3(int arr[], int size) {
    cout << "# Task3" << endl;
    return 0;
}

void task4(int arr[], int size) {
    cout << "Task4" << endl;
}

void task5(int arr[], int size) {
    cout << "Task5" << endl;
}

void task6() {
    cout << "Task6" << endl;
}

vector<int> task7(int size) {
    cout << "Task7" << endl;
    vector<int> a;
    return a;
}

int task8(vector<int> vec) {
    cout << "Task8" << endl;
    return 0;
}

void task9(int matrix[10][10], int rows, int cols) {
    cout << "Task9" << endl;
}

void task10(int matrix[10][10], int rows, int cols) {
    cout << "Task10" << endl;
}
