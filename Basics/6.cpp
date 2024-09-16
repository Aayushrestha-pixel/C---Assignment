#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int sum = num1 + num2;
    std::cout << "The sum is: " << sum << std::endl;

    int digitCount = 0;
    int tempSum = sum;
    while (tempSum != 0) {
        tempSum /= 10;
        digitCount++;
    }

    std::cout << "The number of digits in the sum is: " << digitCount << std::endl;

    return 0;
}