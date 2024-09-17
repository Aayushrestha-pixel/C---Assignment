#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> findKLargestElements(int arr[], int n, int k) {

    vector<int> kLargest;
    priority_queue<int> pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr[i]);
    }

    for (int i = 0; i < k; i++) {
        kLargest.push_back(pq.top());
        pq.pop();
    }

    return kLargest;
}

int main() {
    int arr[] = {12, 5, 787, 1, 23, 45, 67, 89, 34, 56};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    vector<int> kLargest = findKLargestElements(arr, n, k);

    cout << "The " << k << " largest elements are: ";
    for (int i = 0; i < k; i++) {
        cout << kLargest[i] << " ";
    }
    cout << endl;

    return 0;
}