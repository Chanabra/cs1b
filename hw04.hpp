#ifndef HW04_HPP
#define HW04_HPP

#include <iostream>

void addMatrices(int** A, int** B, int rows, int cols, int** result);
void subtractMatrices(int** A, int** B, int rows, int cols, int** result);
void multiplyMatrices(int** A, int** B, int rowsA, int colsA, int colsB, int** result);
void displayMenu();
void readMatrix(int** matrix, int rows, int cols);
void printMatrix(int** matrix, int rows, int cols);

#endif
