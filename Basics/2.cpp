#include <iostream>

int main() {
    int a, b;

    std::cout << "Input first number: ";
    std::cin >> a;

    std::cout << "Input second number: ";
    std::cin >> b;

    
    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << "Values after swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}