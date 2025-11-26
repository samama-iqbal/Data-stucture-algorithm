#include <iostream>
using namespace std;
int binarySearchAsc(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1; 
}
int binarySearchDesc(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == key)
    return mid;
    else if (arr[mid] > key)
    low = mid + 1;
    else
    high = mid - 1;
    }
    return -1; 
}
int main() {
    const int SIZE = 10;
    int ascRolls[SIZE]  = {101, 102, 103, 104, 105, 106, 107, 108, 109, 110}; // ascending
    int descRolls[SIZE] = {110, 109, 108, 107, 106, 105, 104, 103, 102, 101}; // descending

    int key;
    cout << "Enter Roll Number to Search: ";
    cin >> key;
    if (key % 2 == 0) {
    cout << "\nEven Roll Number, Binary Search in Ascending Order\n";
    int pos = binarySearchAsc(ascRolls, SIZE, key);
    if (pos != -1)
    cout << "Roll Number " << key << " found at index " << pos << endl;
    else
    cout << "Roll Number " << key << " not found!" << endl;
    } 
    else {
    cout << "\nOdd Roll Number , Binary Search in Descending Order\n";
    int pos = binarySearchDesc(descRolls, SIZE, key);
    if (pos != -1)
    cout << "Roll Number " << key << " found at index " << pos << endl;
    else
    cout << "Roll Number " << key << " not found!" << endl;
    }

    return 0;
}