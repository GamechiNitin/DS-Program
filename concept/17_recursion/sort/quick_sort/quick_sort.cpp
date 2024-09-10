#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int count = 0;
    int pivot = arr[s];
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }

    // Place pivor to right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // Left Right part
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}
void qsort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    qsort(arr, s, p - 1);
    qsort(arr, p + 1, e);
}

int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    qsort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}