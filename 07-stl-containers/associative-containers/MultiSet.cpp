#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> s = {1, 2, 3, 4, 4, 5}; // Create a multiset with initial values

    s.insert(3); // Insert a duplicate value (will be added)
    s.insert(6); // Insert a new value
    s.insert(4); // Insert a duplicate value (will be added)

    for(int x : s) {
        cout << x << " "; // Output: 1 2 3 3 4 4 5
    }
    cout << endl;

    s.erase(4); // Remove all occurrences of the element 4 from the multiset
    s.erase(s.find(3)); // Remove one occurrence of the element 3 from the multiset
    return 0;
}