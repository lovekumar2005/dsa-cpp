#include<iostream>
using namespace std;

/*
    1
    2 3
    4 5 6
    7 8 9 10
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;

    int i = 1;
    int count = 1;
    while(i <= n){
           int j = 1;
        while ((j <= i))
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << count << " ";
    //         count++;
    //     }
    //     cout << endl;
    // }
    
    return 0;
}