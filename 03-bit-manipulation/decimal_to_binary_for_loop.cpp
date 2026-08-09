#include<iostream>
#include <cmath>
using namespace std;

// Print the binary representation of an integer.

int main()
{
    int num = 5;

    for(int i = 31; i >= 0; i--)
{
    cout << ((num >> i) & 1);
}
    
   return 0;
}