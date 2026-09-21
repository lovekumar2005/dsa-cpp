#include <iostream>
#include <list>
using namespace std;

int main() {

    // list<int> d(5, 0); // Create a deque of size 5 with all elements initialized to 0
    // list<int> d(5, 3); // Create a deque of size 5 with all elements initialized to 3
    list<int> l = {10, 20, 30}; // Create a deque with initial values

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    l.push_front(1);

    // cout << l[0] << endl; // Error: std::list does not support random access iterators, so you cannot use the subscript operator or the at() method with std::list.
    // cout << l[1] << endl; // Error: std::list does not support random access iterators, so you cannot use the subscript operator or the at() method with std::list.
    // cout << l.at(2) << endl; // Error: std::list does not support random access iterators, so you cannot use the subscript operator or the at() method with std::list.
    cout << l.empty() << endl; // Output: 0 (false)
    cout << l.size() << endl; // Output: 7
    cout << l.max_size() << endl; // Output: 4611686018427387903 (or a large number depending on the system)
    cout << l.front() << endl; // Output: 1
    cout << l.back() << endl; // Output: 20

    for (int x : l) {
        cout << x << " ";
    }

    cout << endl;

    l.pop_front();
    l.pop_back();

    for (int x : l) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}