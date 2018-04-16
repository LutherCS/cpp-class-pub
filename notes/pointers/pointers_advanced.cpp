#include <iostream>
#include <iomanip>
#include <typeinfo>

using namespace std;

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {
    cout << setfill('.') << left;
    cout << "Numbers and Pointers\n";
    int x = 253;
    int *ptrInt = &x;
    int **ptrPtrInt = &ptrInt;
    int ***ptrPtrPtrInt = &ptrPtrInt;  // Crazy!
    
    cout << "Integer\n";
    cout << setw(20) << "type(x)" << typeid(x).name() << endl;
    cout << setw(20) << "x" << x << endl;
    cout << setw(20) << "&x" << &x << endl;
    cout << endl;
    cout << "Pointer to an Integer\n";
    cout << setw(20) << "type(ptrInt)" << typeid(ptrInt).name() << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << endl;
    cout << "Pointer to a Pointer to an Integer\n";
    cout << setw(20) << "type(ptrPtrInt)" << typeid(ptrPtrInt).name() << endl;
    cout << setw(20) << "ptrPtrInt" << ptrPtrInt << endl;
    cout << setw(20) << "*ptrPtrInt" << *ptrPtrInt << endl;
    cout << setw(20) << "**ptrPtrInt" << **ptrPtrInt << endl;
    cout << endl;
    cout << "Pointer to a Pointer to a Pointer to an Integer\n";
    cout << setw(20) << "type(ptrPtrPtrInt)" << typeid(ptrPtrPtrInt).name() << endl;
    cout << setw(20) << "ptrPtrPtrInt" << ptrPtrPtrInt << endl;
    cout << setw(20) << "*ptrPtrPtrInt" << *ptrPtrPtrInt << endl;
    cout << setw(20) << "**ptrPtrPtrInt" << **ptrPtrPtrInt << endl;
    cout << setw(20) << "***ptrPtrPtrInt" << ***ptrPtrPtrInt << endl;
    cout << endl;
    cout << "Pointer Arithmetic\n";
    // +1 is a non-invasive operation
    cout << setw(20) << "x" << x << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << setw(20) << "(*ptrInt)+1" << (*ptrInt)+1 << endl;
    cout << setw(20) << "*ptrInt+1" << *ptrInt+1 << endl;
    cout << setw(20) << "*(ptrInt+1)" << *(ptrInt+1) << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "x" << x << endl;
    cout << endl;
    cout << "Confusing Pointer Arithmetic\n";
    // See http://en.cppreference.com/w/cpp/language/operator_precedence
    x = 253;
    ptrInt = &x;
    cout << setw(20) << "x" << x << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << setw(20) << "(*ptrInt)++" << (*ptrInt)++ << endl;
    cout << setw(20) << "*ptrInt++" << *ptrInt++ << endl;
    cout << setw(20) << "*(ptrInt++)" << *(ptrInt++) << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "x" << x << endl;
    cout << endl;
    cout << "More Confusing Pointer Arithmetic\n";
    x = 253;
    ptrInt = &x;
    cout << setw(20) << "x" << x << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << setw(20) << "++(*ptrInt)" << ++(*ptrInt) << endl;
    cout << setw(20) << "++*ptrInt" << ++*ptrInt << endl;
    cout << setw(20) << "*(++ptrInt)" << *(++ptrInt) << endl;
    cout << setw(20) << "*ptrInt" << *ptrInt << endl;
    cout << setw(20) << "ptrInt" << ptrInt << endl;
    cout << setw(20) << "x" << x << endl;
    cout << endl;

    int m[2][3] = {{10, 20, 30}, {40, 50, 60}};

    cout << "Matrix Addresses and Values\n";
    cout << setw(20) << "type(m)" << typeid(m).name() << endl;
    cout << setw(20) << "&m" << &m << endl;
    cout << setw(20) << "m" << m << endl;
    cout << setw(20) << "*m" << *m << endl;
    cout << setw(20) << "**m" << **m << endl;
    cout << endl;
    cout << setw(20) << "type(m[0])" << typeid(m[0]).name() << endl;
    cout << setw(20) << "&m[0]" << &m[0] << endl;
    cout << setw(20) << "m[0]" << m[0] << endl;
    cout << setw(20) << "*m[0]" << *m[0] << endl;
    // cout << setw(20) << "**m[0]" << **m[0] << endl;
    cout << endl;
    cout << setw(20) << "type(m[0][0])" << typeid(m[0][0]).name() << endl;
    cout << setw(20) << "&m[0][0]" << &m[0][0] << endl;
    cout << setw(20) << "m[0][0]" << m[0][0] << endl;
    // cout << setw(20) << "*m[0][0]" << *m[0][0] << endl;
    // cout << setw(20) << "**m[0][0]" << **m[0][0] << endl;
    cout << endl;
    cout << "Even More Confusing Pointer Arithmetic\n";
    cout << setw(20) << "**m" << **m << endl;
    cout << setw(20) << "**m+1" << **m+1 << endl;
    cout << setw(20) << "**(m+1)" << **(m+1) << endl;
    cout << endl;
    cout << "Pointers to Matrices\n";
    int (*p)[3] = &m[0];
    cout << setw(20) << "type(p)"  << typeid(p).name() << endl;
    cout << setw(20) << "p" << p << endl;
    cout << setw(20) << "type(*p)"  << typeid(*p).name() << endl;
    cout << setw(20) << "*p" << *p << endl;
    cout << setw(20) << "type(**p)"  << typeid(**p).name() << endl;
    cout << setw(20) << "**p" << **p << endl;
    cout << endl;
    cout << "Access Matrix Using p" << endl;
    cout << p[0][0] << ' ' << p[0][1] << ' ' << p[0][2] << ' ' << endl;
    cout << p[1][0] << ' ' << p[1][1] << ' ' << p[1][2] << ' ' << endl;
    cout << endl;
    cout << "Access Matrix Using ptrPtrMatrix" << endl;
    int *ptrMatrix = &m[0][0];
    int **ptrPtrMatrix = &ptrMatrix;
    cout << setw(20) << "type(ptrMatrix)" << typeid(ptrMatrix).name() << endl;
    cout << setw(20) << "ptrMatrix" << ptrMatrix << endl;
    cout << setw(20) << "*ptrMatrix" << *ptrMatrix << endl;
    cout << setw(20) << "type(ptrPtrMatrix)" << typeid(ptrPtrMatrix).name() << endl;
    cout << setw(20) << "ptrPtrMatrix" << ptrPtrMatrix << endl;
    cout << setw(20) << "*ptrPtrMatrix" << *ptrPtrMatrix << endl;
    cout << setw(20) << "**ptrPtrMatrix" << **ptrPtrMatrix << endl;
    cout << endl;
    cout << "Printing a Matrix\n";
    cout << ptrPtrMatrix[0][0] << ' ' << ptrPtrMatrix[0][1] << ' ' << ptrPtrMatrix[0][2] << ' ' << endl;
    cout << ptrPtrMatrix[1][0] << ' ' << ptrPtrMatrix[1][1] << ' ' << ptrPtrMatrix[1][2] << ' ' << endl;
    cout << endl;
    cout << "Printing a Matrix Using a Function\n";
    printMatrix(ptrPtrMatrix, 2, 3);

    int val = 10;
    int **matrix;
    matrix = new int*[2];
    for (int i = 0; i < 2; i++) {
        matrix[i] = new int[3];
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = val;
            val  = val + 10;
        }
    }
    cout << endl;
    cout << "Printing a Matrix Using a Function\n";
    printMatrix(matrix, 2, 3);

    return 0;
}