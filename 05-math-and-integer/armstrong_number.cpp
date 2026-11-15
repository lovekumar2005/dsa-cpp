// Program: Check Whether a Number Is Armstrong
// An Armstrong number is a number equal to the sum
// of the cubes of its digits (for 3-digit numbers).
// Example: 153
// 1^3 + 5^3 + 3^3 = 153
// Therefore, 153 is an Armstrong number.

#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter Number: ";
    cin >> num;

    int originalNum = num;
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum = sum + (digit * digit * digit);
        num = num / 10;
    }

    if (sum == originalNum) {
        cout << "Number is Armstrong." << endl;
    }
    else {
        cout << "Number is Not Armstrong." << endl;
    }

    return 0;
}