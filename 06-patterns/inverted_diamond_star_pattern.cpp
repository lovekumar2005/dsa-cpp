/*
*
**
***
****
*****
****
***
**
*
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower half
    for (int i = n - 1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}