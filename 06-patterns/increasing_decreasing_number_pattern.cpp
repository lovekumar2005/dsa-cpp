// 1      1
// 12    21
// 123  321
// 12344321

#include <iostream>
using namespace std;

int main(){
   int start = 1;
   for(int i = 0; i < 4; i++){
      for(int j = 0; j <= i; j++){
         cout << j + 1;
      } 
      for(int space = 0; space < 6 - (i*2); space++){
         cout << " ";
      }
      for(int k = i + 1; k > 0; k--){
         cout << k;
      }
      cout << endl;
   }

   return 0;
}