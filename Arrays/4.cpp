#include <iostream>
#include <algorithm>

using namespace std;

int findSmallestMissingElement(int arr[], int n) {
    int missingElement =  0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != i) {
            missingElement = i;
            break;
        }
    }
    if (missingElement == 0) {
        missingElement = n;
    }
    return missingElement;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallestMissingElement = findSmallestMissingElement(arr, n);
    cout << "Smallest missing element is: " << smallestMissingElement << endl;
    return 0;
}