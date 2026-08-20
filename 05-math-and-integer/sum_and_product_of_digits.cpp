#include<iostream>
using namespace std;

/*
  Find sum and multiplaction of digits of a number.
*/

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0; 
    int mul = 1;

   for(int i = 1; n != 0; i++){
       int digit = n % 10;
       n = n / 10;
       sum = sum + digit;
       mul = mul * digit;
      //  cout << digit;  //print reverse of number
   }

   int diff = mul - sum;
  //  cout << diff << endl;

   return 0;
}