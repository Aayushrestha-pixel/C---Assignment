#include <iostream>

int recursiveSum(int arr[], int size) {
    if (size == 1) {
        return arr[0];
    }
    return arr[0] + recursiveSum(arr + 1, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int sum = recursiveSum(arr, size);

    std::cout << "The sum of array elements: " << sum << std::endl;

    return 0;
}