#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a; //size zero

    // vector<int> b(5); //size 5 and all elements 0
    // for(int x: b){
    //     cout << x << endl;
    // }

    // vector<int> c(5, 10); //size 5 and all elements 10 
    // for(int x: c){
    //     cout << x << endl;
    // }

    // vector<int> d = {1, 2, 3, 4, 5}; //size 5 and all elements are given values
    // for(int x: d){
    //     cout << x << endl;
    // }

    // a.push_back(10); //add at the end

    vector<int> e(5,1);
    vector<int> f(e); //vector e's element now in f

    for(int x: e){
        cout << x << endl;
    }

    return 0;
}