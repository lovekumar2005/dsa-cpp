#include <iostream>
#include <climits>
using namespace std;

/*
    Problem: Reverse Integer

    Given a signed 32-bit integer x, return x with its digits reversed.

    If reversing x causes the value to go outside the signed
    32-bit integer range [-2^31, 2^31 - 1], return 0.

    Note:
    - Do not use a 64-bit integer (long long).
    - Handle both positive and negative numbers.

    Examples:

    Input: 123
    Output: 321

    Input: -123
    Output: -321

    Input: 120
    Output: 21

    Input: 1534236469
    Output: 0   // Overflow
*/

int reverse(int x) {
    int answer = 0;

    while (x != 0) {
        int digit = x % 10;

        if (answer > INT_MAX / 10 || answer < INT_MIN / 10) {
            return 0;
        }

        answer = answer * 10 + digit;
        x = x / 10;
    }

    return answer;
}

int main() {
    int num = 129;

    cout << reverse(num);

    return 0;
}