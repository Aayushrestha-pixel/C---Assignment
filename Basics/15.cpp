#include <iostream>

void printFactors(int n) {
    std::cout << "Factors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    printFactors(num);

    return 0;
}