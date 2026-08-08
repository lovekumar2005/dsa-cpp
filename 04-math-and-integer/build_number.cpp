#include<iostream>
using namespace std;

int main()
{
    int max_digit;
    cout << "Enter max digits: " ;
    cin >> max_digit;

    int answer = 0;
    int place = 1; // 10^0
    int digit;

    for(int i = 0; i < max_digit; i++){
        cout << "Enter digit number " << i + 1 << " : ";
        cin >> digit;
        answer = (answer * 10) + digit;
    }
    cout << answer;
   return 0;
}