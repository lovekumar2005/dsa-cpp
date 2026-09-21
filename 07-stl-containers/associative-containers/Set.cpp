#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4, 4, 5}; // Create a set with initial values

    s.insert(3); // Insert a duplicate value (will not be added)
    s.insert(6); // Insert a new value

    for(int x : s) {
        cout << x << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    cout << "Size: " << s.size() << endl; // Output: Size: 5
    cout << "Empty: " << s.empty() << endl; // Output: Empty: 0 (false)
    s.erase(3); // Remove the element 3 from the set

    for(int x : s) {
        cout << x << " "; // Output: 1 2 4 5
    }
    cout << endl;

    cout << "Size: " << s.size() << endl; // Output: Size: 4
    cout << "Empty: " << s.empty() << endl; // Output: Empty: 0 (false)
   

    auto it = s.find(2); // Find the element 2 in the set
    if(it != s.end()) {
        cout << "Found: " << *it << endl; // Output: Found: 2
    } else {
        cout << "Not found" << endl;
    }

    for(auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " "; // Output: 1 2 4 5
    }
    return 0;
}