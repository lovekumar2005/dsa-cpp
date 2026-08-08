#include<iostream>
#include <cmath>
using namespace std;

/*
  Find binary of given decimal number
*/

int main()
{
    int number;
    cout << "Enter number: " ;
    cin >> number;

    int answer = 0;
    int place = 1; // 10^0

    for(int i = 0; number != 0; i++){
      int bit = number & 1;
      answer = (bit * place) + answer;
      // answer = (bit * pow(10,i)) + answer; //pow() returns double not integer...
      place = place * 10;
      number = number >> 1;
    }
    cout << answer;
   return 0;
}