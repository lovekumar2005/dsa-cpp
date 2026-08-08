#include<iostream>
using namespace std;

void findTripletSum(int arr[], int size, int sum){
    int elem;

    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            for(int k = j + 1; k < size; k++){
                if((arr[i] + arr[j] + arr[k]) == sum){
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                    elem = k;
                }
            }
            if(elem == size){
                return;
            }
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    findTripletSum(arr, 10, 15);

   return 0;
}