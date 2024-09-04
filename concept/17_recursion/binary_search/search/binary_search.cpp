#include <iostream>
using namespace std;

void print(int arr[], int s, int e)
{
    for (int i = s; i < e; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int s, int e, int key)
{
    print(arr, s, e);
    if (s > e)
    {
        return -1;
    }

    int mid = s + (e - s) / 2;
    cout << "value of mid is : " << arr[mid] << " " << mid << endl;

    if (arr[mid] == key)
    {
        return mid;
    }

    if (arr[mid] < key)
    {
        return binarySearch(arr, mid + 1, e, key);
    }
    else
    {
        return binarySearch(arr, s, e - 1, key);
    }
}

int main()
{
    int key = 22;
    int arr[6] = {1, 3, 4, 5, 8, 22}; // Sorted

    int index = binarySearch(arr, 0, 6, key);
    cout << "At Index : " << index << endl;
}
