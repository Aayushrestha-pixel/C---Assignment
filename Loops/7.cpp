#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    int t1 = 0, t2 = 1;
    std::cout << "First " << n << " terms of the Fibonacci series are: ";

    for (int i = 1; i <= n; i++) {
        std::cout << t1 << " ";
        int sum = t1 + t2;
        t1 = t2;
        t2 = sum;
    }
    std::cout << std::endl;

    return 0;
}