#include<iostream>
using namespace std;

/*
   A 
   B B
   C C C
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
           j++;
        }
        cout << endl;
        i++;
        value++;
  }
    
    return 0;
}