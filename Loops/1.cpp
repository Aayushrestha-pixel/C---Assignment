#include <iostream>
#include <vector>

bool isPerfect(int number) {
    int sum = 0;

    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum == number;
}

int main() {
    std::vector<int> perfectNumbers;

    for (int i = 1; i <= 500; i++) {
        if (isPerfect(i)) {
            perfectNumbers.push_back(i);
        }
    }

    std::cout << "The perfect numbers from 1 to 500 are: ";
    for (int i = 0; i < perfectNumbers.size(); i++) {
        std::cout << perfectNumbers[i] << " \n";
    }
    std::cout << std::endl;

    return 0;
}