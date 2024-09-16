#include <iostream>

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int lastPrimeBefore(int n) {
    for (int i = n - 1; i >= 2; i--) {
        if (isPrime(i)) {
            return i;
        }
    }

    return -1; // to return -1 if there is no prime number
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    int lastPrime = lastPrimeBefore(number);

    if (lastPrime != -1) {
        std::cout << "The last prime number before " << number << " is: " << lastPrime << std::endl;
    } else {
        std::cout << "There is no prime number found  \n" ;
    }

    return 0;
}