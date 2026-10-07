/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;

    // Upper half
    for (int i = 0; i < n; i++) {

        for (int space = n - i - 1; space > 0; space--) {
            cout << " ";
        }

        for (int star = i * 2 + 1; star > 0; star--) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower half
    for (int i = 0; i < n; i++) {

        for (int space = 0; space < i; space++) {
            cout << " ";
        }

        for (int star = (n * 2 - 1) - (i * 2); star > 0; star--) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}