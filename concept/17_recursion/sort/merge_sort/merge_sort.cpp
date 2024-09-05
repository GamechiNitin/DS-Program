#include <iostream>
using namespace std;

void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    int leftLength = mid - s + 1;
    int rightLenth = e - mid;

    int *first = new int[leftLength];
    int *second = new int[rightLenth];

    // Copy Value
    int mainIndex = s;
    for (int i = 0; i < leftLength; i++)
    {
        first[i] = arr[mainIndex++];
    }

    mainIndex = mid + 1;
    for (int i = 0; i < rightLenth; i++)
    {
        second[i] = arr[mainIndex++];
    }

    // Merge
    int index1 = 0;
    int index2 = 0;
    mainIndex = s;

    while (index1 < leftLength && index2 < rightLenth)
    {
        if (first[index1] < second[index2])
        {
            arr[mainIndex++] = first[index1++];
        }
        else
        {
            arr[mainIndex++] = second[index2++];
        }
    }

    while (index1 < leftLength)
    {
        arr[mainIndex++] = first[index1++];
    }

    while (index2 < rightLenth)
    {
        arr[mainIndex++] = second[index2++];
    }
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = s + (e - s) / 2;
    // Divide
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    // Swap

    // Combine
    merge(arr, s, e);
}

int main()
{
    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    mergeSort(arr, 0, 6);

    for (int i = 0; i <= 6; i++)
    {
        cout << arr[i] << " ";
    }
}