#include <iostream>

int main() {
    int rows;

    std::cout << "Input number of rows: ";
    std::cin >> rows;

    for (int i = rows; i >= 1; --i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " ";
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << j;
        }

        for (int j = i - 1; j >= 1; --j) {
            std::cout << j;
        }

        std::cout << std::endl; 
    }

    return 0;
}