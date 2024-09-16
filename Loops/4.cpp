#include <iostream>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1;

    std::cout << "The first " << n << " terms of the Fibonacci series are: ";

    for (int i = 1; i <= n; i++) {
        std::cout << t1 << " ";

        int nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    printFibonacci(n);

    return 0;
}