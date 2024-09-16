#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int countPrimes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num;

    int primeCount = countPrimes(num);

    std::cout << "There are " << primeCount << " prime numbers less than " << num << "." << std::endl;

    return 0;
}