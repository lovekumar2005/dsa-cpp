// Program: Check Palindrome String Using Recursion

#include <iostream>
#include <string>
using namespace std;

bool checkPalindrome(string str, int i, int n) {
    if (i >= n / 2) {
        return true;
    }

    if (str[i] != str[n - i - 1]) {
        return false;
    }

    return checkPalindrome(str, i + 1, n);
}

int main() {
    string str = "11211";

    if (checkPalindrome(str, 0, str.length())) {
        cout << "Yes, it is a Palindrome." << endl;
    }
    else {
        cout << "No, it is not a Palindrome." << endl;
    }

    return 0;
}