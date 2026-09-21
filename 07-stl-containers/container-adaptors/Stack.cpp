#include <iostream>
#include <stack>
using namespace std;

int main(){
    // stack<int> s = {1, 2, 3}; // Error: std::stack does not support initializer lists, so you cannot initialize a stack with a list of values like this.
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl; // Output: 3
    s.pop();
    cout << s.top() << endl; // Output: 2
    cout << s.empty() << endl; // Output: 0 (false)
    cout << s.size() << endl; // Output: 2
    cout << s.top() << endl; // Output: 2
    cout << s.size() << endl; // Output: 2
    return 0;
}