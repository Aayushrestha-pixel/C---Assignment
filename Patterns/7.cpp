#include <iostream>
#include <vector>

int main() {
    int rows;

    std::cout << "Enter the number of rows: ";
    std::cin >> rows;

    std::vector<std::vector<int> > triangle(rows);

    triangle[0].push_back(1);

    for (int i = 1; i < rows; ++i) {
        triangle[i].push_back(1); 
        for (int j = 1; j < i; ++j) {
            triangle[i].push_back(triangle[i-1][j-1] + triangle[i-1][j]);
        }
        triangle[i].push_back(1); 
    }

    for (const auto& row : triangle) {
        for (int num : row) {
            std::cout << num << ' ';
        }
        std::cout << std::endl;
    }

    return 0;
}