#include<iostream>
using namespace std;

void alterSwap(int arr[], int size)
{
    //Method_01
    // int start = 0;
    // int end = 1;
    // for(int i = 0; i < size/2; i++){
    //     swap(arr[start], arr[end]);
    //         start = start + 2;
    //         end = end + 2;
    // }

    //Method-02
    for(int i = 0; i < size; i+=2){
        if(i + 1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    int size = 9;
    int num[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Array before reversing : ";
    for(int i = 0; i < size; i++){
        cout << num[i] << " ";
    }

    alterSwap(num, size);
 
    cout << endl << "Array after reversing : ";
    for(int i = 0; i < size; i++){
        cout << num[i] << " ";
    }
    
   return 0;
}
