// Program: Character Hashing - Frequency Counting

// Question:
// Given a string containing lowercase English letters,
// count the frequency of each character.
// Then answer Q queries by printing the frequency
// of each queried character.

// Pre-computation: O(N)
// Each query: O(1)
// Space Complexity: O(1) because hash size is always 26.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Step 1: Create hash array for 26 lowercase letters
    int hash[26] = {0};

    // Step 2: Pre-compute character frequencies
    for (int i = 0; i < str.size(); i++) {
        hash[str[i] - 'a']++;
    }

    // Step 3: Process frequency queries
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    while (q--) {
        char c;
        cout << "Enter character: ";
        cin >> c;

        // Fetch character frequency
        cout << "Frequency of " << c
             << " = " << hash[c - 'a'] << endl;
    }

    return 0;
}
