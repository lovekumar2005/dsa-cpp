#include<iostream>
using namespace std;

/*
   1 2 3 
   4 5 6 
   7 8 9
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;
    int m;
    cout << "Enter column number: ";
    cin >> m;
    int i = 1;
    int j = 1;
    int count = 1;
    while(i <= n){
        j = 1;
        while ((j <= m))
        {
            
            cout << count << " "; 
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}