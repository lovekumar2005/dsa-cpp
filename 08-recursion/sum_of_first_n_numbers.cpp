// Program: Find Sum of First N Natural Numbers Using Recursion

// Two Approaches:
// 1. Parameterised Recursion
// 2. Functional Recursion

#include <iostream>
using namespace std;

// Approach 1: Parameterised Recursion
void findSumParameterized(int num, int sum) {
    if (num < 1) {
        cout << "Sum (Parameterized): " << sum << endl;
        return;
    }

    findSumParameterized(num - 1, sum + num);
}

// Approach 2: Functional Recursion
int findSumFunctional(int n) {
    if (n == 0) {
        return 0;
    }

    return n + findSumFunctional(n - 1);
}

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    findSumParameterized(n, 0);

    cout << "Sum (Functional): " << findSumFunctional(n) << endl;

    return 0;
}
