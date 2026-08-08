#include<iostream>
using namespace std;

/*
   D
   C D
   B C D
   A B C D
*/

int main()
{
  int n;
  cout << "Enter row number: ";
  cin >> n;

  int i = n;
  
  while(i >= 1){
      int value = i;
      int j = n;
      while(j >= i){
          cout << (char)(value + 64) << " ";
          value++;
          j--;
      }
      cout << endl;
      i--;
      
  }
    
    return 0;
}