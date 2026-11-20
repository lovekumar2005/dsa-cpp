#include <iostream>
using namespace std;

int power(int x, int n) {
    if (n == 0) {
        return 1;
    }

    int halfPower = power(x, n / 2);
    
    // If n is even
    if (n % 2 == 0) {
        return halfPower * halfPower;
    }

    // If n is odd
    else {
        return x * halfPower * halfPower;
    }
}

int main() {
    int x = 2;
    int n = 10;

    cout << power(x, n) << endl;

    return 0;
}