#include <iostream>
#include <queue>
using namespace std;

int main(){
    // priority_queue<int> s = {1, 2, 3}; // Error: std::priority_queue does not support initializer lists, so you cannot initialize a priority queue with a list of values like this.
    //mix heap
    priority_queue<int> q;

    q.push(44);
    q.push(65);
    q.push(20);

    cout << q.top() << endl; // Output: 65
    q.pop();
    cout << q.top() << endl; // Output: 44
    cout << q.empty() << endl; // Output: 0 (false)
    cout << q.size() << endl; // Output: 2
    cout << q.top() << endl; // Output: 44
    cout << q.size() << endl; // Output: 2

    //min heap
    priority_queue<int, vector<int>, greater<int>> q1;
    q1.push(44);
    q1.push(65);
    q1.push(20);

    cout << q1.top() << endl; // Output: 20
    q1.pop();
    cout << q1.top() << endl; // Output: 44
    return 0;
}