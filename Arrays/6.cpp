#include <iostream>
#include <unordered_map>

using namespace std;

void findRepeatingElements(int arr[], int n) {
    unordered_map<int, int> freqMap;

    // Count the frequency of each element
    for (int i = 0; i < n; i++) {
        freqMap[arr[i]]++;
    }

    // Find the two repeating elements
    int repeatingElement1, repeatingElement2;
    bool foundFirst = false;

    for (auto it = freqMap.begin(); it != freqMap.end(); it++) {
        if (it->second > 1) {
            if (!foundFirst) {
                repeatingElement1 = it->first;
                foundFirst = true;
            } else {
                repeatingElement2 = it->first;
                break;
            }
        }
    }

    cout << "Repeating elements are: " << repeatingElement1 << " and " << repeatingElement2 << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    findRepeatingElements(arr, n);

    return 0;
}