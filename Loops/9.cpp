#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    std:: cout << "The number in reverse order is: ";
    while (n != 0) {
        int remainder = n % 10;
        std::cout << remainder;
        n /= 10;
    }
    std::cout << std::endl;

    return 0;
}