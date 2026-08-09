#include<iostream>
using namespace std;

/*
   A A A
   B B B
   C C C
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
            j++;
        }
        cout << endl;
        i++;
    }

    
    return 0;
}