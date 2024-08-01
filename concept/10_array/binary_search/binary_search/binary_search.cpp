#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
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

    int key;
    int key2;
    cout << "Enter Search Key 1 : ";
    cin >> key;
    cout << "Enter Search Key 2 : ";
    cin >> key2;

    int even[6] = {2, 5, 6, 8, 9, 12};
    int odd[7] = {3, 4, 7, 8, 10, 11, 14};

    int result = binarySearch(even, 6, key);
    int result2 = binarySearch(odd, 7, key2);

    cout << "Key 1 index is : " << result << endl;
    cout << "Key 2 index is : " << result2 << endl;
}