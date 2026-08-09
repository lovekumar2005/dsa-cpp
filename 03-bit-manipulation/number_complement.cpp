#include <iostream>
using namespace std;

/*
    Problem: Number Complement

    Given a non-negative integer n, return the bitwise complement of n.

    The complement of an integer is obtained by flipping all the bits
    in its binary representation (excluding leading zeros).

    Examples:

    Input: 5
    Binary: 101
    Complement: 010
    Output: 2

    Input: 1
    Binary: 1
    Complement: 0
    Output: 0

    Input: 0
    Binary: 0
    Complement: 1
    Output: 1

*/

int bitwiseComplement(int n) {

    int m = n;
    int mask = 0;

    if (m == 0) {
        return 1;
    }

    while (m != 0) {
        m = m >> 1;
        mask = (mask << 1) | 1;
    }

    int ans = (~n) & mask;

    return ans;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Complement = " << bitwiseComplement(num);

    return 0;
}