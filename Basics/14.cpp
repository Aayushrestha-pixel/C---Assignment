#include <iostream>

int productOfDigits(int n) {
    int product = 1;
    while (n != 0) {
        int digit = n % 10;
        product *= digit;
        n /= 10;
    }
    return product;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    int product = productOfDigits(num);

    std::cout << "The product of digits of " << num << " is: " << product << std::endl;

    return 0;
}