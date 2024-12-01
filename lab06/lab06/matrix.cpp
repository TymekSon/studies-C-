#include <iostream>

class Matrix {

public:
    int rows;
    int cols;
    int** tab;
    // Konstruktory
    Matrix() : rows(0), cols(0), tab(nullptr) {}

    Matrix(int rows, int cols) : rows(rows), cols(cols) {
        tab = new int* [rows];
        for (int i = 0; i < rows; ++i)
            tab[i] = new int[cols];
    }

    Matrix(const Matrix& matrix) : rows(matrix.rows), cols(matrix.cols) {
        tab = new int* [rows];
        for (int i = 0; i < rows; ++i) {
            tab[i] = new int[cols];
            for (int j = 0; j < cols; ++j)
                tab[i][j] = matrix.tab[i][j];
        }
    }

    // Destruktor
    ~Matrix() {
        for (int i = 0; i < rows; ++i)
            delete[] tab[i];
        delete[] tab;
    }


};
