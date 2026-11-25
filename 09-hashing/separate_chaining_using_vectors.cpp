/*
    Topic: Hashing using Separate Chaining
    Problem:
    Insert elements into a hash table using the modulo
    hash function. If multiple elements get the same index,
    store them in a linked chain (using a vector).
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 15, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    const int SIZE = 10;

    // Create an array of vectors (hash table)
    vector<int> hash[SIZE];

    // Insertion
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % SIZE;
        hash[index].push_back(arr[i]);
    }

    // Display hash table
    cout << "Hash Table using Separate Chaining:\n\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << i << " -> ";
        for (int element : hash[i])
        {
            cout << element << " -> ";
        }

        cout << "NULL\n";
    }

    return 0;
}
