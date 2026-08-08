#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] ==  key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

    }
    return -1;
}

int main()
{
    int num[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int index = binarySearch(num, 9, 8);

    cout << "Index of 3 is " << index << endl;
 
   return 0;
}