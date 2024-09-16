#include <iostream>

int main() {
    int rows;

    std::cout << "Input the number of rows: ";
    std::cin >> rows;

    // Print the pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = i; j <= rows; ++j) {
            std::cout << j;
        }
        std::cout << std::endl;
    }

    return 0;
}