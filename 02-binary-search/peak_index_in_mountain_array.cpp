#include<iostream>
using namespace std;

int peakindex(int arr[], int size){
    int start = 0;
    int end = size - 1;

    while(start < end){
        int mid = start + (end - start) / 2;
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;    
        }

    }
    return start;
}

int main()
{
    int num[9] = {1, 2, 3, 9, 8, 6, 5, 3, 0};

    int index = peakindex(num, 9);

    cout << "Peak index is: " << index << endl;
 
   return 0;
}