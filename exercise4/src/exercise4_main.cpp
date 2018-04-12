#include "exercise4.hpp"

int main(int argc, char * argv[]) {
    cout << "# Matrix multiplication exercise" << endl;
    int rows1 = 0, rows2 = 0, cols1 = 0, cols2 = 0;
    int **matrix1, **matrix2, **result;
    const char* fileInStr = "data/exercise4_in_m1.txt";
    /* Read matrix 1 */
    cout << "Reading a matrix from " << fileInStr << endl;
    try {
        matrix1 = readMatrixFromFile(fileInStr, rows1, cols1);
    } catch (int err) {
        if (err == -1) {
            cout << "ERROR: Cannot open file " << fileInStr << endl;
            exit(1);
        }
    }
    printMatrix(matrix1, rows1, cols1);
    /* Read matrix 2 */
    fileInStr = "data/exercise4_in_m2.txt";
    cout << "Reading a matrix from " << fileInStr << endl;
    try {
        matrix2 = readMatrixFromFile(fileInStr, rows2, cols2);
    } catch (int err) {
        if (err == -1) {
            cout << "ERROR: Cannot open file " << fileInStr << endl;
            exit(1);
        }
    }
    printMatrix(matrix2, rows2, cols2);
    if (cols1 == rows2) {
        cout << "Multiplying matrices" << endl;
        multiplyMatrices(matrix1, matrix2, result, rows1, cols1, cols2);
        printMatrix(result, rows1, cols2);
    } else {
            cout << "ERROR: Cannot multiply matrices" << endl;
            exit(1);
    }
    /* Saving the result */
    cout << "Writing a matrix to build/exercise4_out_m3.txt" << endl;
    writeMatrix(result, rows1, cols2, "build/exercise4_out_m3.txt");
    deleteMatrix(matrix1, rows1, cols1);
    deleteMatrix(matrix2, rows2, cols2);
    deleteMatrix(result, rows1, cols2);

    return 0;
}
