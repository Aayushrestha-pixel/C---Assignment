#include <iostream>

int main() {
    int count = 0;
    int sum = 0;

    std::cout << "Numbers between 100 and 200 divisible by 9 are: ";
    for (int num = 100; num <= 200; num++) {
        if (num % 9 == 0) {
            std::cout << num << " ";
            count++;
            sum += num;
        }
    }
    std::cout << std::endl;

    std::cout << "Number of integers divisible by 9: " << count << std::endl;
    std::cout << "Sum of integers divisible by 9: " << sum << std::endl;

    return 0;
}