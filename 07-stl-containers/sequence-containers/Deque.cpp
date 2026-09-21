#include <iostream>
#include <deque>
using namespace std;

int main() {

    // deque<int> d(5, 0); // Create a deque of size 5 with all elements initialized to 0
    // deque<int> d(5, 3); // Create a deque of size 5 with all elements initialized to 3
    deque<int> d = {10, 20, 30}; // Create a deque with initial values

    d.push_back(10);
    d.push_back(20);
    d.push_front(5);
    d.push_front(1);

    cout << d[0] << endl; // Output: 1
    cout << d[1] << endl; // Output: 5
    cout << d.at(2) << endl; // Output: 10
    cout << d.empty() << endl; // Output: 0 (false)
    cout << d.size() << endl; // Output: 7
    cout << d.max_size() << endl; // Output: 4611686018427387903 (or a large number depending on the system)
    cout << d.front() << endl; // Output: 1
    cout << d.back() << endl; // Output: 20
    d.erase(d.begin() + 1); // Erase the second element (5)
    cout << d.size() << endl; // Output: 6
    cout << d.max_size() << endl; // Output: 4611686018427387903 (or a large number depending on the system), remain the same

    for (int x : d) {
        cout << x << " ";
    }

    cout << endl;

    d.pop_front();
    d.pop_back();

    for (int x : d) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}