#include<iostream>
using namespace std;

void sorting(int arr[], int size){
   int i = 0;
   int j = size - 1;
    
   while (i != j)
   {
        if(arr[i] == 0){
            i++;
        }

        if(arr[j] == 1){
            j--;
        }
        
        if(arr[i] == 1 && arr[j] == 0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
   }
}

int main()
{
    int arr[10] = {1, 0, 0, 1, 0, 1, 1, 1};
    
    sorting(arr, 8);

    for(int i = 0; i < 8; i++){
        cout << arr[i];
    }

   return 0;
}