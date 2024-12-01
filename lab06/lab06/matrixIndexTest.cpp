#include <vector>
#include <iostream>

class Matrix {
private:
    std::vector<std::vector<int>> matrix;
public:
    Matrix(int n, int m) : matrix(n, std::vector<int>(m)) {}

    // Przeci¹¿enie operatora indeksowania
    std::vector<int>& operator {
        return matrix[index];
    }
};

int main() {
    Matrix matrix1(3, 3);
    std::cout << matrix1[1][1];
    return 0;
}