#include "hw04.hpp"
#include <cstdlib>

int main() {
    int choice;
    int rowsA, colsA, rowsB, colsB;

    do {
        displayMenu();
        std::cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            // Read dimensions for matrices
            std::cout << "Enter number of rows and columns for Matrix A: ";
            std::cin >> rowsA >> colsA;

            int** A = new int*[rowsA];
            for (int i = 0; i < rowsA; i++) {
                A[i] = new int[colsA];
            }
            readMatrix(A, rowsA, colsA);

            if (choice != 3) { // For addition and subtraction, dimensions must be the same
                std::cout << "Enter number of rows and columns for Matrix B (must be " << rowsA << "x" << colsA << "): ";
                std::cin >> rowsB >> colsB;

                if (rowsA != rowsB || colsA != colsB) {
                    std::cout << "Invalid matrix dimensions!\n";
                    continue;
                }
            } else { // For multiplication
                std::cout << "Enter number of rows and columns for Matrix B (rows must be " << colsA << "): ";
                std::cin >> rowsB >> colsB;

                if (colsA != rowsB) {
                    std::cout << "Invalid matrix dimensions!\n";
                    continue;
                }
            }

            // Allocate Matrix B
            int** B = new int*[rowsB];
            for (int i = 0; i < rowsB; i++) {
                B[i] = new int[colsB];
            }
            readMatrix(B, rowsB, colsB);

            // Result Matrix
            int** result = new int*[rowsA];
            for (int i = 0; i < rowsA; i++) {
                result[i] = new int[colsB];
            }

            // Perform selected operation
            if (choice == 1) {
                addMatrices(A, B, rowsA, colsA, result);
            } else if (choice == 2) {
                subtractMatrices(A, B, rowsA, colsA, result);
            } else if (choice == 3) {
                multiplyMatrices(A, B, rowsA, colsA, colsB, result);
            }

            std::cout << "Result:\n";
            printMatrix(result, rowsA, colsB);

            // Deallocate memory
            for (int i = 0; i < rowsA; i++) delete[] A[i];
            delete[] A;
            for (int i = 0; i < rowsB; i++) delete[] B[i];
            delete[] B;
            for (int i = 0; i < rowsA; i++) delete[] result[i];
            delete[] result;

        }
    } while (choice != 4);

    return 0;
}

