#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m; // Create an empty map

    m[1] = "one"; // Insert key-value pair (1, "one")
    m[2] = "two"; // Insert key-value pair (2, "two)
    m[3] = "three"; // Insert key-value pair (3, "three")

    cout << "Before erasing:" << endl;
    cout << "Size: " << m.size() << endl; // Output: Size: 3
    for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }
    
    m.erase(2); // Erase the key-value pair with key 2
    cout << "Size after erasing key 2: " << m.size() << endl; // Output: Size after erasing key 2: 2
    cout << "After erasing:" << endl;
    for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }

    m.insert({4, "four"}); // Insert a new key-value pair (4, "four")
    m.insert({5, "five"}); // Insert a new key-value pair (5, "five")

    cout << "After inserting new elements:" << endl;
    for(auto x: m){
        cout << x.first << " " << x.second << endl;
    }

    cout << m.count(3) << endl; // Output: 1 (key 3 exists)

    // Finding an element in the map
    auto it = m.find(3); // Find the element with key 3
    if(it != m.end()) {
        cout << "Found: " << it->first << " " << it->second << endl; // Output: Found: 3 three
    } else {
        cout << "Not found" << endl;
    }
 
    return 0;
}