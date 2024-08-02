#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
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

int binarySearch(int arr[], int start, int end, int key)
{

    // int start = start;
    // int end = end - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    int n = 5;
    int key = 17;

    int pivot = getPivot(arr, 5);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        int search = binarySearch(arr, pivot, n - 1, key);
        cout << "Pivot point Index is " << pivot << " and value is " << arr[pivot] << endl;
        cout << "Pivot point Index is " << search << endl;
    }
    else
    {
        int search2 = binarySearch(arr, 0, pivot - 1, key);
        cout << "2 Pivot point Index is " << pivot << " and value is " << arr[pivot] << endl;
        cout << "2 Pivot point Index is " << search2 << endl;
    }
}