// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

#include <iostream>
using namespace std;

int main(){
   for(int i = 5; i > 0; i--){
      for(int j = i; j > 0; j--){
         cout << "*";
      }
      //space 1
      for(int space1 = 0; space1 < 5 - i; space1++){
         cout << " ";
      }
      //sapce 2
      for(int space2 = 0; space2 < 5 - i; space2++){
         cout << " ";
      }
      for(int j = i; j > 0; j--){
         cout << "*";
      }
      cout << "\n";
   }

   for(int i = 0; i < 5; i++){
      for(int j = 0; j <= i; j++){
         cout << "*";
      }
      //space 3
      for(int space3 = 0; space3 < 5 - (i + 1); space3++){
         cout << " ";
      }
      //sapce 4
      for(int space4 = 0; space4 < 5 - (i + 1); space4++){
         cout << " ";
      }
      for(int j = 0; j <= i; j++){
         cout << "*";
      }
      cout << "\n";
   }

   return 0;
}