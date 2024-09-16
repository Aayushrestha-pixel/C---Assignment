#include <iostream>

int sumDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int singleDigit(int n) {
    while (n >= 10) {
        n = sumDigits(n);
    }
    return n;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num;

    int result = singleDigit(num);

    std::cout << "The single digit  is: " << result << std::endl;

    return 0;
}