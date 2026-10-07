#include<iostream>
using namespace std;

/*
   A B C
   B C D
   C D E
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;

    int i = 1;
    
    while(i <= n){
        int j = 1;
        int value = i;
        while ((j <= n))
        {
            cout << (char)(value + 64) << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }

    
    return 0;
}