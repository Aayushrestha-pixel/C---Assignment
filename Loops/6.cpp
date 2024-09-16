#include <iostream>

int main() {
    int upperlimit;
    std::cout << "Enter the upper limit: ";
    std::cin >> upperlimit;

    std::cout << "Cube of numbers up to " << upperlimit << " are: " << std::endl;
    for (int num = 1; num <= upperlimit; num++) {
        std::cout << "Cube of " << num << " is " << num * num * num << std::endl;
    }

    return 0;
}