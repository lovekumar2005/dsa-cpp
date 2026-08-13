#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int stalls[], int size, int cows, int mid) {
    int cowsCount = 1;
    int lastPosition = stalls[0];

    for(int i = 1; i < size; i++) {
        if(stalls[i] - lastPosition >= mid) {
            cowsCount++;
            lastPosition = stalls[i];
            if(cowsCount == cows) {
                return true;
            }
        }
    }
    return false;
}


int aggressiveCow(int stalls[], int size, int cows) {
    sort(stalls, stalls + size);
    int start = 0;
    int ans = -1;
    int maxNumber = stalls[size - 1];
    int minNumber = stalls[0];
    int end = maxNumber - minNumber;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(isPossible(stalls, size, cows, mid)) {
            ans = mid;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}


int main() {

    int stalls[5] = {4, 2, 1, 3, 6};
    int cows = 2;

    int minDistance = aggressiveCow(stalls, 5, cows);

    cout << minDistance;

    return 0;
}