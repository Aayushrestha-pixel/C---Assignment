#include <iostream>

int sqrt(int n) {
    int start = 0;
    int end = n;
    int ans = 0;

    while (start <= end) {
        int mid = start + (end - start) / 2;
        int square = mid * mid;

        if (square == n) {
            return mid;
        } else if (square < n) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}

int main() {
    int num;
    std::cout << "Enter a positive number: ";
    std::cin >> num;

    int result = sqrt(num);

    std::cout << "The square root of " << num << " is: " << result << std::endl;

    return 0;
}