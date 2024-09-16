#include <iostream>

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    std::cout << "The factorial is " << n << " is: " << factorial << std::endl;

    return 0;
}