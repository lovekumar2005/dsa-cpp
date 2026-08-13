#include<iostream>
using namespace std;

bool isPossible(int arr[], int size, int students, int mid){
    int studentsCount = 1;
    int pagesSum = 0;

    for(int i = 0; i < size; i++){
        if(pagesSum + arr[i] <= mid){
            pagesSum = pagesSum + arr[i];
        }
        else{
            studentsCount++;
            pagesSum = arr[i];
            if(studentsCount > students){
                return false;
            }
        }
    }
    return true;
}

int bookAllocation(int arr[], int size, int students){
    int start = 0;
    int end = 0;
    int ans = -1;

    for(int i = 0; i < size; i++){
        start = max(start, arr[i]);
        end = end + arr[i];
    }

    while(start <= end){
        int mid = start + (end - start) / 2;
        if(isPossible(arr, size, students, mid)){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int books[5] = {10, 20, 30, 40};
    int students = 2;

    int maxPages = bookAllocation(books, 4, students);

    cout << "Max pages are: " << maxPages << endl;

   return 0;
}

