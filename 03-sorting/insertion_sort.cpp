#include <iostream>
using namespace std;


//WITH FOR LOOP
// void sortArray(int arr[], int size){
//     for(int i = 1; i < size; i++){
//         int key = arr[i];
//         int j = i - 1;
//         for(; j >= 0; j--){
//             if(arr[j] > key){
//                 arr[j+1] = arr[j]; 
//             }else{
//                 break;
//             }
//         }
//         arr[j+1] = key;
//     } 
// }

//WITH WHILE LOOP
void sortArray(int arr[], int size){
    int i = 1;
    while(i < size){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0){
            if(arr[j] > key){
                arr[j+1] = arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1] = key;
        i++;
    }
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    sortArray(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}