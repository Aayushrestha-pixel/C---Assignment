#include <iostream>
#include <climits>

int findSecondLargest(int arr[], int size) {
    int max = INT_MIN, secondMax = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    if (secondMax == INT_MIN) {
        std::cout << "There is no second largest element." << std::endl;
        return -1; 
    }

    return secondMax;
}

int main() {
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargest(arr, size);

    if (secondLargest != -1) {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    }

    return 0;
}