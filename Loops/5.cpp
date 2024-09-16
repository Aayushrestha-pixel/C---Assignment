#include <iostream>
#include <vector>

bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int upperbound;
    std::cout << "Enter the upper bound: ";
    std::cin >> upperbound;

    std::vector<int> non_primes;

    for (int num = 1; num <= upperbound; num++) {
        if (!is_prime(num)) {
            non_primes.push_back(num);
        }
    }

    std::cout << "Non-prime numbers from 1 to " << upperbound << " are: ";
    for (int num : non_primes) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}