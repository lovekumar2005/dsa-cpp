#include<iostream>
using namespace std;

int squareRoot(int num){
    int start = 0;
    int end = num;
    long long int ans = 0;

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

int main()
{
    int num = 169;

    int index = squareRoot(num);

    cout << "Square root of " << num << " is: " << index << endl;
 
   return 0;
}