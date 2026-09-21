#include <iostream>
#include <array>
using namespace std;

int main(){
    int arr[2] = {1, 2}; //basic array

    array<int, 4> a = {1, 2, 3, 4}; //STL array

    int size = a.size();

    for(int i = 0; i < size; i++){
        cout << a[i] << endl;
    }

    cout << a.at(2) << endl; //gives element at index 2
    cout << a.empty() << endl; //checks if array is empty or not
    cout << a.front() << endl; //gives 1st element of array
    cout << a.back() << endl; //gives last element of array

    a.fill(100); //update every element's value to 100
    for(int i = 0; i < size; i++){
        cout << a[i] << endl;
    }
    return 0;
}