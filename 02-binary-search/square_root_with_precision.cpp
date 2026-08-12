#include<iostream>
using namespace std;

int squareRoot(int num){
    int start = 0;
    int end = num;
    long long int ans = -1;

    while(start <= end){
        long long int mid = start + (end - start) / 2;
        long long int square = mid * mid;
        if(square == num){
            return mid;
        }
        else if(square < num){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return ans;
}

double squareRootWithPrecision(int num, int precision, int tempSol){
    double ans = tempSol;
    double factor = 1;

    for(int i = 0; i < precision; i++){
        factor = factor / 10;
        for(double j = ans; j * j < num; j = j +factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int num = 26;

    int tempSol = squareRoot(num);

    cout << "Square root of " << num << " is: " << squareRootWithPrecision(num, 3, tempSol) << endl;
 
   return 0;
}