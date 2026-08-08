#include <iostream>
#include <cmath>
using namespace std;


bool power(int n) {
    for(int i = 0; i < n; i++){
        if(pow(2,i) == n){
            return true;
        }
    }
    return false;
}

int main() {

    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(power(num)){
        cout << "True";
    }
    else{
        cout << "False";
    }

    

    return 0;
}