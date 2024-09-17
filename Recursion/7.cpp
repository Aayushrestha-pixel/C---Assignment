#include <iostream>
bool isPrime(int num, int divisor = 2) {
    if (num < 2) {
        return false;
    }

    if (num == 2) {
        return true;
    }

    if (num % divisor == 0) {
        return false;
    }
    return isPrime(num, divisor + 1);
}
int sumPrimes(int start, int end, int sum = 0) {
    if (start > end) {
        return sum;
    }

    if (isPrime(start)) {
        sum += start;
    }

    return sumPrimes(start + 1, end, sum);
}

int main() {
    int start, end;
    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    int sumPrimesNums = sumPrimes(start, end);

    std::cout << "Sum of prime numbers in the range: " << sumPrimesNums << std::endl;

    return 0;
}