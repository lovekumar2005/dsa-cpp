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

      for(int space1 = 0; space1 < 5 - i; space1++){
         cout << " ";
      }

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

      for(int space3 = 0; space3 < 5 - (i + 1); space3++){
         cout << " ";
      }

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