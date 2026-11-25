// Program: Hashing Using Linear Probing

// Question:
// Implement a hash table using Linear Probing to handle
// collisions during insertion and searching.

// Approach: Linear Probing
// Average Search Time: O(1)
// Worst Case Search Time: O(N)

#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 1, 7, 6, 14, 9};
    const int tableSize = 10;

    int hash[tableSize] = {0};

    for (int i = 0; i < 6; i++) {

        int index = arr[i] % tableSize;

        // Find the next available position if collision occurs
        while (hash[index] != 0) {
            index = (index + 1) % tableSize;
        }

        hash[index] = arr[i];
    }

    // Display the hash table
    cout << "Hash Table:" << endl;

    for (int i = 0; i < tableSize; i++) {
        cout << "Index " << i << " : " << hash[i] << endl;
    }

    // Searching using Linear Probing
    int n;

    cout << "\nEnter number to search: ";
    cin >> n;

    int index = n % tableSize;
    bool found = false;

    for (int i = 0; i < tableSize; i++) {

        // Element found
        if (hash[index] == n) {
            found = true;
            break;
        }

        // Empty position means element is not present
        if (hash[index] == 0) {
            break;
        }

        // Move to the next position
        index = (index + 1) % tableSize;
    }

    if (found) {
        cout << n << " exists in the hash table." << endl;
    }
    else {
        cout << n << " does not exist in the hash table." << endl;
    }

    return 0;
}
