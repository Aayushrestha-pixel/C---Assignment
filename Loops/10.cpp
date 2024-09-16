#include <iostream>

int main() {
    int a, d, n;
    std::cout << "Enter the first term (a): ";
    std::cin >> a;
    std::cout << "Enter the common difference (d): ";
    std::cin >> d;
    std::cout << "Enter the number of terms (n): ";
    std::cin >> n;

    float sum = (n * (2 * a + (n - 1) * d)) / 2;
    std::cout << "The sum of the A.P. series is: " << sum << std::endl;

    return 0;
}