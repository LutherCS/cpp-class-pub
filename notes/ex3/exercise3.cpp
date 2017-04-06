#include "exercise3.h"

using namespace std;

int main() {
    cout << "# Exercise 3" << endl;
    srand(time(0));
    cout << "\n# Pointers and dynamic arrays" << endl;
    int valInt = 10;
    int* ptrInt;
    ptrInt = &valInt;
    cout << "# Pointers and addresses" << endl;
    cout << "valInt is " << valInt << endl;
    cout << "&valInt is " << &valInt << endl;
    cout << "*ptrInt is " << *ptrInt << endl;
    cout << "ptrInt is " << ptrInt << endl;
    cout << "size of valInt: " << sizeof(valInt) << endl;
    cout << "size of ptrInt: " << sizeof(ptrInt) << endl;
    cout << "size of *ptrInt: " << sizeof(*ptrInt) << endl;
    cout << "valInt before the funciton call: " << valInt << endl;
    cout << "&valInt is " << &valInt << endl;
    task0(valInt);
    cout << "valInt after the funciton call: " << valInt << endl;
    cout << "## Dynamic arrays" << endl;
    string wordStr = "hello";
    char* word = new char[5];
    int i = 0;
    for (char c: wordStr) {
        word[i] = wordStr.at(i);
        i++;
    }
    cout << "word is " << word << endl;
    cout << "*word is " << *word << endl;
    cout << "&word is " << &word << endl;
    for (i = 0; i < 5; i++) {
        cout << *(word + i) << endl;
    }
    delete [] word;

    cout << "Saying hello" << endl;
    task0(wordStr);
    wordStr = "hola";
    cout << "Saying hola" << endl;
    try {
        task0(wordStr);
    } catch (int err) {
        switch (err){
            case -1:
                cout << "invitation rejected" << endl;
                break;
            case -2:
                cout << "bad error" << endl;
                break;
            default:
                cout << "generic error" << endl;
        }
    }
    string fileInStr = "matrix1.txt";
    string fileOutStr = "matrix3.txt";
    ifstream fileIn;
    ofstream fileOut;
    fileIn.open(fileInStr);
    fileOut.open(fileOutStr);
    if (fileIn.fail()) {
        cout << "ERROR: " << fileInStr << " could not be opened" << endl;
        exit(1);
    }
    int rows = 0, cols = 0;
    string line;
    fileIn >> rows >> cols;
    cout << "This is a " << rows << "x" << cols << " matrix" << endl;
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            fileIn >> matrix[i][j];
            cout << setw(3) << matrix[i][j];
        }
        cout << endl;
    }
    fileOut << "Bye!";
    fileIn.close();
    fileOut.close();

    return 0;
}

void task0(int n) {    
    cout << "# Task0" << endl;
    cout << &n << endl;
    int* ptrInt = &n;
    *ptrInt = 253;
}

void task0(string s) {
    if (s == "hello") {
        cout << "hi there!" << endl;
    } else {
        throw -1;
    }
}

