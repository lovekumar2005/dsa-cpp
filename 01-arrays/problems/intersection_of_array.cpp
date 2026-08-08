#include<iostream>
using namespace std;

//intersection of array

void findIntersection(int arr1[], int arr2[], int n, int m){
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if(arr1[i] ==  arr2[j]){
            cout << arr1[i] << " ";
            i++;
            j++;
        }
        else if (arr2[j] > arr1[i]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {4, 5, 6, 7, 8};

    findIntersection(arr1, arr2, 6, 5);

   return 0;
}