#include<iostream>
using namespace std;

int findDuplicateNumber(int arr[], int size)
{
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
            //OR
            // if((arr[i] ^ arr[j]) == 0){
                return arr[i];
            }
        }
    }
}

int main()
{
    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6, 3};

    int duplicateNumber = findDuplicateNumber(arr, size);

    cout << duplicateNumber;

   return 0;
}
