#include <iostream>
using namespace std;

int linearSearch(int arr[], int start, int end, int key) {
    for (int i = start; i <= end; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int i, n, key,x;
    cout<<"ENTER NUMBER OF ITERRATION"<<endl;
    cin>>x;
    for(i=1;i<=x;i++)
    {
    cout << "ENTER SIZE OF ARRAY" << endl;
    cin >> n;

    int arr[n];

    cout << "ENTER ELEMENTS IN ARRAY" << endl;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "ENTER KEY" << endl;
    cin >> key;

    if (arr[0] == key) {
        cout << "FOUND at index 0" << endl;
        return 0;
    }

    i = 1;
    while (i < n && arr[i] <= key) {
        i = i * 2;
    }

    int result = linearSearch(arr, i / 2, min(n - 1, i), key);

    if (result != -1) {
        cout << "FOUND at index " << result << endl;
    } else {
        cout << "NOT FOUND" << endl;
    }
    }
    return 0;
}
