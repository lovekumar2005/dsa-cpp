// Program: Find the Nth Fibonacci Number Using Recursion

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int last = fibonacci(n - 1);
    int secondLast = fibonacci(n - 2);

    return last + secondLast;
}

int main() {
    int n;
    cout << "Enter Fibonacci Position: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative number." << endl;
        return 0;
    }

    cout << "Fibonacci Number at Position " << n << " = " << fibonacci(n) << endl;

    return 0;
}