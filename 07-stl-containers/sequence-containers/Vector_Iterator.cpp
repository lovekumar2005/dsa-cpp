#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, 4, 5};
    vector <int>::iterator it = v.begin(); //iterator points to the first element of vector v
    cout << *it << endl; //prints the value of the first element
    it++; //increment the iterator to point to the next element
    cout << *it << endl; //prints the value of the second element

    vector <int>::iterator it = v.end(); //iterator points to the position after the last element of vector v

    for(auto it = v.begin(); it != v.end(); it++){ //loop through the vector using iterator
        cout << *it << endl; 
    }
    return 0;
}