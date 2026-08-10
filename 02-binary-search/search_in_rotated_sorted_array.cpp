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

int binarySearch(int arr[], int start, int end, int key){

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

int search(int arr[], int size, int key){
    
    int pivot = findPivot(arr, size);
    if(arr[pivot] <= key && key <= arr[size - 1])
    {
        return binarySearch(arr, pivot, size - 1, key);
    }else
    {
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

int main()
{
    int num[8] = {6, 7, 8, 1, 2, 3, 4, 5};

    int index = search(num, 8, 41);

    if(index == -1){
        cout << "Key is not present." << endl;
    }else{
        cout << "Index of key is: " << index << endl;
    }
 
   return 0;
}