#include <iostream>
#include <vector>
using namespace std;

bool isSortedRotated(int arr[], int size)
{

    int n = size;
    int isSorted = 0;

    for (int i = 1; i < size; i++)
    {
        /* code */
        if (arr[i - 1] > arr[i])
        {
            isSorted++;
        }
    }

    if (arr[n - 1] > arr[0])
        isSorted++;

    return isSorted <= 1;
}
int main()
{
    int arr[6] = {5, 2, 3, 4, 8, 9};
    int arr2[5] = {3, 4, 5, 1, 2};
    int arr3[5] = {1, 2, 3, 4, 5};
    int arr4[5] = {1, 1, 1, 1, 1};
    int n = 6;
    int n2 = 5;

    bool value = isSortedRotated(arr, n);
    cout << "O/p 1 : " << value << endl;

    bool value2 = isSortedRotated(arr2, n2);
    cout << "O/p 2 : " << value2 << endl;

    bool value3 = isSortedRotated(arr3, n2);
    cout << "O/p 2 : " << value3 << endl;

    bool value4 = isSortedRotated(arr4, n2);
    cout << "O/p 4 : " << value4 << endl;
}
