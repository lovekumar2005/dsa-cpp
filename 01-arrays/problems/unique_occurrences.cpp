#include <iostream>
using namespace std;

bool uniqueOccurrences(int arr[], int size)
{
    int countArr[size];
    int index = 0;

    for(int i = 0; i < size; i++)
    {
        bool visited = false;

        for(int k = 0; k < i; k++)
        {
            if(arr[i] == arr[k])
            {
                visited = true;
                break;
            }
        }

        if(visited)
            continue;

        int count = 0;

        for(int j = 0; j < size; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        countArr[index] = count;
        index++;
    }

    // Check every pair of counts
    for(int i = 0; i < index; i++)
    {
        for(int j = i + 1; j < index; j++)
        {
            if(countArr[i] == countArr[j])
                return false;
        }
    }

    return true;
}

int main()
{
    int arr[] = {1,2,2,3,1,1,3};
    int size = sizeof(arr)/sizeof(int);

    if(uniqueOccurrences(arr, size))
        cout << "True";
    else
        cout << "False";
}