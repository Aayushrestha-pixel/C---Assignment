#include <iostream>

int sumSeries(int n) {
    int sum = 0;
    int term = 1;

    for (int i = 1; i <= n; i++) {
        sum += term;
        term = term * 10 + 1;
    }

    return sum;
}

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    int sum = sumSeries(n);

    std::cout << "The sum of the series is: " << sum << std::endl;

    return 0;
}