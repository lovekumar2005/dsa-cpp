#include <iostream>
using namespace std;

/*
Count how many 1 bits a number has.
*/

int main()
{
    int n;

    cout << "Enter number: ";
    cin >> n;

    int count = 0;

    while(n != 0)
    {
        if(n & 1)
        {
            count++;
        }

        n = n >> 1;
    }

    cout << count << endl;

    return 0;
}