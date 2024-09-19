#include <iostream>

int recursiveFibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2);
}

int main() {
    int n;
    std::cout << "Enter a positive number: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Error: Fibonacci sequence is not defined for negative numbers." << std::endl;
        return 1;
    }

    int fibonacci = recursiveFibonacci(n);

    std::cout << "Fibonacci number at position " << n << " is " << fibonacci << std::endl;

    return 0;
}