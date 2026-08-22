#include <iostream>
using namespace std;

void sortArray(int arr[], int size){
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {10, 1, 7, 6, 14, 9};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}