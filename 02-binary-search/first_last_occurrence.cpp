#include<iostream>
using namespace std;

int leftOccurnece(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int rightOccurnece(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int size = 10;
    int arr[size] = {0, 1, 1, 3, 5, 6, 7, 7, 7, 9};

    cout << "First index of 9 is: " << leftOccurnece(arr, size, 10) << endl;
    cout << "End index of 9 is: " << rightOccurnece(arr, size, 10) << endl;
    
   return 0;
}