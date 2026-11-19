// Program: Reverse an Array Using Recursion
// Two approaches:
// 1. Using Two Pointers (left and right)
// 2. Using One Pointer (i)

#include <iostream>
#include <algorithm>
using namespace std;

// 1. Reverse Array Using Two Pointers
void reverseArrayTwoPointer(int arr[], int left, int right) {
    if (left >= right) {
        return;
    }

    swap(arr[left], arr[right]);

    reverseArrayTwoPointer(arr, left + 1, right - 1);
}


// 2. Reverse Array Using One Pointer
void reverseArrayOnePointer(int arr[], int i, int n) {
    if (i >= n / 2) {
        return;
    }

    swap(arr[i], arr[n - 1 - i]);

    reverseArrayOnePointer(arr, i + 1, n);
}


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    // Using Two Pointers:
    // reverseArrayTwoPointer(arr, 0, size - 1);

    // Using One Pointer:
    reverseArrayOnePointer(arr, 0, size);

    cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}