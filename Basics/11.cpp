#include <iostream>

bool isPowerOfThree(int n) {
    if (n <= 0) {
        return false;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    return n == 1;
}

int main() {
    int num;
    std::cout << "Enter an number: ";
    std::cin >> num;

    if (isPowerOfThree(num)) {
        std::cout << num << " is a power of three :)" << std::endl;
    } else {
        std::cout << num << " is not a power of three :(" << std::endl;
    }

    return 0;
}