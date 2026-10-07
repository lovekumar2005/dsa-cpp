#include<iostream>
using namespace std;

/*
   A 
   B C
   C D E
   D E F G
*/

int main()
{
  int n;
  cout << "Enter row number: ";
  cin >> n;

  int i = 1;
  
  while(i <= n){
      int value = i;
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