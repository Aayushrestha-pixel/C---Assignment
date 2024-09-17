#include <iostream>
#include <climits>

void findSecondLowestAndHighest(int arr[], int size) {
    int lowest = INT_MAX, secondLowest = INT_MAX;
    int highest = INT_MIN, secondHighest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < lowest) {
            secondLowest = lowest;
            lowest = arr[i];
        } else if (arr[i] < secondLowest && arr[i] != lowest) {
            secondLowest = arr[i];
        }

        if (arr[i] > highest) {
            secondHighest = highest;
            highest = arr[i];
        } else if (arr[i] > secondHighest && arr[i] != highest) {
            secondHighest = arr[i];
        }
    }

    if (secondLowest == INT_MAX) {
        std::cout << "There is no second lowest element." << std::endl;
    } else {
        std::cout << "The second lowest element is: " << secondLowest << std::endl;
    }

    if (secondHighest == INT_MIN) {
        std::cout << "There is no second highest element." << std::endl;
    } else {
        std::cout << "The second highest element is: " << secondHighest << std::endl;
    }
}

int main() {
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLowestAndHighest(arr, size);

    return 0;
}