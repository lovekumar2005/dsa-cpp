#include<iostream>
using namespace std;

void findDuplicateNumber(int arr[], int size)
{
    int arrDuplicate[size];
    int index = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i] == arr[j]){
                arrDuplicate[index] = arr[i];
                index++;
            }
        }
    }

    for(int i = 0; i < index; i++){
        cout << arrDuplicate[i] << " ";
    }
}

int main()
{
    int size = 7;
    int arr[size] = {1,3,4,5,5,2,3};
    findDuplicateNumber(arr, size);

   return 0;
}
