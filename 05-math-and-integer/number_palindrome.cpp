// Program: Check Whether a Number Is Palindrome
// A palindrome number remains the same when reversed.
// Example: 121, 1331,  madam (for strings)

#include <iostream>
using namespace std;

int findReverse(int num) {
    int reverse = 0;

    while (num != 0) {
        int digit = num % 10;          
        reverse = (reverse * 10) + digit; 
        num = num / 10;              
    }

    return reverse;
}

int main() {
    int num;

    cout << "Enter Number: ";
    cin >> num;

    int reverseNumber = findReverse(num);

    if (reverseNumber == num) {
        cout << "Number is Palindrome." << endl;
    } 
    else {
        cout << "Number is Not Palindrome." << endl;
    }

    return 0;
}