#include<iostream>
using namespace std;

/*
          *
         **
        ***
       ****
      *****
*/

int main()
{
  int n;
  cout << "Enter row number: ";
  cin >> n;

//   for(int i = 1; i <= n; i++){
//     for(int s = n - i; s >= 1; s--){
//         cout << " ";
//     }
//     for(int j = 1; j <= i; j++){
//         cout << "*";
//     }
//     cout << endl;
//   }


   int i = 1;
   
   while (i <= n){
    int s = n - i;
    int j = 1;
    while(s >= 1){
        cout << " ";
        s--;
    }
    while (j <= i){
        cout << "*";
        j++;
    }
    cout << endl;
    i++;
   }
   
    
    
    return 0;
}