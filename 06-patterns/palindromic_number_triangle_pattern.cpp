#include<iostream>
using namespace std;

/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
*/

int main()
{
    int n;
    cout << "Enter row number: ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int s = n - i; s >= 1; s--){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << j << " ";
        }
        for(int k = i - 1; k >= 1; k--){
            cout << k << " ";

        }
        cout << endl;
  }
    return 0;
}