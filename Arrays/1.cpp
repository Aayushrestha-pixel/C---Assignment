#include <iostream>

void findLargestThree(int arr[], int size) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2 && arr[i] != max1) {
            max3 = max2;
            max2 = arr[i];
        } else if (arr[i] > max3 && arr[i] != max1 && arr[i] != max2) {
            max3 = arr[i];
        }
    }

    std::cout << "The largest three elements are: " << max1 << ", " << max2 << ", " << max3 << std::endl;
}

int main() {
    int arr[] = {12, 45, 7, 23, 56, 89, 34};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, size);

    return 0;
}