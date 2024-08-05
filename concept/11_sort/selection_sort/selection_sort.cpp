#include <iostream>
using namespace std;

void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[index], arr[i]);
    }
}
int main()
{
    int arr[5] = {10,
                  21,
                  4,
                  7,
                  44};

    sortArray(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}
