#include <iostream>

int countOccurrences(int arr[], int size, int target) {
    int count = 0;
    int left = 0, right = size - 1;

    // Find the first occurrence of the target
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) {
            left = mid + 1;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            // Found the first occurrence, now find the last occurrence
            while (mid > 0 && arr[mid - 1] == target) {
                mid--;
            }
            left = mid;
            break;
        }
    }

    // Count the occurrences
    while (left < size && arr[left] == target) {
        count++;
        left++;
    }

    return count;
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5, 5, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 5;

    int count = countOccurrences(arr, size, target);

    if (count > 0) {
        std::cout << "The number " << target << " occurs " << count << " times in the array." << std::endl;
    } else {
        std::cout << "The number " << target << " does not occur in the array." << std::endl;
    }

    return 0;
}