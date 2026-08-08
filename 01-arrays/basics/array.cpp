#include<iostream>
#include <climits>
using namespace std;

int maxNumber(int arr[], int size)
{
    // int large = arr[0]; // or
    int large = INT_MIN;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > large)
        {
            large = arr[i];
        }
    }
    return large;
}

int minNumber(int arr[], int size)
{
    // int min = arr[0];  // or
    int min = INT_MAX;
    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    int size = 5;
    int num[size] = {-5, 4, -7, 10, 2};

    int largeNumber = maxNumber(num, size);
    cout << "Large number is : " << largeNumber << endl; 

    int smallNumber = minNumber(num, size);
    cout << "Small number is : " << smallNumber << endl; 

   return 0;
}