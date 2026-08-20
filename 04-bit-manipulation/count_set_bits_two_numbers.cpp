#include<iostream>
using namespace std;

int countBits(int a, int b){
    int count = 0;
    for(int i = 1; a != 0; i++){
        if((a & 1) == 1){
            count++;
        }
        a = a >> 1;
    }

    for(int i = 1; b != 0; i++){
        if((b & 1) == 1){
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int main()
{
    int a;
    cout << "Enter a: ";
    cin >> a;
    int b;
    cout << "Enter b: ";
    cin >> b;

    int bits = countBits(a,b);
    cout << "1 bits between " << a << " and " << b << " are :" << bits << endl;

   return 0;
}