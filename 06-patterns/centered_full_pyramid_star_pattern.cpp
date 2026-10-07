#include<iostream>
using namespace std;

/*
          *
         ***
        *****
       *******
      *********
*/

int main()
{
  int n;
  cout << "Enter row number: ";
  cin >> n;

   for(int i = 1; i <= n; i++){
        for(int s = n - i; s >= 1; s--){
            cout << " ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
      
  return 0;
}