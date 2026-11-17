// Program: Find GCD (Greatest Common Divisor) / HCF
// Approach: Brute Force
#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;

    for(int i = min(num1, num2); i >= 1; i--){
        if(num1 % i == 0 && num2 % i == 0){
            cout << i << endl;
            break;
        }
    }

    return 0;
}