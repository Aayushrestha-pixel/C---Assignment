#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int numCount;
    std::cout << "Enter the number of elements: ";
    std::cin >> numCount;

    std::vector<int> numbers(numCount);
    std::cout << "Enter " << numCount << " numbers: ";
    for (int i = 0; i < numCount; i++) {
        std::cin >> numbers[i];
    }

    // Sort the numbers in descending order
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    // Print the three highest numbers
    std::cout << "The three highest numbers are: ";
    for (int i = 0; i < 3 && i < numCount; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}