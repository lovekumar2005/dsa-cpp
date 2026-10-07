#include<iostream>
using namespace std;

/*
   A B C
   D E F
   G H I
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;

    int i = 1;
    int value = 1;
    while(i <= n){
        int j = 1;
        
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