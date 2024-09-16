#include <iostream>
#include <iomanip>

int main() {
    int rows; 

   
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << ' ';
        }

        for (int j = 1; j <= i; ++j) {
            std::cout << std::setw(2) << i;
        }

        std::cout << std::endl;
    }

    return 0;
}