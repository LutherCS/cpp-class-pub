#include "arrays.h"

void print_array(int myArray[], int size) {
    cout << "INSIDE THE FUNC" << endl;
    cout << "Array size: " << sizeof(myArray)/sizeof(myArray[0]) << endl;
    cout << "sizeof(myArray): " << sizeof(myArray) << endl;
    cout << "sizeof(myArray[0]): " << sizeof(myArray[0]) << endl;
    for (int i = 0; i < size; i++) {
        cout << setw(5) << myArray[i];
    }
    cout << endl;
    cout << "LEAVING THE FUNC" << endl;
}

int main() {
    srand(time(0));  // seed the randomizer, in case we need it
    cout << "Arrays" << endl;
    cout << "\nStrings" << endl;
    string s = "hello";
    cout << s << endl;
    cout << "Length of " << s << " is " << s.length() << endl;
    cout << "Size of " << s << " is " << s.size() << endl;
    cout << s[0] << endl;
    cout << typeid(s[0]).name() << endl;  // c for char
    cout << (int)s[0] << endl;  // ascii value of 'h'
      
    cout << "\nStatic arrays" << endl;
	int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << "Array size: " << sizeof(arr)/sizeof(arr[0]) << endl;  // there is no easy way to know array size
    for (int i = 0; i < 10; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
    /*
     * Updating arrys items
     */
    for (int i = 0; i < 10; i += 2) {
        arr[i] = 253;
    }
    for (int i = 0; i < 10; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
    cout << "Array size: " << sizeof(arr)/sizeof(arr[0]) << endl;
    cout << "sizeof(arr): " << sizeof(arr) << endl;
    cout << "sizeof(arr[0]): " << sizeof(arr[0]) << endl;

    cout << "\nPrinting in a function" << endl;
    print_array(arr, 10);

    for (int i = 0; i < 10; i++) {
       int n = rand() % 100;
		arr[i] = n;
	}
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    cout << "\nMultidimensional arrays" << endl;
    const int rows = 10;
    const int cols = 10;
    int matrix[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (i+1)*(j+1);
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }

    cout << "\nVectors" << endl;
    vector<int> vec(10);
    for (int i = 0; i < 10; i++) {
       int n = rand() % 100;
		vec[i] = n;
	}
    for (int i = 0; i < 10; i++) {
        cout << vec[i] << ' ';
    }
    cout << endl;
    for (int num : vec) {
        cout << setw(5) << num;  // include iomanip to use setw
    }
    cout << endl;
    cout << "Vector size: " << vec.size() << endl;    
    
    vec.push_back(253);
    for (int item: vec) {
        cout << setw(5) << item;
    }
    cout << endl;
    cout << "Vector size: " << vec.size() << endl;
    
    vec.pop_back();
    for (int item: vec) {
        cout << setw(5) << item;
    }
    cout << endl;
    cout << "Vector size: " << vec.size() << endl;

    vector<int> aVector;
    cout << aVector.size() << endl;
    for (int i = 0; i < 10; i++) {
        aVector.push_back(rand() % 10);
    }
    for (int n: aVector) {
        cout << n << ' ';
    }
    cout << endl;

    return 0;
}

