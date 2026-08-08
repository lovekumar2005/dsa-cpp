#include<iostream>
using namespace std;

/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 1; j <= n - i; j++){
            cout << j << " ";
        }

        for(int star = 1; star <= (i * 2); star++){
            cout << "* "; 
        }

        for(int k = n - i; k >= 1; k--){
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}