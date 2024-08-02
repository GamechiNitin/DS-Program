// Mountian peak
/*
You are given an integer mountain array arr of length n where the values
increase to a peak element and then decrease.

Return the index of the peak element.
Your task is to solve it in O(log(n)) time complexity.*/

#include <iostream>
using namespace std;

int findPeak(int arr[], int index)
{

    int start = 0;
    int end = index - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        // condition 1
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}
int main()
{

    int arr[4] = {0, 10, 5, 2};

    int result = findPeak(arr, 4);
    // Element must be in sorted order in increasing and descreasing

    cout << result;
}
