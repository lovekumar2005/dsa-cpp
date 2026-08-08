#include<iostream>
using namespace std;

/*
      *****
      ****
      ***
      **
      *
*/

int main()
{
  int n;
  cout << "Enter row number: ";
  cin >> n;

//   for(int i = 0; i < n; i++){
//     for(int j = n - i; j >= 1; j--){
//         cout << "*";
//     }
//     cout << endl;
//   }
   
    int i = 0;
    while(i < n){
        int j = n - i;
        while(j >= 1){
            cout << "*";
            j--;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}