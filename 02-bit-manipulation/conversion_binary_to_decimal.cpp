#include<iostream>
#include <cmath>
using namespace std;

/*
  Convert binary to decimal.
*/

int main()
{
    int number;
    cout << "Enter number: " ;
    cin >> number;

    int answer = 0;
    int place = 1; // 10^0

    for(int i = 0; number != 0; i++){
      int digit = number % 10;
      if(digit == 1){
        answer = answer + pow(2,i);
      }
      number = number / 10;
    }
    cout << answer;
   return 0;
}