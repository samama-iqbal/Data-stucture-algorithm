#include <iostream>
using namespace std;


int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;      
    }
    return -1;              
}


int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == key)
            return mid;

        else if (key > arr[mid])
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {

    int n, choice, key;

    cout << "Enter number of students: ";
    cin >> n;

    int arr[100];

    cout << "Enter roll numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nChoose Search Method:\n";
    cout << "1. Linear Search (For Unsorted Data)\n";
    cout << "2. Binary Search (For Sorted Data)\n";
    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter roll number to search: ";
    cin >> key;

    int result;

    if (choice == 1) {
        result = linearSearch(arr, n, key);
    }
    else if (choice == 2) {
        result = binarySearch(arr, n, key);
    }
    else {
        cout << "Invalid choice!";
        return 0;
    }

    if (result != -1)
        cout << "\nRoll number found at index: " << result << endl;
    else
        cout << "\nRoll number NOT found!" << endl;

    return 0;
}