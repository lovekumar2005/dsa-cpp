// Program: Find Maximum Element in an Array Using Recursion
// Time Complexity: O(N)
// Auxiliary Space Complexity: O(N) recursive stack space.

#include <iostream>
using namespace std;

int findMaxElement(int arr[], int i, int size, int maxElement) {
    if (i >= size - 1) {
        return maxElement;
    }
    if (arr[i + 1] > maxElement) {
        maxElement = arr[i + 1];
    }

    return findMaxElement(arr, i + 1, size, maxElement);
}

int main() {
    int arr[5] = {111, 2, 5, 4, 2};
    int size = 5;

    int maximum = findMaxElement(arr, 0, size, arr[0]);

    cout << "Maximum element is: " << maximum << endl;

    return 0;
}