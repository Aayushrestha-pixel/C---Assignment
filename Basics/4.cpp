#include <iostream>

int main() {
    int first, last, sum = 0;

    std::cout << "Input first number: ";
    std::cin >> first;

    std::cout << "Input last number: ";
    std::cin >> last;

    for (int i = first; i <= last; i++) {
        int num = i;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
    }

    std::cout << "Sum of digits from " << first << " to " << last << " is: " << sum << std::endl;

    return 0;
}