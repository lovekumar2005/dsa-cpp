#include<iostream>
using namespace std;

void findPairSum(int arr[], int size, int sum){
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if((arr[i] + arr[j]) == sum){
                cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
            }
        }
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    
    findPairSum(arr, 6, 7);

   return 0;
}