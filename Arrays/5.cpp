#include <iostream>

using namespace std;

void updateArrayElements(int arr[], int n) {
    arr[0] *= arr[1];
    arr[n-1] *= arr[n-2];

    for (int i = 1; i < n-1; i++) {
        arr[i] *= arr[i-1] * arr[i+1];
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    updateArrayElements(arr, n);

    cout << "Updated array: ";
    printArray(arr, n);

    return 0;
}