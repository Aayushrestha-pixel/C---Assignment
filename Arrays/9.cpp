#include <iostream>
#include <string>
#include <algorithm>

std::string findThirdLargestString(std::string arr[], int size) {
    std::string max, secondMax, thirdMax;

    for (int i = 0; i < size; i++) {
        if (arr[i].length() > max.length()) {
            thirdMax = secondMax;
            secondMax = max;
            max = arr[i];
        } else if (arr[i].length() > secondMax.length() && arr[i] != max) {
            thirdMax = secondMax;
            secondMax = arr[i];
        } else if (arr[i].length() > thirdMax.length() && arr[i] != max && arr[i] != secondMax) {
            thirdMax = arr[i];
        }
    }

    if (thirdMax.empty()) {
        std::cout << "There is no third largest string." << std::endl;
        return ""; 
    }

    return thirdMax;
}

int main() {
    std::string arr[] = {"apple", "banana", "cherry", "date", "elderberry", "fig", "grape"};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::string thirdLargest = findThirdLargestString(arr, size);

    if (!thirdLargest.empty()) {
        std::cout << "The third largest string is: " << thirdLargest << std::endl;
    }

    return 0;
}