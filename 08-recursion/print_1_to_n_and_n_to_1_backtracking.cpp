// Print 1 to N and N to 1 using Recursion (Backtracking).

#include <iostream>
using namespace std;

// Print 1 to N using Backtracking
void print1ToN(int num) {
    if (num < 1) {
        return;
    }

    print1ToN(num - 1);
    cout << num << endl;
}

// Print N to 1 using Backtracking
void printNTo1(int num, int i) {
    if (i > num) {
        return;
    }

    printNTo1(num, i + 1);
    cout << i << endl;
}

int main() {
    int n;

    cout << "Enter Number: ";
    cin >> n;

    cout << "\nPrinting 1 to N:\n";
    print1ToN(n);

    cout << "\nPrinting N to 1:\n";
    printNTo1(n, 1);

    return 0;
}