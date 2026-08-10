#include<iostream>
using namespace std;

int findPivot(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int mid = start + (end - start) / 2;
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }else{
            end = mid ;
        }

    }
    return start;
}

int main()
{
    int num[8] = {6, 7, 8, 1, 2, 3, 4, 5};

    int index = findPivot(num, 8);

    cout << "Index of pivot is " << index << endl;
 
   return 0;
}