#include<iostream>
using namespace std;

int uniqueElemnt(int arr[], int size)
{
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ arr[i]; // this approach is useable if other elements are twice and there is one unique number
    }
    return ans;
}

int main()
{
    int size = 7;
    int arr[size] = {3, 7, 2, 2, 7, 3, 4};

    int uniqueNumber = uniqueElemnt(arr, size);

    cout << uniqueNumber;

   return 0;
}
