// 4444444
// 4333334
// 4333334
// 4333334
// 4333334
// 4333334
// 4444444

#include <iostream>
using namespace std;

int main(){
   int n;
   cout << "Enter rows: " ;
   cin >> n;
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(i == 0 || i == n-1 || j == 0 || j == n-1){
            cout << "4";
         } else {
            cout << "3";
         }
      }
      cout << endl;
   }

   return 0;
}