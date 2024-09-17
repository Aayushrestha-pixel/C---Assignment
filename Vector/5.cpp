#include <iostream>
#include <vector>

int main() {
    int n, val;
    std::cout << "Enter the size of the matrix (n): ";
    std::cin >> n;
    std::cout << "Input an integer value: ";
    std::cin >> val;

    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, val));

    std::cout << "The " << n << "x" << n << " matrix with the value " << val << " is:" << std::endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}