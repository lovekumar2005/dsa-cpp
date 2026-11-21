#include <iostream>
using namespace std;

int findOccurrence(int arr[], int target, int start, int end, int answer, bool searchFirst) {
    if (start > end) {
        return answer;
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        answer = mid;

        if (searchFirst) {
            end = mid - 1; //For first occurrence, search in the left half
        }
        else {
            start = mid + 1; //For last occurrence, search in the right half
        }
    }
    else if (arr[mid] < target) {
        start = mid + 1;
    }
    else {
        end = mid - 1;
    }

    return findOccurrence(arr, target, start, end, answer, searchFirst);
}

int main() {

    int arr[] = {1, 2, 3, 3, 3, 4, 5};
    int size = 7;
    int target = 3;

    int firstOccurrence = findOccurrence(arr, target, 0, size - 1, -1, true);
    int lastOccurrence = findOccurrence(arr, target, 0, size - 1, -1, false);

    cout << "First occurrence = " << firstOccurrence << endl;
    cout << "Last occurrence = " << lastOccurrence << endl;

    return 0;
}
