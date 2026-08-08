#include<iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int size = 10;
    int num[size] = {-5, 4, -7, 10, 2, 8, -3, 6, 1, 9};

    int key;
    cout << "Enter key to search: ";
    cin >> key;

    bool result = search(num, size, key);

    if(result){
        cout << "Key is present" << endl;
    }
    else{
        cout << "Key is not present" << endl;
    }
    
   return 0;
}