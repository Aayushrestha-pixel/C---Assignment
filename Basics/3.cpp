#include <iostream>
#include <cmath>

int swapFirstLastDigit(int num) {
    if (num < 10) {
        return num;
    }

    
    int digits = log10(num) + 1;

    int firstDigit = num / pow(10, digits - 1);
    int lastDigit = num % 10;

    num = num % (int)pow(10, digits - 1);
    num = num / 10;

    int result = lastDigit * pow(10, digits - 1) + num * 10 + firstDigit;

    return result;
}

int main() {
    int number;
    std::cout << "Input any number: ";
    std::cin >> number;

    int swappedNumber = swapFirstLastDigit(number);

    std::cout << "The number after swapping the first and last: " << swappedNumber << std::endl;

    return 0;
}