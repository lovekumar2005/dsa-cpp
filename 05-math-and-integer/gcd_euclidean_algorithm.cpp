// Program: Find GCD using Euclidean Algorithm

// Euclidean Algorithm:
// Repeatedly replace the larger number with the remainder
// until one of the numbers becomes zero.
//
// The remaining non-zero number is the GCD.
//
// Example:
// Input: 12, 18
// Output: 6

#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    while (num1 > 0 && num2 > 0) {
        if (num1 > num2) {
            num1 = num1 % num2;
        }
        else {
            num2 = num2 % num1;
        }
    }

    if (num1 == 0) {
        cout << "GCD = " << num2 << endl;
    }
    else {
        cout << "GCD = " << num1 << endl;
    }

    return 0;
}