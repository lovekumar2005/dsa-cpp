#include<iostream>
using namespace std;

/*
  ****
  ****
  ****
  ****
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;

    int i = 1;
    int j = 1;
    
    while(i <= n){
        j = 1;
        while ((j <= n))
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    return 0;
}