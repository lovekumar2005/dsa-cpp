#include<iostream>
using namespace std;

/*
  3 2 1
  3 2 1
  3 2 1
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
    int j = m;
    
    while(i <= n){
        j = m;
        while ((j >= 1))
        {
            cout << j << " "; 
            j--;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}