#include <iostream>
int sumEven(int start, int end, int sum = 0) {
    if (start > end) {
        return sum;
    }

    if (start % 2 == 0) {
        sum += start;
    }
    return sumEven(start + 1, end, sum);
}

int sumOdd(int start, int end, int sum = 0) {
    if (start > end) {
        return sum;
    }

    if (start % 2 != 0) {
        sum += start;
    }

    return sumOdd(start + 1, end, sum);
}

int main() {
    int start, end;
    std::cout << "Enter the start of the range: ";
    std::cin >> start;
    std::cout << "Enter the end of the range: ";
    std::cin >> end;

    int sumEvenNums = sumEven(start, end);
    int sumOddNums = sumOdd(start, end);

    std::cout << "The sum of even numbers in the range: " << sumEvenNums << std::endl;
    std::cout << "The sum of odd numbers in the range: " << sumOddNums << std::endl;

    return 0;
}