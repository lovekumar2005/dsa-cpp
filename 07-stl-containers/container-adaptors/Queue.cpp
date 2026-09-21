#include <iostream>
#include <queue>
using namespace std;

int main(){
    // queue<int> s = {1, 2, 3}; // Error: std::queue does not support initializer lists, so you cannot initialize a queue with a list of values like this.
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.front() << endl; // Output: 1
    q.pop();
    cout << q.front() << endl; // Output: 2
    cout << q.empty() << endl; // Output: 0 (false)
    cout << q.size() << endl; // Output: 2
    cout << q.front() << endl; // Output: 2
    cout << q.size() << endl; // Output: 2
    return 0;
}