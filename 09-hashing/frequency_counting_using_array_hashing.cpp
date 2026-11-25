// Program: Find Frequency of an Element Using Array Hashing

// Question:
// Given an array of N integers and a query number,
// find how many times the query number appears in the array.

// Time Complexity:
// Pre-computation: O(N)
// Fetching frequency: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Pre-computation: Find maximum element
    int maxElement = *max_element(arr.begin(), arr.end());

    // Create hash array and initialize frequencies with 0
    vector<int> hash(maxElement + 1, 0);

    // Store the frequency of each element
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Fetch: Find frequency of the query element
    int q;
    cout << "Enter number to find frequency: ";
    cin >> q;

    if (q >= 0 && q <= maxElement) {
        cout << "Frequency of " << q << " = " << hash[q] << endl;
    }
    else {
        cout << "Frequency of " << q << " = 0" << endl;
    }

    return 0;
}
