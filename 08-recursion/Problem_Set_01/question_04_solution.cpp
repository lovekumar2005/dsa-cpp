// Program: Check Whether an Array Is Sorted Using Recursion
// Time Complexity: O(N)
// Auxiliary Space Complexity: O(N) recursive stack space.

#include <iostream>
using namespace std;

bool checkSortedArray(int arr[], int i, int size) {
    if (i >= size - 1) {
        return true;
    }

    if (arr[i] > arr[i + 1]) {
        return false;
    }

    return checkSortedArray(arr, i + 1, size);
}

int main() {
    int arr[5] = {1, 2, 5, 4, 5};
    int size = 5;

    if (checkSortedArray(arr, 0, size)) {
        cout << "Array is sorted." << endl;
    }
    else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}