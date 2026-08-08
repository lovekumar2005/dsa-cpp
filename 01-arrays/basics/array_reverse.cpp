#include<iostream>
using namespace std;

void reverse(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        //OR
        //swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int size = 10;
    int num[size] = {-5, 4, -7, 10, 2, 8, -3, 6, 1, 9};

    cout << "Array before reversing : ";
    for(int i = 0; i < size; i++){
        cout << num[i] << " ";
    }

    reverse(num, size);
 
    cout << endl << "Array after reversing : ";
    for(int i = 0; i < size; i++){
        cout << num[i] << " ";
    }
    
   return 0;
}
