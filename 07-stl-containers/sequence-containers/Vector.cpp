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

    vector<int> vv = {1, 2, 3, 4, 5};
    vv.erase(vv.begin() + 1, vv.begin() + 3); //erase elements from index 1 to 2 (3 is not included)
    for(int x: vv){
        cout << x << endl;
    }

    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() + 1, 10); //insert 10 at index 1
    v.insert(v.begin() + 2, 2, 20); //insert 20 two times at index 2
    for(int x: v){
        cout << x << endl;
    }

    return 0;
}