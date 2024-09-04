#include <iostream>
using namespace std;

bool isSorted(int arr[], int length)
{
    if (length == 0 || length == 1)
    {
        return true;
    }

    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = isSorted(arr + 1, length - 1);
        return ans;
    }
}

int main()
{
    int arr[5] = {1, 3, 4, 5, 8};   // Sorted
    int arr2[5] = {1, 3, 4, 50, 8}; // Not Sorted

    bool isSort = isSorted(arr, 5);
    bool isSort2 = isSorted(arr2, 5);
    if (isSort)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
    if (isSort2)
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not Sorted" << endl;
    }
}
