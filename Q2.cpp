#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key, int comparisons) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        comparisons++; 

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int n, key;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the key element to search: ";
    cin >> key;

    int comparisons = 0;
    int index = binarySearch(arr, n, key, comparisons);

    if (index != -1) {
        cout << "Element found at index " << index << std::endl;
    } else {
        cout << "Element not found in the array" << std::endl;
    }

    cout << "Total number of comparisons: " << comparisons << std::endl;

    return 0;
}
