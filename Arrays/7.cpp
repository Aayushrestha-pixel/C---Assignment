#include <iostream>
#include <unordered_map>

using namespace std;

void findFirstRepeatingElement(int arr[], int n) {
    unordered_map<int, int> freqMap;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Find the first repeating element
    for (int i = 0; i < n; i++) {
        if (freqMap[arr[i]] > 1) {
            cout << "First repeating element is: " << arr[i] << endl;
            return;
        }
    }

    cout << "No repeating elements found." << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    findFirstRepeatingElement(arr, n);

    return 0;
}