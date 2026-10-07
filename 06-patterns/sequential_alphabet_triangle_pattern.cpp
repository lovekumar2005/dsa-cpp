#include<iostream>
using namespace std;

/*
   A 
   B C
   D E F
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
  int value = i;
  while(i <= n){
        int j = 1;
        while(j <= i){
           cout << (char)(value + 64) << " ";
           value++;
           j++;
        }
        cout << endl;
        i++;
        
  }
    
    return 0;
}