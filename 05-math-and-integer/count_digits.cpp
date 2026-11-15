#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int num = 12345;

    //Method 01
    int count = (int)(log10(num) + 1);
    cout << count << endl;

    //Method 02
    // while(num != 0){
    //     int digit = num % 10;
    //     num = num / 10;
    //     count++;
    // }
    // cout << count << endl;

    return 0;
}