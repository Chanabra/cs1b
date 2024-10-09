#include "hw04.hpp"

void subtractMatrices(int** A, int** B, int rows, int cols, int** result) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}
