#include <iostream>
using namespace std;

int leftOccurance(int arr[], int index, int key)
{
    int start = 0;
    int end = index - 1;
    int median = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        int x = arr[median];

        if (key == x)
        {
            ans = median;
            end = median - 1;
        }

        if (key > x)
        {
            start = median + 1;
        }
        else if (key < x)

        {
            end = median - 1;
        }

        median = start + (end - start) / 2;
    }
    return ans;
}

int rightOccurance(int arr[], int index, int key)
{
    int start = 0;
    int end = index - 1;
    int mid = start + (end - start) / 2;
    int answer = -1;

    while (start <= end)
    {
        int x = arr[mid];

        if (key == arr[mid])
        {
            answer = mid;
            start = mid + 1;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return answer;
}

int main()
{
    /* First and Lasr Position of an Element in Sorted array*/

    int key;
    int key2;

    cout << "Enter Search Key 1 : ";
    cin >> key;
    cout << "Enter Search Key 2 : ";
    cin >> key2;

    int even[6] = {2, 5, 6, 8, 9, 12};
    int odd[7] = {1, 2, 3, 3, 3, 3, 5};

    int left = leftOccurance(even, 6, key);
    int right = rightOccurance(even, 6, key);

    int left2 = leftOccurance(odd, 7, key2);
    int right2 = rightOccurance(odd, 7, key2);

    cout << "Key 1 index is : " << left << "|" << right << endl;
    cout << "Key 2 index is : " << left2 << endl;
    cout << "Key 2 index is : " << right2 << endl;
}
