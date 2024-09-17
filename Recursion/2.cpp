#include <iostream>

int recursiveFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * recursiveFactorial(n - 1);
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Error: Factorial is not defined for negative numbers." << std::endl;
        return 1;
    }

    int factorial = recursiveFactorial(num);

    std::cout << "Factorial of " << num << " is " << factorial << std::endl;

    return 0;
}